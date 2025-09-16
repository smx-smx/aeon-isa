/**
 * @file extract.c
 * @author Smx (smxdev4@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2025-09-15
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include "aeon-elf-as.h"

#include <stdlib.h>
#include <dlfcn.h>
#include <sys/auxv.h>
#include <elf.h>
#include <string.h>
#include <link.h>
#include <linux/limits.h>
#include <unistd.h>
#include <stdbool.h>

#define _countof(array) (sizeof(array) / sizeof(array[0]))

static char *file_buffer = NULL;

static void elf_read(){
	char exe_path[PATH_MAX];
    ssize_t len = readlink("/proc/self/exe", exe_path, sizeof(exe_path) - 1);
    if (len == -1) {
        perror("readlink /proc/self/exe");
        abort();
    }
    exe_path[len] = '\0';

    FILE* file = fopen(exe_path, "rb");
    if (!file) {
        perror("fopen");
        abort();
    }

    // Read the entire file into a buffer
    fseek(file, 0, SEEK_END);
    long file_size = ftell(file);
    fseek(file, 0, SEEK_SET);
    
    file_buffer = malloc(file_size);
    if (!file_buffer) {
        fprintf(stderr, "Failed to allocate memory for ELF file\n");
        fclose(file);
        abort();
    }

    if (fread(file_buffer, 1, file_size, file) != file_size) {
        fprintf(stderr, "Failed to read ELF file\n");
        fclose(file);
        abort();
    }
    fclose(file);
}

char *addr2sym(void *sym){
    // Start parsing the ELF file from the buffer
    Elf32_Ehdr* ehdr = (Elf32_Ehdr*)file_buffer;
    if (memcmp(ehdr->e_ident, ELFMAG, SELFMAG) != 0) {
        fprintf(stderr, "Not a valid ELF file.\n");
        return NULL;
    }

    Elf32_Shdr* shdr = (Elf32_Shdr*)(file_buffer + ehdr->e_shoff);
    Elf32_Shdr* shstrtab_shdr = &shdr[ehdr->e_shstrndx];
    const char* shstrtab_p = file_buffer + shstrtab_shdr->sh_offset;

    Elf32_Shdr* symtab_shdr = NULL;
    Elf32_Shdr* strtab_shdr = NULL;

    // Find .symtab and its corresponding .strtab
    for (int i = 0; i < ehdr->e_shnum; i++) {
        if (strcmp(shstrtab_p + shdr[i].sh_name, ".symtab") == 0) {
            symtab_shdr = &shdr[i];
            // The corresponding string table is found via the sh_link field
            strtab_shdr = &shdr[symtab_shdr->sh_link];
            break;
        }
    }

    if (symtab_shdr) {
        Elf32_Sym* symtab = (Elf32_Sym*)(file_buffer + symtab_shdr->sh_offset);
        const char* strtab_p = file_buffer + strtab_shdr->sh_offset;
        int symbol_count = symtab_shdr->sh_size / symtab_shdr->sh_entsize;

        for (int i = 0; i < symbol_count; i++) {
			if(!symtab[i].st_name) continue;
			// Found the symbol in the file! Now calculate its runtime address.
			
			// Get the program's base address (the "slide" or relocation offset).
			// For a non-PIE executable, base_addr will be 0.
			// For a PIE executable, it will be the random address where it was loaded.
			Elf32_Phdr* phdr = (Elf32_Phdr*)getauxval(AT_PHDR);
			void* base_addr = NULL;
			
			// The base is the difference between the vaddr of the first loadable segment
			// and its actual location in memory. AT_PHDR points to the in-memory headers.
			for (int j = 0; j < ehdr->e_phnum; j++) {
				if (phdr[j].p_type == PT_LOAD) {
					base_addr = (void*)((char*)phdr - phdr[j].p_offset);
					break;
				}
			}
			
			void *result_addr = (void*)(uintptr_t)(symtab[i].st_value);
			if(result_addr == sym){
				const char *str_ptr = strtab_p + symtab[i].st_name;
				char *str = strdup(str_ptr);
				return str;
			}
		}
    }

    return NULL;
}

void* resolve_symbol(const char* symbol_name) {
    // Start parsing the ELF file from the buffer
    Elf32_Ehdr* ehdr = (Elf32_Ehdr*)file_buffer;
    if (memcmp(ehdr->e_ident, ELFMAG, SELFMAG) != 0) {
        fprintf(stderr, "Not a valid ELF file.\n");
        return NULL;
    }

    Elf32_Shdr* shdr = (Elf32_Shdr*)(file_buffer + ehdr->e_shoff);
    Elf32_Shdr* shstrtab_shdr = &shdr[ehdr->e_shstrndx];
    const char* shstrtab_p = file_buffer + shstrtab_shdr->sh_offset;

    Elf32_Shdr* symtab_shdr = NULL;
    Elf32_Shdr* strtab_shdr = NULL;

    // Find .symtab and its corresponding .strtab
    for (int i = 0; i < ehdr->e_shnum; i++) {
        if (strcmp(shstrtab_p + shdr[i].sh_name, ".symtab") == 0) {
            symtab_shdr = &shdr[i];
            // The corresponding string table is found via the sh_link field
            strtab_shdr = &shdr[symtab_shdr->sh_link];
            break;
        }
    }

    void* result_addr = NULL;

    if (symtab_shdr) {
        Elf32_Sym* symtab = (Elf32_Sym*)(file_buffer + symtab_shdr->sh_offset);
        const char* strtab_p = file_buffer + strtab_shdr->sh_offset;
        int symbol_count = symtab_shdr->sh_size / symtab_shdr->sh_entsize;

        for (int i = 0; i < symbol_count; i++) {
            if (symtab[i].st_name != 0 && strcmp(strtab_p + symtab[i].st_name, symbol_name) == 0) {
                // Found the symbol in the file! Now calculate its runtime address.
                
                // Get the program's base address (the "slide" or relocation offset).
                // For a non-PIE executable, base_addr will be 0.
                // For a PIE executable, it will be the random address where it was loaded.
                Elf32_Phdr* phdr = (Elf32_Phdr*)getauxval(AT_PHDR);
                void* base_addr = NULL;
                
                // The base is the difference between the vaddr of the first loadable segment
                // and its actual location in memory. AT_PHDR points to the in-memory headers.
                for (int j = 0; j < ehdr->e_phnum; j++) {
                    if (phdr[j].p_type == PT_LOAD) {
                        base_addr = (void*)((char*)phdr - phdr[j].p_offset);
                        break;
                    }
                }
                
                result_addr = (void*)(uintptr_t)(symtab[i].st_value);
                break;
            }
        }
    }

    return result_addr;
}

#define JSON_OBJ_BEGIN() \
	bool first_json_prop = true; \
	fprintf(out, "{")

#define JSON_OBJ_END() fprintf(out, "}")
#define JSON_ARR_BEGIN() \
	bool first_arr_item = true; \
	fprintf(out, "[");

#define JSON_X_NEXT(x) do { \
	if(x) x = false; \
	else fprintf(out, ","); \
} while(0)

#define JSON_ARR_NEXT() JSON_X_NEXT(first_arr_item)
#define JSON_PROP_NEXT() JSON_X_NEXT(first_json_prop)

#define JSON_ARR_END() fprintf(out, "]")
#define JSON_PROPF(name, fmt, ...) \
	JSON_PROP_NEXT(); \
	fprintf(out, "\"%s\":" fmt, name, ##__VA_ARGS__)
#define JSON_PROP(name) JSON_PROPF(name,)

#define JSON_STR(val) fprintf(out, "\"%s\"", val)
#define JSON_INT(val) fprintf(out, "%d", val)

//#define JSON_BOOL(val) fprintf(out, "%s", val ? "true" : "false")
#define JSON_PROPB(name, val) \
	JSON_PROPF(name, "%s", val ? "true" : "false")
#define JSON_PROPS(name, val) \
	JSON_PROPF(name, "\"%s\"", val)

#define RELOC_TYPE_LIST X(R_AEON_NONE) X(R_AEON_32) X(R_AEON_16) X(R_AEON_8) X(R_AEON_CONST) X(R_AEON_CONST_SPLIT) X(R_AEON_CONSTH) X(R_AEON_CONSTH_S) X(R_AEON_JUMPTARG) X(R_AEON_GNU_VTENTRY) X(R_AEON_GNU_VTINHERIT) X(R_AEON_GPREL16) X(R_AEON_GPREL16_SPLIT) X(R_AEON_8_PCREL) X(R_AEON_16_PCREL) X(R_AEON_24_PCREL) X(R_AEON_32_PCREL) X(R_AEON_32_DIFF) X(R_AEON_16_DIFF) X(R_AEON_8_DIFF) X(R_AEON_2) X(R_AEON_8_S1) X(R_AEON_8_S2) X(R_AEON_8_S3) X(R_AEON_16_S1) X(R_AEON_16_S2) X(R_AEON_16_S3) X(R_AEON_32_S1) X(R_AEON_32_S2) X(R_AEON_32_S3) X(R_AEON_10_PCREL) X(R_AEON_12_PCREL) X(R_AEON_18_PCREL) X(R_AEON_28_PCREL) X(R_AEON_GPREL8_S0) X(R_AEON_GPREL8_S1) X(R_AEON_GPREL8_S2) X(R_AEON_GPREL8_S3) X(R_AEON_GPREL16_S0) X(R_AEON_GPREL16_S1) X(R_AEON_GPREL16_S2) X(R_AEON_GPREL16_S3) X(R_AEON_GPREL32_S0) X(R_AEON_GPREL32_S1) X(R_AEON_GPREL32_S2) X(R_AEON_GPREL32_S3) X(R_AEON_32_LSB) X(R_AEON_16_LSB) X(R_AEON_8_LSB) X(R_AEON_12_PCREL_1) X(R_AEON_ALIGN) X(R_AEON_14_PCREL_S2) X(R_AEON_HI32_S) X(R_AEON_HI31_S) X(R_AEON_HI30_S) X(R_AEON_HI29_S) X(R_AEON_LO32_S) X(R_AEON_LO31_S) X(R_AEON_LO30_S) X(R_AEON_LO29_S) X(R_AEON_HI32) X(R_AEON_HI31) X(R_AEON_HI30) X(R_AEON_HI29) X(R_AEON_LO32) X(R_AEON_LO31) X(R_AEON_LO30) X(R_AEON_LO29) X(R_AEON_16_INSN) X(R_AEON_ORG) X(R_AEON_32_DIFF_LSB) X(R_AEON_16_DIFF_LSB) X(R_AEON_8_DIFF_LSB) X(R_AEON_GOTOFF16) X(R_AEON_GOTOFF16_SPLIT) X(R_AEON_GOTOFF8_S2) X(R_AEON_GOTOFF16_S2) X(R_AEON_GOTOFF32_S2) X(R_AEON_8_PLT) X(R_AEON_16_PLT) X(R_AEON_24_PLT) X(R_AEON_32_PLT) X(R_AEON_10_PLT) X(R_AEON_12_PLT) X(R_AEON_18_PLT) X(R_AEON_28_PLT) X(R_AEON_12_PLT_1) X(R_AEON_14_PLT_S2) X(R_AEON_28_PLT_S2) X(R_AEON_GOT_PLT) X(R_AEON_32_RELATIVE) X(R_AEON_COPY) X(R_AEON_GOTOFF8_S0) X(R_AEON_GOTOFF16_S0) X(R_AEON_GOTOFF32_S0) X(R_AEON_GP_MINUS_32) X(R_AEON_GP_MINUS_16) X(R_AEON_GP_MINUS_8) X(R_AEON_GP_MINUS_HI) X(R_AEON_GP_MINUS_LO) X(R_AEON_32_PCREL_S2) X(R_AEON_32_PCREL_S1) X(R_AEON_16_PCREL_S2) X(R_AEON_16_PCREL_S1) X(R_AEON_16_PCREL_S0) X(R_AEON_8_PCREL_S2) X(R_AEON_8_PCREL_S1) X(R_AEON_GOTPC8_S0) X(R_AEON_GOTPC16_S0) X(R_AEON_GOTPC32_S0) X(R_AEON_GOTPC8_S2) X(R_AEON_GOTPC16_S2) X(R_AEON_GOTPC32_S2) X(R_AEON_GOTPC32_FULL) X(R_AEON_32_PCREL_S0) X(R_AEON_8_PCREL_S0) X(R_AEON_GOTOFF8_S1) X(R_AEON_GOTOFF16_S1) X(R_AEON_GOTOFF32_S1) X(R_AEON_GOTPC8_S1) X(R_AEON_GOTPC16_S1) X(R_AEON_GOTPC32_S1) X(R_AEON_SHORTJUMPTARG) X(R_AEON_15_PCREL) X(R_AEON_GPREL8_S1_BITPOS1) X(R_AEON_GOTOFF8_S1_BITPOS1) X(R_AEON_GOTPC8_S1_BITPOS1) X(R_AEON_8_PCREL_S1_BITPOS1) X(R_AEON_8_S1_BITPOS1) X(R_AEON_GPREL8_S2_BITPOS2) X(R_AEON_GOTOFF8_S2_BITPOS2) X(R_AEON_GOTPC8_S2_BITPOS2) X(R_AEON_8_PCREL_S2_BITPOS2) X(R_AEON_8_S2_BITPOS2) X(R_AEON_GPREL16_S1_BITPOS1) X(R_AEON_GOTOFF16_S1_BITPOS1) X(R_AEON_GOTPC16_S1_BITPOS1) X(R_AEON_16_PCREL_S1_BITPOS1) X(R_AEON_16_S1_BITPOS1) X(R_AEON_GPREL16_S2_BITPOS2) X(R_AEON_GOTOFF16_S2_BITPOS2) X(R_AEON_GOTPC16_S2_BITPOS2) X(R_AEON_16_PCREL_S2_BITPOS2) X(R_AEON_16_S2_BITPOS2) X(R_AEON_CONSTH_5) X(R_AEON_CONSTH_5_S) X(R_AEON_CONSTH_13) X(R_AEON_CONSTH_13_S) X(R_AEON_CONSTH_BITPOS5) X(R_AEON_CONSTH_BITPOS5_S) X(R_AEON_8_PCREL_BITPOS2) X(R_AEON_8_PLT_BITPOS2) X(R_AEON_10_PCREL_BITPOS1) X(R_AEON_10_PLT_BITPOS1) X(R_AEON_10_PCREL_BITPOS3) X(R_AEON_10_PLT_BITPOS3) X(R_AEON_12_PCREL_BITPOS4) X(R_AEON_12_PLT_BITPOS4) X(R_AEON_13_PCREL_BITPOS3) X(R_AEON_13_PLT_BITPOS3) X(R_AEON_16_PCREL_BITPOS2) X(R_AEON_16_PLT_BITPOS2) X(R_AEON_18_PCREL_BITPOS1) X(R_AEON_18_PLT_BITPOS1) X(R_AEON_22_PCREL_BITPOS4) X(R_AEON_22_PLT_BITPOS4) X(R_AEON_23_PCREL_BITPOS3) X(R_AEON_23_PLT_BITPOS3) X(R_AEON_25_PCREL_BITPOS1) X(R_AEON_25_PLT_BITPOS1) X(R_AEON_max)
#define INSN_TYPE_LIST X(it_unknown) X(it_exception) X(it_arith) X(it_shift) X(it_compare) X(it_cond_branch) X(it_uncond_branch) X(it_indirect_jump) X(it_call) X(it_return) X(it_load) X(it_store) X(it_movimm) X(it_move) X(it_extend) X(it_nop) X(it_mac) X(it_float) X(it_simd) X(it_asic) X(it_cache) X(it_bs) X(it_subword) X(it_sys) X(it_hint) X(it_loop)
#define COMPLAIN_OVERFLOW_LIST X(complain_overflow_dont) X(complain_overflow_bitfield) X(complain_overflow_signed) X(complain_overflow_unsigned)

const char *insn_type_string(enum insn_type v){
	switch(v){
#define X(name) case name: return #name;
        INSN_TYPE_LIST
#undef X
		default: return "";
	}
}

const char *reloc_type_string(enum elf_aeon_reloc_type v){
	switch(v){
#define X(name) case name: return #name;
        RELOC_TYPE_LIST
#undef X
		default: return "";
	}
}

const char *complain_overflow_string(enum complain_overflow v){
	switch(v){
#define X(name) case name: return #name;
        COMPLAIN_OVERFLOW_LIST
#undef X
		default: return "";
	}
}

void extract_isa_opcodes(bin_isa *isa, FILE *out){
	JSON_ARR_BEGIN();
	for(aeon_opcode *opc = isa->isa->opcodes; opc->name; opc++){
		if(strlen(opc->name) < 1) break;
		JSON_ARR_NEXT();

		JSON_OBJ_BEGIN();
		JSON_PROPS("name", opc->name);
		JSON_PROPS("args", opc->args);
		JSON_PROPS("encoding", opc->encoding);
		JSON_PROPF("flags", "%u", opc->flags);
		JSON_PROPS("func_unit", insn_type_string(opc->func_unit));
		JSON_OBJ_END();
	}
	JSON_ARR_END();
}

void extract_isa_equiv(bin_isa *isa, FILE *out){
	JSON_ARR_BEGIN();
	for(aeon_insn_equiv **equiv_ptr = isa->isa->equiv; *equiv_ptr; equiv_ptr++){
		aeon_insn_equiv *equiv = *equiv_ptr;
		JSON_ARR_NEXT();
		JSON_OBJ_BEGIN();
		JSON_PROPS("insn", equiv->insn);
		JSON_PROP("equiv_insns");
		{
			JSON_ARR_BEGIN()
			for(int i=0; i<_countof(equiv->equiv_insns); i++){
				if(!equiv->equiv_insns[i]) continue;
				JSON_ARR_NEXT();
				JSON_STR(equiv->equiv_insns[i]);
			}
			JSON_ARR_END();
		}
		JSON_OBJ_END();
	}
	JSON_ARR_END();
}

void extract_isa_relocs(bin_isa *isa, FILE *out){
	JSON_ARR_BEGIN();
	for(int i=0; i<isa->reloc_howto_size; i++){
		reloc_howto_struct *howto = &isa->reloc_howto[i];
		if(!howto->name) continue;

		JSON_ARR_NEXT();
		JSON_OBJ_BEGIN();
		JSON_PROPF("type", "%u", howto->type);
		JSON_PROPF("rightshift", "%u", howto->rightshift);
		JSON_PROPF("size", "%d", howto->size);
		JSON_PROPF("bitsize", "%u", howto->bitsize);
		JSON_PROPB("pc_relative", howto->pc_relative);
		JSON_PROPF("bitpos", "%u", howto->bitpos);
		JSON_PROPS("complain_on_overflow", complain_overflow_string(howto->complain_on_overflow));
		char *special_function = addr2sym(howto->special_function);
		JSON_PROPS("special_function", special_function ? special_function : "");
		if(special_function) free(special_function);
		JSON_PROPS("name", howto->name);
		JSON_PROPB("partial_inplace", howto->partial_inplace);
		JSON_PROPF("src_mask", "%u", howto->src_mask);
		JSON_PROPF("dst_mask", "%u", howto->dst_mask);
		JSON_PROPB("pcrel_offset", howto->pcrel_offset);
		
		JSON_OBJ_END();
	}
	JSON_ARR_END();
}

void extract_isa_plt(plt_type *plt, FILE *out){
	JSON_OBJ_BEGIN();
	char *sym = addr2sym(plt);
	if(sym){
		JSON_PROPS("symbol", sym);
		free(sym);
	}
	{
		JSON_PROP("entry");
		JSON_ARR_BEGIN();
		for(int i=0; i<plt->entry_size; i++){
			JSON_ARR_NEXT();
			JSON_INT(plt->entry[i]);
		}
		JSON_ARR_END();
	}

	{
		JSON_PROP("header");
		JSON_ARR_BEGIN();
		for(int i=0; i<plt->header_size; i++){
			JSON_ARR_NEXT();
			JSON_INT(plt->header[i]);
		}
		JSON_ARR_END();
	}

	JSON_OBJ_END();
}

void extract_isa_plts(bin_isa *isa, FILE *out){
	JSON_ARR_BEGIN();
	unsigned i; plt_types *plts;
	for(i=0, plts = isa->plts; i<isa->plt_abis; i++, plts++){
		if(!plts->pic && !plts->nonpic) continue;
		JSON_ARR_NEXT();
		JSON_OBJ_BEGIN();
		if(plts->pic) {
			JSON_PROP("pic");
			extract_isa_plt(plts->pic, out);
		}
		if(plts->nonpic) {
			JSON_PROP("nonpic");
			extract_isa_plt(plts->nonpic, out);
		}
		JSON_OBJ_END();
	}
	JSON_ARR_END();
}

void extract_isa_far_stub(aeon_far_stub *stub, FILE *out){
	JSON_OBJ_BEGIN();
	{
		{
			JSON_PROP("stub");
			JSON_ARR_BEGIN();
			for(int i=0; i<stub->size; i++){
				JSON_ARR_NEXT();
				JSON_INT(stub->stub[i]);
			}
			JSON_ARR_END();
		}

		{
			JSON_PROP("relocs");
			JSON_ARR_BEGIN();
			for(int i=0; i<_countof(stub->relocs); i++){
				JSON_ARR_NEXT();
				JSON_OBJ_BEGIN();
				JSON_PROPF("r_offset", "%u", stub->relocs[i].r_offset);
				JSON_PROPF("r_type", "%d", stub->relocs[i].r_type);
				JSON_PROPS("r_type_name", reloc_type_string(stub->relocs[i].r_type));
				JSON_OBJ_END();
			}
			JSON_ARR_END();
		}
	}
	JSON_OBJ_END();
}

void extract_isa(const char *isa_symbol, FILE *out){
	bin_isa *isa = resolve_symbol(isa_symbol);

	JSON_OBJ_BEGIN();
	{
		JSON_PROP("opcodes");
		extract_isa_opcodes(isa, out);
		
		JSON_PROP("equiv");
		extract_isa_equiv(isa, out);

		JSON_PROP("relocs");
		extract_isa_relocs(isa, out);

		JSON_PROP("plts");
		extract_isa_plts(isa, out);

		if(isa->far_stub){
			JSON_PROP("far_stub");
			extract_isa_far_stub(isa->far_stub, out);
		}

		if(isa->far_stub_jump){
			JSON_PROP("far_stub_jump");
			extract_isa_far_stub(isa->far_stub_jump, out);
		}
	}
	JSON_OBJ_END();
}

void extract_isa_json(char *isa_symbol){
	printf("> writing %s.json\n", isa_symbol);
	char *cmd = NULL;
	asprintf(&cmd, "tee %1$s_raw.json | jq . > %1$s.json", isa_symbol);
	if(!cmd) abort();

	FILE *out = popen(cmd, "w");
	free(cmd);

	extract_isa(isa_symbol, out);
	fflush(out);
	fclose(out);
}

void extract_main(){
	extract_isa_json("aeon_aeon1_isa");
	extract_isa_json("aeon_aeon2_isa");
	extract_isa_json("aeon_aeonR2_isa");
	puts("--- Done");
}

void __attribute__((constructor(101))) init(){
	unsetenv("LD_PRELOAD");
	elf_read();
	extract_main();
	exit(0);
}
