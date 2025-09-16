#include <stdio.h>
#include <sys/types.h>
#include <sys/time.h>

typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef long double    longdouble;
typedef long long    longlong;
typedef unsigned long long    qword;
typedef long long    sqword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined3;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined5;
typedef unsigned long long    undefined6;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef struct _oasys_ar_data _oasys_ar_data, *P_oasys_ar_data;

struct _oasys_ar_data {
};

typedef struct _oasys_data _oasys_data, *P_oasys_data;

struct _oasys_data {
};

typedef struct aout_data_struct aout_data_struct, *Paout_data_struct;

struct aout_data_struct {
};

typedef struct bfd_pef_data_struct bfd_pef_data_struct, *Pbfd_pef_data_struct;

struct bfd_pef_data_struct {
};

typedef struct bfd_pef_xlib_data_struct bfd_pef_xlib_data_struct, *Pbfd_pef_xlib_data_struct;

struct bfd_pef_xlib_data_struct {
};

typedef struct bfd_sym_data_struct bfd_sym_data_struct, *Pbfd_sym_data_struct;

struct bfd_sym_data_struct {
};

typedef struct bout_data_struct bout_data_struct, *Pbout_data_struct;

struct bout_data_struct {
};

typedef struct cisco_core_struct cisco_core_struct, *Pcisco_core_struct;

struct cisco_core_struct {
};

typedef struct got_entry got_entry, *Pgot_entry;

struct got_entry {
};

typedef struct hppabsd_core_struct hppabsd_core_struct, *Phppabsd_core_struct;

struct hppabsd_core_struct {
};

typedef struct hpux_core_struct hpux_core_struct, *Phpux_core_struct;

struct hpux_core_struct {
};

typedef struct ieee_ar_data_struct ieee_ar_data_struct, *Pieee_ar_data_struct;

struct ieee_ar_data_struct {
};

typedef struct ieee_data_struct ieee_data_struct, *Pieee_data_struct;

struct ieee_data_struct {
};

typedef struct lineno_list lineno_list, *Plineno_list;

struct lineno_list {
};

typedef struct lynx_core_struct lynx_core_struct, *Plynx_core_struct;

struct lynx_core_struct {
};

typedef struct mach_o_data_struct mach_o_data_struct, *Pmach_o_data_struct;

struct mach_o_data_struct {
};

typedef struct mach_o_fat_data_struct mach_o_fat_data_struct, *Pmach_o_fat_data_struct;

struct mach_o_fat_data_struct {
};

typedef struct mips_elf_find_line mips_elf_find_line, *Pmips_elf_find_line;

struct mips_elf_find_line {
};

typedef struct mmo_data_struct mmo_data_struct, *Pmmo_data_struct;

struct mmo_data_struct {
};

typedef struct netbsd_core_struct netbsd_core_struct, *Pnetbsd_core_struct;

struct netbsd_core_struct {
};

typedef struct nlm_obj_tdata nlm_obj_tdata, *Pnlm_obj_tdata;

struct nlm_obj_tdata {
};

typedef struct osf_core_struct osf_core_struct, *Posf_core_struct;

struct osf_core_struct {
};

typedef struct plt_entry plt_entry, *Pplt_entry;

struct plt_entry {
};

typedef struct sco5_core_struct sco5_core_struct, *Psco5_core_struct;

struct sco5_core_struct {
};

typedef struct sgi_core_struct sgi_core_struct, *Psgi_core_struct;

struct sgi_core_struct {
};

typedef struct som_data_struct som_data_struct, *Psom_data_struct;

struct som_data_struct {
};

typedef struct sun_core_struct sun_core_struct, *Psun_core_struct;

struct sun_core_struct {
};

typedef struct trad_core_struct trad_core_struct, *Ptrad_core_struct;

struct trad_core_struct {
};

typedef struct versados_data_struct versados_data_struct, *Pversados_data_struct;

struct versados_data_struct {
};

typedef struct aeon_insn_equiv aeon_insn_equiv, *Paeon_insn_equiv;

struct aeon_insn_equiv {
    char *insn;
    uint flags;
    char *args;
    char *args_map;
    char *equiv_insns[6];
    int number_of_equiv_if_not_encode;
};

typedef struct aeon_insn_seq aeon_insn_seq, *Paeon_insn_seq;

struct aeon_insn_seq {
    char *insn;
    char *args;
    char *equiv_seq[5];
};

typedef struct aeon_insn_to_seq aeon_insn_to_seq, *Paeon_insn_to_seq;

struct aeon_insn_to_seq {
    char *insn;
    char *seq;
};

typedef struct aeon_isa aeon_isa, *Paeon_isa;

typedef struct aeon_letter aeon_letter, *Paeon_letter;

typedef struct aeon_opcode aeon_opcode, *Paeon_opcode;

typedef enum insn_type {
    it_unknown=0,
    it_exception=1,
    it_arith=2,
    it_shift=3,
    it_compare=4,
    it_cond_branch=5,
    it_uncond_branch=6,
    it_indirect_jump=7,
    it_call=8,
    it_return=9,
    it_load=10,
    it_store=11,
    it_movimm=12,
    it_move=13,
    it_extend=14,
    it_nop=15,
    it_mac=16,
    it_float=17,
    it_simd=18,
    it_asic=19,
    it_cache=20,
    it_bs=21,
    it_subword=22,
    it_sys=23,
    it_hint=24,
    it_loop=25
} insn_type;

struct aeon_isa {
    struct aeon_letter *letters;
    int (*l_to_reloc)(char, int);
    struct aeon_opcode *opcodes;
    struct aeon_insn_equiv **equiv;
    struct aeon_insn_seq **seq;
    struct aeon_insn_to_seq **to_seq;
};

struct aeon_opcode {
    char *name;
    char *args;
    char *encoding;
    void (*exec)(void);
    uint flags;
    enum insn_type func_unit;
    int for_encode_only;
    uint version_control;
};

struct aeon_letter {
    char letter;
    uint flags;
    uint len;
    uint shift;
    int add;
    int zero_is_max_plus_1;
    int ambigous_value;
};

typedef struct bin_enc bin_enc, *Pbin_enc;

typedef enum bintype {
    is_imm=0,
    is_reg=1,
    is_mvreg=2,
    is_amacreg=3,
    is_amacqaddr=4,
    is_pamacqaddr=5
} bintype;

struct bin_enc {
    struct aeon_letter *l;
    enum bintype bt;
    int *shift;
    struct bin_enc *next;
    char submaskindex;
    uchar submask0;
    uchar submask1;
    uchar subshift0;
    uchar subshift1;
    uchar mask[0];
};

typedef struct bin_eq_enc bin_eq_enc, *Pbin_eq_enc;

typedef struct equiv_map equiv_map, *Pequiv_map;

typedef struct bin_opcode bin_opcode, *Pbin_opcode;

typedef enum equiv_operator {
    eq_op_none=0,
    eq_op_lshift=1,
    eq_op_rshift=2
} equiv_operator;

struct equiv_map {
    int op_literal;
    ulong op_map;
    enum equiv_operator op_operator;
    long op_constant;
};

struct bin_eq_enc {
    char *args;
    uint ops;
    struct equiv_map op_map[10];
    struct aeon_insn_equiv *equiv;
    struct bin_opcode *bopc_list[0];
};

struct bin_opcode {
    uint len;
    uchar *nonzero_bits_mask;
    uchar *static_bits_mask;
    uchar *static_bits;
    struct bin_enc *encs;
    struct bin_enc *encs_nonzero;
    struct aeon_opcode *opc;
    struct bin_opcode *ambigous_bopc;
    struct bin_opcode *next;
    struct bin_eq_enc **equiv_list;
};

typedef struct bin_seq bin_seq, *Pbin_seq;

typedef struct seq_list seq_list, *Pseq_list;

struct seq_list {
    uint ops;
    struct equiv_map op_map[10];
    struct bin_opcode **bopc_list;
};

struct bin_seq {
    char *args;
    struct aeon_insn_seq *seq;
    struct seq_list seq_list[0];
};

typedef struct bin_to_seq bin_to_seq, *Pbin_to_seq;

struct bin_to_seq {
    struct bin_opcode *bopc;
    struct bin_seq *seq;
};

typedef struct decode_struct decode_struct, *Pdecode_struct;

struct decode_struct {
    int byte;
    struct bin_opcode *bopc;
    struct bin_opcode *bopc_encs_nonzero;
    struct decode_struct *next_run;
};

typedef uint bfd_vma;

typedef bfd_vma op_t;

typedef enum elf_aeon_reloc_type {
    R_AEON_NONE=0,
    R_AEON_32=1,
    R_AEON_16=2,
    R_AEON_8=3,
    R_AEON_CONST=4,
    R_AEON_CONST_SPLIT=5,
    R_AEON_CONSTH=6,
    R_AEON_CONSTH_S=7,
    R_AEON_JUMPTARG=8,
    R_AEON_GNU_VTENTRY=9,
    R_AEON_GNU_VTINHERIT=10,
    R_AEON_GPREL16=11,
    R_AEON_GPREL16_SPLIT=12,
    R_AEON_8_PCREL=13,
    R_AEON_16_PCREL=14,
    R_AEON_24_PCREL=15,
    R_AEON_32_PCREL=16,
    R_AEON_32_DIFF=17,
    R_AEON_16_DIFF=18,
    R_AEON_8_DIFF=19,
    R_AEON_2=20,
    R_AEON_8_S1=21,
    R_AEON_8_S2=22,
    R_AEON_8_S3=23,
    R_AEON_16_S1=24,
    R_AEON_16_S2=25,
    R_AEON_16_S3=26,
    R_AEON_32_S1=27,
    R_AEON_32_S2=28,
    R_AEON_32_S3=29,
    R_AEON_10_PCREL=30,
    R_AEON_12_PCREL=31,
    R_AEON_18_PCREL=32,
    R_AEON_28_PCREL=33,
    R_AEON_GPREL8_S0=34,
    R_AEON_GPREL8_S1=35,
    R_AEON_GPREL8_S2=36,
    R_AEON_GPREL8_S3=37,
    R_AEON_GPREL16_S0=38,
    R_AEON_GPREL16_S1=39,
    R_AEON_GPREL16_S2=40,
    R_AEON_GPREL16_S3=41,
    R_AEON_GPREL32_S0=42,
    R_AEON_GPREL32_S1=43,
    R_AEON_GPREL32_S2=44,
    R_AEON_GPREL32_S3=45,
    R_AEON_32_LSB=46,
    R_AEON_16_LSB=47,
    R_AEON_8_LSB=48,
    R_AEON_12_PCREL_1=49,
    R_AEON_ALIGN=50,
    R_AEON_14_PCREL_S2=51,
    R_AEON_HI32_S=52,
    R_AEON_HI31_S=53,
    R_AEON_HI30_S=54,
    R_AEON_HI29_S=55,
    R_AEON_LO32_S=56,
    R_AEON_LO31_S=57,
    R_AEON_LO30_S=58,
    R_AEON_LO29_S=59,
    R_AEON_HI32=60,
    R_AEON_HI31=61,
    R_AEON_HI30=62,
    R_AEON_HI29=63,
    R_AEON_LO32=64,
    R_AEON_LO31=65,
    R_AEON_LO30=66,
    R_AEON_LO29=67,
    R_AEON_16_INSN=68,
    R_AEON_ORG=69,
    R_AEON_32_DIFF_LSB=70,
    R_AEON_16_DIFF_LSB=71,
    R_AEON_8_DIFF_LSB=72,
    R_AEON_GOTOFF16=73,
    R_AEON_GOTOFF16_SPLIT=74,
    R_AEON_GOTOFF8_S2=75,
    R_AEON_GOTOFF16_S2=76,
    R_AEON_GOTOFF32_S2=77,
    R_AEON_8_PLT=78,
    R_AEON_16_PLT=79,
    R_AEON_24_PLT=80,
    R_AEON_32_PLT=81,
    R_AEON_10_PLT=82,
    R_AEON_12_PLT=83,
    R_AEON_18_PLT=84,
    R_AEON_28_PLT=85,
    R_AEON_12_PLT_1=86,
    R_AEON_14_PLT_S2=87,
    R_AEON_28_PLT_S2=88,
    R_AEON_GOT_PLT=89,
    R_AEON_32_RELATIVE=90,
    R_AEON_COPY=91,
    R_AEON_GOTOFF8_S0=92,
    R_AEON_GOTOFF16_S0=93,
    R_AEON_GOTOFF32_S0=94,
    R_AEON_GP_MINUS_32=95,
    R_AEON_GP_MINUS_16=96,
    R_AEON_GP_MINUS_8=97,
    R_AEON_GP_MINUS_HI=98,
    R_AEON_GP_MINUS_LO=99,
    R_AEON_32_PCREL_S2=100,
    R_AEON_32_PCREL_S1=101,
    R_AEON_16_PCREL_S2=102,
    R_AEON_16_PCREL_S1=103,
    R_AEON_16_PCREL_S0=104,
    R_AEON_8_PCREL_S2=105,
    R_AEON_8_PCREL_S1=106,
    R_AEON_GOTPC8_S0=107,
    R_AEON_GOTPC16_S0=108,
    R_AEON_GOTPC32_S0=109,
    R_AEON_GOTPC8_S2=110,
    R_AEON_GOTPC16_S2=111,
    R_AEON_GOTPC32_S2=112,
    R_AEON_GOTPC32_FULL=113,
    R_AEON_32_PCREL_S0=114,
    R_AEON_8_PCREL_S0=115,
    R_AEON_GOTOFF8_S1=116,
    R_AEON_GOTOFF16_S1=117,
    R_AEON_GOTOFF32_S1=118,
    R_AEON_GOTPC8_S1=119,
    R_AEON_GOTPC16_S1=120,
    R_AEON_GOTPC32_S1=121,
    R_AEON_SHORTJUMPTARG=122,
    R_AEON_15_PCREL=123,
    R_AEON_GPREL8_S1_BITPOS1=124,
    R_AEON_GOTOFF8_S1_BITPOS1=125,
    R_AEON_GOTPC8_S1_BITPOS1=126,
    R_AEON_8_PCREL_S1_BITPOS1=127,
    R_AEON_8_S1_BITPOS1=128,
    R_AEON_GPREL8_S2_BITPOS2=129,
    R_AEON_GOTOFF8_S2_BITPOS2=130,
    R_AEON_GOTPC8_S2_BITPOS2=131,
    R_AEON_8_PCREL_S2_BITPOS2=132,
    R_AEON_8_S2_BITPOS2=133,
    R_AEON_GPREL16_S1_BITPOS1=134,
    R_AEON_GOTOFF16_S1_BITPOS1=135,
    R_AEON_GOTPC16_S1_BITPOS1=136,
    R_AEON_16_PCREL_S1_BITPOS1=137,
    R_AEON_16_S1_BITPOS1=138,
    R_AEON_GPREL16_S2_BITPOS2=139,
    R_AEON_GOTOFF16_S2_BITPOS2=140,
    R_AEON_GOTPC16_S2_BITPOS2=141,
    R_AEON_16_PCREL_S2_BITPOS2=142,
    R_AEON_16_S2_BITPOS2=143,
    R_AEON_CONSTH_5=144,
    R_AEON_CONSTH_5_S=145,
    R_AEON_CONSTH_13=146,
    R_AEON_CONSTH_13_S=147,
    R_AEON_CONSTH_BITPOS5=148,
    R_AEON_CONSTH_BITPOS5_S=149,
    R_AEON_8_PCREL_BITPOS2=150,
    R_AEON_8_PLT_BITPOS2=151,
    R_AEON_10_PCREL_BITPOS1=152,
    R_AEON_10_PLT_BITPOS1=153,
    R_AEON_10_PCREL_BITPOS3=154,
    R_AEON_10_PLT_BITPOS3=155,
    R_AEON_12_PCREL_BITPOS4=156,
    R_AEON_12_PLT_BITPOS4=157,
    R_AEON_13_PCREL_BITPOS3=158,
    R_AEON_13_PLT_BITPOS3=159,
    R_AEON_16_PCREL_BITPOS2=160,
    R_AEON_16_PLT_BITPOS2=161,
    R_AEON_18_PCREL_BITPOS1=162,
    R_AEON_18_PLT_BITPOS1=163,
    R_AEON_22_PCREL_BITPOS4=164,
    R_AEON_22_PLT_BITPOS4=165,
    R_AEON_23_PCREL_BITPOS3=166,
    R_AEON_23_PLT_BITPOS3=167,
    R_AEON_25_PCREL_BITPOS1=168,
    R_AEON_25_PLT_BITPOS1=169,
    R_AEON_max=170
} elf_aeon_reloc_type;

typedef struct app_save app_save, *Papp_save;

struct app_save {
    int state;
    int old_state;
    char *out_string;
    char out_buf[20];
    int add_newlines;
    char *saved_input;
    int saved_input_len;
    char *mri_state;
    char mri_last_ch;
};

typedef struct ar_hdr ar_hdr, *Par_hdr;

struct ar_hdr {
    char ar_name[16];
    char ar_date[12];
    char ar_uid[6];
    char ar_gid[6];
    char ar_mode[8];
    char ar_size[10];
    char ar_fmag[2];
};

typedef struct ar_cache ar_cache, *Par_cache;

typedef longlong file_ptr;

typedef struct bfd bfd, *Pbfd;

typedef struct bfd_target bfd_target, *Pbfd_target;

typedef qword bfd_uint64_t;

typedef sqword bfd_int64_t;

typedef int bfd_signed_vma;

typedef int bfd_boolean;

typedef struct bfd_section bfd_section, *Pbfd_section;

typedef struct bfd_section *sec_ptr;

typedef uint bfd_size_type;

typedef struct _bfd_window _bfd_window, *P_bfd_window;

typedef struct _bfd_window bfd_window;

typedef struct bfd_link_info bfd_link_info, *Pbfd_link_info;

typedef struct bfd_symbol bfd_symbol, *Pbfd_symbol;

typedef struct bfd_symbol asymbol;

typedef uint flagword;

typedef struct orl orl, *Porl;

typedef uint symindex;

typedef struct stat stat, *Pstat;

typedef enum bfd_print_symbol {
    bfd_print_symbol_name=0,
    bfd_print_symbol_more=1,
    bfd_print_symbol_all=2
} bfd_print_symbol;

typedef enum bfd_print_symbol bfd_print_symbol_type;

typedef struct _symbol_info _symbol_info, *P_symbol_info;

typedef struct _symbol_info symbol_info;

typedef struct lineno_cache_entry lineno_cache_entry, *Plineno_cache_entry;

typedef struct lineno_cache_entry alent;

typedef struct reloc_cache_entry reloc_cache_entry, *Preloc_cache_entry;

typedef struct reloc_cache_entry arelent;

typedef struct reloc_howto_struct reloc_howto_struct, *Preloc_howto_struct;

typedef enum bfd_reloc_status {
    bfd_reloc_ok=0,
    bfd_reloc_overflow=1,
    bfd_reloc_outofrange=2,
    bfd_reloc_continue=3,
    bfd_reloc_notsupported=4,
    bfd_reloc_other=5,
    bfd_reloc_undefined=6,
    bfd_reloc_dangerous=7
} bfd_reloc_status;

typedef enum bfd_reloc_status bfd_reloc_status_type;

typedef struct bfd_section asection;

typedef enum bfd_reloc_code_real {
    _dummy_first_bfd_reloc_code_real=0,
    BFD_RELOC_64=1,
    BFD_RELOC_32=2,
    BFD_RELOC_26=3,
    BFD_RELOC_24=4,
    BFD_RELOC_16=5,
    BFD_RELOC_14=6,
    BFD_RELOC_8=7,
    BFD_RELOC_64_PCREL=8,
    BFD_RELOC_32_PCREL=9,
    BFD_RELOC_24_PCREL=10,
    BFD_RELOC_16_PCREL=11,
    BFD_RELOC_12_PCREL=12,
    BFD_RELOC_12_PCREL_1=13,
    BFD_RELOC_8_PCREL=14,
    BFD_RELOC_32_SECREL=15,
    BFD_RELOC_32_GOT_PCREL=16,
    BFD_RELOC_16_GOT_PCREL=17,
    BFD_RELOC_8_GOT_PCREL=18,
    BFD_RELOC_32_GOTOFF=19,
    BFD_RELOC_16_GOTOFF=20,
    BFD_RELOC_LO16_GOTOFF=21,
    BFD_RELOC_HI16_GOTOFF=22,
    BFD_RELOC_HI16_S_GOTOFF=23,
    BFD_RELOC_8_GOTOFF=24,
    BFD_RELOC_64_PLT_PCREL=25,
    BFD_RELOC_32_PLT_PCREL=26,
    BFD_RELOC_24_PLT_PCREL=27,
    BFD_RELOC_16_PLT_PCREL=28,
    BFD_RELOC_8_PLT_PCREL=29,
    BFD_RELOC_64_PLTOFF=30,
    BFD_RELOC_32_PLTOFF=31,
    BFD_RELOC_16_PLTOFF=32,
    BFD_RELOC_LO16_PLTOFF=33,
    BFD_RELOC_HI16_PLTOFF=34,
    BFD_RELOC_HI16_S_PLTOFF=35,
    BFD_RELOC_8_PLTOFF=36,
    BFD_RELOC_68K_GLOB_DAT=37,
    BFD_RELOC_68K_JMP_SLOT=38,
    BFD_RELOC_68K_RELATIVE=39,
    BFD_RELOC_32_BASEREL=40,
    BFD_RELOC_16_BASEREL=41,
    BFD_RELOC_LO16_BASEREL=42,
    BFD_RELOC_HI16_BASEREL=43,
    BFD_RELOC_HI16_S_BASEREL=44,
    BFD_RELOC_8_BASEREL=45,
    BFD_RELOC_RVA=46,
    BFD_RELOC_8_FFnn=47,
    BFD_RELOC_32_PCREL_S2=48,
    BFD_RELOC_16_PCREL_S2=49,
    BFD_RELOC_23_PCREL_S2=50,
    BFD_RELOC_24_PCREL_S2=51,
    BFD_RELOC_28_PCREL_S2=52,
    BFD_RELOC_14_PCREL_S2=53,
    BFD_RELOC_HI22=54,
    BFD_RELOC_LO10=55,
    BFD_RELOC_GPREL16=56,
    BFD_RELOC_GPREL32=57,
    BFD_RELOC_I960_CALLJ=58,
    BFD_RELOC_NONE=59,
    BFD_RELOC_SPARC_WDISP22=60,
    BFD_RELOC_SPARC22=61,
    BFD_RELOC_SPARC13=62,
    BFD_RELOC_SPARC_GOT10=63,
    BFD_RELOC_SPARC_GOT13=64,
    BFD_RELOC_SPARC_GOT22=65,
    BFD_RELOC_SPARC_PC10=66,
    BFD_RELOC_SPARC_PC22=67,
    BFD_RELOC_SPARC_WPLT30=68,
    BFD_RELOC_SPARC_COPY=69,
    BFD_RELOC_SPARC_GLOB_DAT=70,
    BFD_RELOC_SPARC_JMP_SLOT=71,
    BFD_RELOC_SPARC_RELATIVE=72,
    BFD_RELOC_SPARC_UA16=73,
    BFD_RELOC_SPARC_UA32=74,
    BFD_RELOC_SPARC_UA64=75,
    BFD_RELOC_SPARC_GOTDATA_HIX22=76,
    BFD_RELOC_SPARC_GOTDATA_LOX10=77,
    BFD_RELOC_SPARC_GOTDATA_OP_HIX22=78,
    BFD_RELOC_SPARC_GOTDATA_OP_LOX10=79,
    BFD_RELOC_SPARC_GOTDATA_OP=80,
    BFD_RELOC_SPARC_BASE13=81,
    BFD_RELOC_SPARC_BASE22=82,
    BFD_RELOC_SPARC_10=83,
    BFD_RELOC_SPARC_11=84,
    BFD_RELOC_SPARC_OLO10=85,
    BFD_RELOC_SPARC_HH22=86,
    BFD_RELOC_SPARC_HM10=87,
    BFD_RELOC_SPARC_LM22=88,
    BFD_RELOC_SPARC_PC_HH22=89,
    BFD_RELOC_SPARC_PC_HM10=90,
    BFD_RELOC_SPARC_PC_LM22=91,
    BFD_RELOC_SPARC_WDISP16=92,
    BFD_RELOC_SPARC_WDISP19=93,
    BFD_RELOC_SPARC_7=94,
    BFD_RELOC_SPARC_6=95,
    BFD_RELOC_SPARC_5=96,
    BFD_RELOC_SPARC_PLT32=97,
    BFD_RELOC_SPARC_PLT64=98,
    BFD_RELOC_SPARC_HIX22=99,
    BFD_RELOC_SPARC_LOX10=100,
    BFD_RELOC_SPARC_H44=101,
    BFD_RELOC_SPARC_M44=102,
    BFD_RELOC_SPARC_L44=103,
    BFD_RELOC_SPARC_REGISTER=104,
    BFD_RELOC_SPARC_REV32=105,
    BFD_RELOC_SPARC_TLS_GD_HI22=106,
    BFD_RELOC_SPARC_TLS_GD_LO10=107,
    BFD_RELOC_SPARC_TLS_GD_ADD=108,
    BFD_RELOC_SPARC_TLS_GD_CALL=109,
    BFD_RELOC_SPARC_TLS_LDM_HI22=110,
    BFD_RELOC_SPARC_TLS_LDM_LO10=111,
    BFD_RELOC_SPARC_TLS_LDM_ADD=112,
    BFD_RELOC_SPARC_TLS_LDM_CALL=113,
    BFD_RELOC_SPARC_TLS_LDO_HIX22=114,
    BFD_RELOC_SPARC_TLS_LDO_LOX10=115,
    BFD_RELOC_SPARC_TLS_LDO_ADD=116,
    BFD_RELOC_SPARC_TLS_IE_HI22=117,
    BFD_RELOC_SPARC_TLS_IE_LO10=118,
    BFD_RELOC_SPARC_TLS_IE_LD=119,
    BFD_RELOC_SPARC_TLS_IE_LDX=120,
    BFD_RELOC_SPARC_TLS_IE_ADD=121,
    BFD_RELOC_SPARC_TLS_LE_HIX22=122,
    BFD_RELOC_SPARC_TLS_LE_LOX10=123,
    BFD_RELOC_SPARC_TLS_DTPMOD32=124,
    BFD_RELOC_SPARC_TLS_DTPMOD64=125,
    BFD_RELOC_SPARC_TLS_DTPOFF32=126,
    BFD_RELOC_SPARC_TLS_DTPOFF64=127,
    BFD_RELOC_SPARC_TLS_TPOFF32=128,
    BFD_RELOC_SPARC_TLS_TPOFF64=129,
    BFD_RELOC_SPU_IMM7=130,
    BFD_RELOC_SPU_IMM8=131,
    BFD_RELOC_SPU_IMM10=132,
    BFD_RELOC_SPU_IMM10W=133,
    BFD_RELOC_SPU_IMM16=134,
    BFD_RELOC_SPU_IMM16W=135,
    BFD_RELOC_SPU_IMM18=136,
    BFD_RELOC_SPU_PCREL9a=137,
    BFD_RELOC_SPU_PCREL9b=138,
    BFD_RELOC_SPU_PCREL16=139,
    BFD_RELOC_SPU_LO16=140,
    BFD_RELOC_SPU_HI16=141,
    BFD_RELOC_SPU_PPU32=142,
    BFD_RELOC_SPU_PPU64=143,
    BFD_RELOC_ALPHA_GPDISP_HI16=144,
    BFD_RELOC_ALPHA_GPDISP_LO16=145,
    BFD_RELOC_ALPHA_GPDISP=146,
    BFD_RELOC_ALPHA_LITERAL=147,
    BFD_RELOC_ALPHA_ELF_LITERAL=148,
    BFD_RELOC_ALPHA_LITUSE=149,
    BFD_RELOC_ALPHA_HINT=150,
    BFD_RELOC_ALPHA_LINKAGE=151,
    BFD_RELOC_ALPHA_CODEADDR=152,
    BFD_RELOC_ALPHA_GPREL_HI16=153,
    BFD_RELOC_ALPHA_GPREL_LO16=154,
    BFD_RELOC_ALPHA_BRSGP=155,
    BFD_RELOC_ALPHA_TLSGD=156,
    BFD_RELOC_ALPHA_TLSLDM=157,
    BFD_RELOC_ALPHA_DTPMOD64=158,
    BFD_RELOC_ALPHA_GOTDTPREL16=159,
    BFD_RELOC_ALPHA_DTPREL64=160,
    BFD_RELOC_ALPHA_DTPREL_HI16=161,
    BFD_RELOC_ALPHA_DTPREL_LO16=162,
    BFD_RELOC_ALPHA_DTPREL16=163,
    BFD_RELOC_ALPHA_GOTTPREL16=164,
    BFD_RELOC_ALPHA_TPREL64=165,
    BFD_RELOC_ALPHA_TPREL_HI16=166,
    BFD_RELOC_ALPHA_TPREL_LO16=167,
    BFD_RELOC_ALPHA_TPREL16=168,
    BFD_RELOC_MIPS_JMP=169,
    BFD_RELOC_MIPS16_JMP=170,
    BFD_RELOC_MIPS16_GPREL=171,
    BFD_RELOC_HI16=172,
    BFD_RELOC_HI16_S=173,
    BFD_RELOC_LO16=174,
    BFD_RELOC_HI16_PCREL=175,
    BFD_RELOC_HI16_S_PCREL=176,
    BFD_RELOC_LO16_PCREL=177,
    BFD_RELOC_MIPS16_GOT16=178,
    BFD_RELOC_MIPS16_CALL16=179,
    BFD_RELOC_MIPS16_HI16=180,
    BFD_RELOC_MIPS16_HI16_S=181,
    BFD_RELOC_MIPS16_LO16=182,
    BFD_RELOC_MIPS_LITERAL=183,
    BFD_RELOC_MIPS_GOT16=184,
    BFD_RELOC_MIPS_CALL16=185,
    BFD_RELOC_MIPS_GOT_HI16=186,
    BFD_RELOC_MIPS_GOT_LO16=187,
    BFD_RELOC_MIPS_CALL_HI16=188,
    BFD_RELOC_MIPS_CALL_LO16=189,
    BFD_RELOC_MIPS_SUB=190,
    BFD_RELOC_MIPS_GOT_PAGE=191,
    BFD_RELOC_MIPS_GOT_OFST=192,
    BFD_RELOC_MIPS_GOT_DISP=193,
    BFD_RELOC_MIPS_SHIFT5=194,
    BFD_RELOC_MIPS_SHIFT6=195,
    BFD_RELOC_MIPS_INSERT_A=196,
    BFD_RELOC_MIPS_INSERT_B=197,
    BFD_RELOC_MIPS_DELETE=198,
    BFD_RELOC_MIPS_HIGHEST=199,
    BFD_RELOC_MIPS_HIGHER=200,
    BFD_RELOC_MIPS_SCN_DISP=201,
    BFD_RELOC_MIPS_REL16=202,
    BFD_RELOC_MIPS_RELGOT=203,
    BFD_RELOC_MIPS_JALR=204,
    BFD_RELOC_MIPS_TLS_DTPMOD32=205,
    BFD_RELOC_MIPS_TLS_DTPREL32=206,
    BFD_RELOC_MIPS_TLS_DTPMOD64=207,
    BFD_RELOC_MIPS_TLS_DTPREL64=208,
    BFD_RELOC_MIPS_TLS_GD=209,
    BFD_RELOC_MIPS_TLS_LDM=210,
    BFD_RELOC_MIPS_TLS_DTPREL_HI16=211,
    BFD_RELOC_MIPS_TLS_DTPREL_LO16=212,
    BFD_RELOC_MIPS_TLS_GOTTPREL=213,
    BFD_RELOC_MIPS_TLS_TPREL32=214,
    BFD_RELOC_MIPS_TLS_TPREL64=215,
    BFD_RELOC_MIPS_TLS_TPREL_HI16=216,
    BFD_RELOC_MIPS_TLS_TPREL_LO16=217,
    BFD_RELOC_MIPS_COPY=218,
    BFD_RELOC_MIPS_JUMP_SLOT=219,
    BFD_RELOC_FRV_LABEL16=220,
    BFD_RELOC_FRV_LABEL24=221,
    BFD_RELOC_FRV_LO16=222,
    BFD_RELOC_FRV_HI16=223,
    BFD_RELOC_FRV_GPREL12=224,
    BFD_RELOC_FRV_GPRELU12=225,
    BFD_RELOC_FRV_GPREL32=226,
    BFD_RELOC_FRV_GPRELHI=227,
    BFD_RELOC_FRV_GPRELLO=228,
    BFD_RELOC_FRV_GOT12=229,
    BFD_RELOC_FRV_GOTHI=230,
    BFD_RELOC_FRV_GOTLO=231,
    BFD_RELOC_FRV_FUNCDESC=232,
    BFD_RELOC_FRV_FUNCDESC_GOT12=233,
    BFD_RELOC_FRV_FUNCDESC_GOTHI=234,
    BFD_RELOC_FRV_FUNCDESC_GOTLO=235,
    BFD_RELOC_FRV_FUNCDESC_VALUE=236,
    BFD_RELOC_FRV_FUNCDESC_GOTOFF12=237,
    BFD_RELOC_FRV_FUNCDESC_GOTOFFHI=238,
    BFD_RELOC_FRV_FUNCDESC_GOTOFFLO=239,
    BFD_RELOC_FRV_GOTOFF12=240,
    BFD_RELOC_FRV_GOTOFFHI=241,
    BFD_RELOC_FRV_GOTOFFLO=242,
    BFD_RELOC_FRV_GETTLSOFF=243,
    BFD_RELOC_FRV_TLSDESC_VALUE=244,
    BFD_RELOC_FRV_GOTTLSDESC12=245,
    BFD_RELOC_FRV_GOTTLSDESCHI=246,
    BFD_RELOC_FRV_GOTTLSDESCLO=247,
    BFD_RELOC_FRV_TLSMOFF12=248,
    BFD_RELOC_FRV_TLSMOFFHI=249,
    BFD_RELOC_FRV_TLSMOFFLO=250,
    BFD_RELOC_FRV_GOTTLSOFF12=251,
    BFD_RELOC_FRV_GOTTLSOFFHI=252,
    BFD_RELOC_FRV_GOTTLSOFFLO=253,
    BFD_RELOC_FRV_TLSOFF=254,
    BFD_RELOC_FRV_TLSDESC_RELAX=255,
    BFD_RELOC_FRV_GETTLSOFF_RELAX=256,
    BFD_RELOC_FRV_TLSOFF_RELAX=257,
    BFD_RELOC_FRV_TLSMOFF=258,
    BFD_RELOC_MN10300_GOTOFF24=259,
    BFD_RELOC_MN10300_GOT32=260,
    BFD_RELOC_MN10300_GOT24=261,
    BFD_RELOC_MN10300_GOT16=262,
    BFD_RELOC_MN10300_COPY=263,
    BFD_RELOC_MN10300_GLOB_DAT=264,
    BFD_RELOC_MN10300_JMP_SLOT=265,
    BFD_RELOC_MN10300_RELATIVE=266,
    BFD_RELOC_MN10300_SYM_DIFF=267,
    BFD_RELOC_MN10300_ALIGN=268,
    BFD_RELOC_386_GOT32=269,
    BFD_RELOC_386_PLT32=270,
    BFD_RELOC_386_COPY=271,
    BFD_RELOC_386_GLOB_DAT=272,
    BFD_RELOC_386_JUMP_SLOT=273,
    BFD_RELOC_386_RELATIVE=274,
    BFD_RELOC_386_GOTOFF=275,
    BFD_RELOC_386_GOTPC=276,
    BFD_RELOC_386_TLS_TPOFF=277,
    BFD_RELOC_386_TLS_IE=278,
    BFD_RELOC_386_TLS_GOTIE=279,
    BFD_RELOC_386_TLS_LE=280,
    BFD_RELOC_386_TLS_GD=281,
    BFD_RELOC_386_TLS_LDM=282,
    BFD_RELOC_386_TLS_LDO_32=283,
    BFD_RELOC_386_TLS_IE_32=284,
    BFD_RELOC_386_TLS_LE_32=285,
    BFD_RELOC_386_TLS_DTPMOD32=286,
    BFD_RELOC_386_TLS_DTPOFF32=287,
    BFD_RELOC_386_TLS_TPOFF32=288,
    BFD_RELOC_386_TLS_GOTDESC=289,
    BFD_RELOC_386_TLS_DESC_CALL=290,
    BFD_RELOC_386_TLS_DESC=291,
    BFD_RELOC_X86_64_GOT32=292,
    BFD_RELOC_X86_64_PLT32=293,
    BFD_RELOC_X86_64_COPY=294,
    BFD_RELOC_X86_64_GLOB_DAT=295,
    BFD_RELOC_X86_64_JUMP_SLOT=296,
    BFD_RELOC_X86_64_RELATIVE=297,
    BFD_RELOC_X86_64_GOTPCREL=298,
    BFD_RELOC_X86_64_32S=299,
    BFD_RELOC_X86_64_DTPMOD64=300,
    BFD_RELOC_X86_64_DTPOFF64=301,
    BFD_RELOC_X86_64_TPOFF64=302,
    BFD_RELOC_X86_64_TLSGD=303,
    BFD_RELOC_X86_64_TLSLD=304,
    BFD_RELOC_X86_64_DTPOFF32=305,
    BFD_RELOC_X86_64_GOTTPOFF=306,
    BFD_RELOC_X86_64_TPOFF32=307,
    BFD_RELOC_X86_64_GOTOFF64=308,
    BFD_RELOC_X86_64_GOTPC32=309,
    BFD_RELOC_X86_64_GOT64=310,
    BFD_RELOC_X86_64_GOTPCREL64=311,
    BFD_RELOC_X86_64_GOTPC64=312,
    BFD_RELOC_X86_64_GOTPLT64=313,
    BFD_RELOC_X86_64_PLTOFF64=314,
    BFD_RELOC_X86_64_GOTPC32_TLSDESC=315,
    BFD_RELOC_X86_64_TLSDESC_CALL=316,
    BFD_RELOC_X86_64_TLSDESC=317,
    BFD_RELOC_NS32K_IMM_8=318,
    BFD_RELOC_NS32K_IMM_16=319,
    BFD_RELOC_NS32K_IMM_32=320,
    BFD_RELOC_NS32K_IMM_8_PCREL=321,
    BFD_RELOC_NS32K_IMM_16_PCREL=322,
    BFD_RELOC_NS32K_IMM_32_PCREL=323,
    BFD_RELOC_NS32K_DISP_8=324,
    BFD_RELOC_NS32K_DISP_16=325,
    BFD_RELOC_NS32K_DISP_32=326,
    BFD_RELOC_NS32K_DISP_8_PCREL=327,
    BFD_RELOC_NS32K_DISP_16_PCREL=328,
    BFD_RELOC_NS32K_DISP_32_PCREL=329,
    BFD_RELOC_PDP11_DISP_8_PCREL=330,
    BFD_RELOC_PDP11_DISP_6_PCREL=331,
    BFD_RELOC_PJ_CODE_HI16=332,
    BFD_RELOC_PJ_CODE_LO16=333,
    BFD_RELOC_PJ_CODE_DIR16=334,
    BFD_RELOC_PJ_CODE_DIR32=335,
    BFD_RELOC_PJ_CODE_REL16=336,
    BFD_RELOC_PJ_CODE_REL32=337,
    BFD_RELOC_PPC_B26=338,
    BFD_RELOC_PPC_BA26=339,
    BFD_RELOC_PPC_TOC16=340,
    BFD_RELOC_PPC_B16=341,
    BFD_RELOC_PPC_B16_BRTAKEN=342,
    BFD_RELOC_PPC_B16_BRNTAKEN=343,
    BFD_RELOC_PPC_BA16=344,
    BFD_RELOC_PPC_BA16_BRTAKEN=345,
    BFD_RELOC_PPC_BA16_BRNTAKEN=346,
    BFD_RELOC_PPC_COPY=347,
    BFD_RELOC_PPC_GLOB_DAT=348,
    BFD_RELOC_PPC_JMP_SLOT=349,
    BFD_RELOC_PPC_RELATIVE=350,
    BFD_RELOC_PPC_LOCAL24PC=351,
    BFD_RELOC_PPC_EMB_NADDR32=352,
    BFD_RELOC_PPC_EMB_NADDR16=353,
    BFD_RELOC_PPC_EMB_NADDR16_LO=354,
    BFD_RELOC_PPC_EMB_NADDR16_HI=355,
    BFD_RELOC_PPC_EMB_NADDR16_HA=356,
    BFD_RELOC_PPC_EMB_SDAI16=357,
    BFD_RELOC_PPC_EMB_SDA2I16=358,
    BFD_RELOC_PPC_EMB_SDA2REL=359,
    BFD_RELOC_PPC_EMB_SDA21=360,
    BFD_RELOC_PPC_EMB_MRKREF=361,
    BFD_RELOC_PPC_EMB_RELSEC16=362,
    BFD_RELOC_PPC_EMB_RELST_LO=363,
    BFD_RELOC_PPC_EMB_RELST_HI=364,
    BFD_RELOC_PPC_EMB_RELST_HA=365,
    BFD_RELOC_PPC_EMB_BIT_FLD=366,
    BFD_RELOC_PPC_EMB_RELSDA=367,
    BFD_RELOC_PPC64_HIGHER=368,
    BFD_RELOC_PPC64_HIGHER_S=369,
    BFD_RELOC_PPC64_HIGHEST=370,
    BFD_RELOC_PPC64_HIGHEST_S=371,
    BFD_RELOC_PPC64_TOC16_LO=372,
    BFD_RELOC_PPC64_TOC16_HI=373,
    BFD_RELOC_PPC64_TOC16_HA=374,
    BFD_RELOC_PPC64_TOC=375,
    BFD_RELOC_PPC64_PLTGOT16=376,
    BFD_RELOC_PPC64_PLTGOT16_LO=377,
    BFD_RELOC_PPC64_PLTGOT16_HI=378,
    BFD_RELOC_PPC64_PLTGOT16_HA=379,
    BFD_RELOC_PPC64_ADDR16_DS=380,
    BFD_RELOC_PPC64_ADDR16_LO_DS=381,
    BFD_RELOC_PPC64_GOT16_DS=382,
    BFD_RELOC_PPC64_GOT16_LO_DS=383,
    BFD_RELOC_PPC64_PLT16_LO_DS=384,
    BFD_RELOC_PPC64_SECTOFF_DS=385,
    BFD_RELOC_PPC64_SECTOFF_LO_DS=386,
    BFD_RELOC_PPC64_TOC16_DS=387,
    BFD_RELOC_PPC64_TOC16_LO_DS=388,
    BFD_RELOC_PPC64_PLTGOT16_DS=389,
    BFD_RELOC_PPC64_PLTGOT16_LO_DS=390,
    BFD_RELOC_PPC_TLS=391,
    BFD_RELOC_PPC_DTPMOD=392,
    BFD_RELOC_PPC_TPREL16=393,
    BFD_RELOC_PPC_TPREL16_LO=394,
    BFD_RELOC_PPC_TPREL16_HI=395,
    BFD_RELOC_PPC_TPREL16_HA=396,
    BFD_RELOC_PPC_TPREL=397,
    BFD_RELOC_PPC_DTPREL16=398,
    BFD_RELOC_PPC_DTPREL16_LO=399,
    BFD_RELOC_PPC_DTPREL16_HI=400,
    BFD_RELOC_PPC_DTPREL16_HA=401,
    BFD_RELOC_PPC_DTPREL=402,
    BFD_RELOC_PPC_GOT_TLSGD16=403,
    BFD_RELOC_PPC_GOT_TLSGD16_LO=404,
    BFD_RELOC_PPC_GOT_TLSGD16_HI=405,
    BFD_RELOC_PPC_GOT_TLSGD16_HA=406,
    BFD_RELOC_PPC_GOT_TLSLD16=407,
    BFD_RELOC_PPC_GOT_TLSLD16_LO=408,
    BFD_RELOC_PPC_GOT_TLSLD16_HI=409,
    BFD_RELOC_PPC_GOT_TLSLD16_HA=410,
    BFD_RELOC_PPC_GOT_TPREL16=411,
    BFD_RELOC_PPC_GOT_TPREL16_LO=412,
    BFD_RELOC_PPC_GOT_TPREL16_HI=413,
    BFD_RELOC_PPC_GOT_TPREL16_HA=414,
    BFD_RELOC_PPC_GOT_DTPREL16=415,
    BFD_RELOC_PPC_GOT_DTPREL16_LO=416,
    BFD_RELOC_PPC_GOT_DTPREL16_HI=417,
    BFD_RELOC_PPC_GOT_DTPREL16_HA=418,
    BFD_RELOC_PPC64_TPREL16_DS=419,
    BFD_RELOC_PPC64_TPREL16_LO_DS=420,
    BFD_RELOC_PPC64_TPREL16_HIGHER=421,
    BFD_RELOC_PPC64_TPREL16_HIGHERA=422,
    BFD_RELOC_PPC64_TPREL16_HIGHEST=423,
    BFD_RELOC_PPC64_TPREL16_HIGHESTA=424,
    BFD_RELOC_PPC64_DTPREL16_DS=425,
    BFD_RELOC_PPC64_DTPREL16_LO_DS=426,
    BFD_RELOC_PPC64_DTPREL16_HIGHER=427,
    BFD_RELOC_PPC64_DTPREL16_HIGHERA=428,
    BFD_RELOC_PPC64_DTPREL16_HIGHEST=429,
    BFD_RELOC_PPC64_DTPREL16_HIGHESTA=430,
    BFD_RELOC_I370_D12=431,
    BFD_RELOC_CTOR=432,
    BFD_RELOC_ARM_PCREL_BRANCH=433,
    BFD_RELOC_ARM_PCREL_BLX=434,
    BFD_RELOC_THUMB_PCREL_BLX=435,
    BFD_RELOC_ARM_PCREL_CALL=436,
    BFD_RELOC_ARM_PCREL_JUMP=437,
    BFD_RELOC_THUMB_PCREL_BRANCH7=438,
    BFD_RELOC_THUMB_PCREL_BRANCH9=439,
    BFD_RELOC_THUMB_PCREL_BRANCH12=440,
    BFD_RELOC_THUMB_PCREL_BRANCH20=441,
    BFD_RELOC_THUMB_PCREL_BRANCH23=442,
    BFD_RELOC_THUMB_PCREL_BRANCH25=443,
    BFD_RELOC_ARM_OFFSET_IMM=444,
    BFD_RELOC_ARM_THUMB_OFFSET=445,
    BFD_RELOC_ARM_TARGET1=446,
    BFD_RELOC_ARM_ROSEGREL32=447,
    BFD_RELOC_ARM_SBREL32=448,
    BFD_RELOC_ARM_TARGET2=449,
    BFD_RELOC_ARM_PREL31=450,
    BFD_RELOC_ARM_MOVW=451,
    BFD_RELOC_ARM_MOVT=452,
    BFD_RELOC_ARM_MOVW_PCREL=453,
    BFD_RELOC_ARM_MOVT_PCREL=454,
    BFD_RELOC_ARM_THUMB_MOVW=455,
    BFD_RELOC_ARM_THUMB_MOVT=456,
    BFD_RELOC_ARM_THUMB_MOVW_PCREL=457,
    BFD_RELOC_ARM_THUMB_MOVT_PCREL=458,
    BFD_RELOC_ARM_JUMP_SLOT=459,
    BFD_RELOC_ARM_GLOB_DAT=460,
    BFD_RELOC_ARM_GOT32=461,
    BFD_RELOC_ARM_PLT32=462,
    BFD_RELOC_ARM_RELATIVE=463,
    BFD_RELOC_ARM_GOTOFF=464,
    BFD_RELOC_ARM_GOTPC=465,
    BFD_RELOC_ARM_TLS_GD32=466,
    BFD_RELOC_ARM_TLS_LDO32=467,
    BFD_RELOC_ARM_TLS_LDM32=468,
    BFD_RELOC_ARM_TLS_DTPOFF32=469,
    BFD_RELOC_ARM_TLS_DTPMOD32=470,
    BFD_RELOC_ARM_TLS_TPOFF32=471,
    BFD_RELOC_ARM_TLS_IE32=472,
    BFD_RELOC_ARM_TLS_LE32=473,
    BFD_RELOC_ARM_ALU_PC_G0_NC=474,
    BFD_RELOC_ARM_ALU_PC_G0=475,
    BFD_RELOC_ARM_ALU_PC_G1_NC=476,
    BFD_RELOC_ARM_ALU_PC_G1=477,
    BFD_RELOC_ARM_ALU_PC_G2=478,
    BFD_RELOC_ARM_LDR_PC_G0=479,
    BFD_RELOC_ARM_LDR_PC_G1=480,
    BFD_RELOC_ARM_LDR_PC_G2=481,
    BFD_RELOC_ARM_LDRS_PC_G0=482,
    BFD_RELOC_ARM_LDRS_PC_G1=483,
    BFD_RELOC_ARM_LDRS_PC_G2=484,
    BFD_RELOC_ARM_LDC_PC_G0=485,
    BFD_RELOC_ARM_LDC_PC_G1=486,
    BFD_RELOC_ARM_LDC_PC_G2=487,
    BFD_RELOC_ARM_ALU_SB_G0_NC=488,
    BFD_RELOC_ARM_ALU_SB_G0=489,
    BFD_RELOC_ARM_ALU_SB_G1_NC=490,
    BFD_RELOC_ARM_ALU_SB_G1=491,
    BFD_RELOC_ARM_ALU_SB_G2=492,
    BFD_RELOC_ARM_LDR_SB_G0=493,
    BFD_RELOC_ARM_LDR_SB_G1=494,
    BFD_RELOC_ARM_LDR_SB_G2=495,
    BFD_RELOC_ARM_LDRS_SB_G0=496,
    BFD_RELOC_ARM_LDRS_SB_G1=497,
    BFD_RELOC_ARM_LDRS_SB_G2=498,
    BFD_RELOC_ARM_LDC_SB_G0=499,
    BFD_RELOC_ARM_LDC_SB_G1=500,
    BFD_RELOC_ARM_LDC_SB_G2=501,
    BFD_RELOC_ARM_V4BX=502,
    BFD_RELOC_ARM_IMMEDIATE=503,
    BFD_RELOC_ARM_ADRL_IMMEDIATE=504,
    BFD_RELOC_ARM_T32_IMMEDIATE=505,
    BFD_RELOC_ARM_T32_ADD_IMM=506,
    BFD_RELOC_ARM_T32_IMM12=507,
    BFD_RELOC_ARM_T32_ADD_PC12=508,
    BFD_RELOC_ARM_SHIFT_IMM=509,
    BFD_RELOC_ARM_SMC=510,
    BFD_RELOC_ARM_SWI=511,
    BFD_RELOC_ARM_MULTI=512,
    BFD_RELOC_ARM_CP_OFF_IMM=513,
    BFD_RELOC_ARM_CP_OFF_IMM_S2=514,
    BFD_RELOC_ARM_T32_CP_OFF_IMM=515,
    BFD_RELOC_ARM_T32_CP_OFF_IMM_S2=516,
    BFD_RELOC_ARM_ADR_IMM=517,
    BFD_RELOC_ARM_LDR_IMM=518,
    BFD_RELOC_ARM_LITERAL=519,
    BFD_RELOC_ARM_IN_POOL=520,
    BFD_RELOC_ARM_OFFSET_IMM8=521,
    BFD_RELOC_ARM_T32_OFFSET_U8=522,
    BFD_RELOC_ARM_T32_OFFSET_IMM=523,
    BFD_RELOC_ARM_HWLITERAL=524,
    BFD_RELOC_ARM_THUMB_ADD=525,
    BFD_RELOC_ARM_THUMB_IMM=526,
    BFD_RELOC_ARM_THUMB_SHIFT=527,
    BFD_RELOC_SH_PCDISP8BY2=528,
    BFD_RELOC_SH_PCDISP12BY2=529,
    BFD_RELOC_SH_IMM3=530,
    BFD_RELOC_SH_IMM3U=531,
    BFD_RELOC_SH_DISP12=532,
    BFD_RELOC_SH_DISP12BY2=533,
    BFD_RELOC_SH_DISP12BY4=534,
    BFD_RELOC_SH_DISP12BY8=535,
    BFD_RELOC_SH_DISP20=536,
    BFD_RELOC_SH_DISP20BY8=537,
    BFD_RELOC_SH_IMM4=538,
    BFD_RELOC_SH_IMM4BY2=539,
    BFD_RELOC_SH_IMM4BY4=540,
    BFD_RELOC_SH_IMM8=541,
    BFD_RELOC_SH_IMM8BY2=542,
    BFD_RELOC_SH_IMM8BY4=543,
    BFD_RELOC_SH_PCRELIMM8BY2=544,
    BFD_RELOC_SH_PCRELIMM8BY4=545,
    BFD_RELOC_SH_SWITCH16=546,
    BFD_RELOC_SH_SWITCH32=547,
    BFD_RELOC_SH_USES=548,
    BFD_RELOC_SH_COUNT=549,
    BFD_RELOC_SH_ALIGN=550,
    BFD_RELOC_SH_CODE=551,
    BFD_RELOC_SH_DATA=552,
    BFD_RELOC_SH_LABEL=553,
    BFD_RELOC_SH_LOOP_START=554,
    BFD_RELOC_SH_LOOP_END=555,
    BFD_RELOC_SH_COPY=556,
    BFD_RELOC_SH_GLOB_DAT=557,
    BFD_RELOC_SH_JMP_SLOT=558,
    BFD_RELOC_SH_RELATIVE=559,
    BFD_RELOC_SH_GOTPC=560,
    BFD_RELOC_SH_GOT_LOW16=561,
    BFD_RELOC_SH_GOT_MEDLOW16=562,
    BFD_RELOC_SH_GOT_MEDHI16=563,
    BFD_RELOC_SH_GOT_HI16=564,
    BFD_RELOC_SH_GOTPLT_LOW16=565,
    BFD_RELOC_SH_GOTPLT_MEDLOW16=566,
    BFD_RELOC_SH_GOTPLT_MEDHI16=567,
    BFD_RELOC_SH_GOTPLT_HI16=568,
    BFD_RELOC_SH_PLT_LOW16=569,
    BFD_RELOC_SH_PLT_MEDLOW16=570,
    BFD_RELOC_SH_PLT_MEDHI16=571,
    BFD_RELOC_SH_PLT_HI16=572,
    BFD_RELOC_SH_GOTOFF_LOW16=573,
    BFD_RELOC_SH_GOTOFF_MEDLOW16=574,
    BFD_RELOC_SH_GOTOFF_MEDHI16=575,
    BFD_RELOC_SH_GOTOFF_HI16=576,
    BFD_RELOC_SH_GOTPC_LOW16=577,
    BFD_RELOC_SH_GOTPC_MEDLOW16=578,
    BFD_RELOC_SH_GOTPC_MEDHI16=579,
    BFD_RELOC_SH_GOTPC_HI16=580,
    BFD_RELOC_SH_COPY64=581,
    BFD_RELOC_SH_GLOB_DAT64=582,
    BFD_RELOC_SH_JMP_SLOT64=583,
    BFD_RELOC_SH_RELATIVE64=584,
    BFD_RELOC_SH_GOT10BY4=585,
    BFD_RELOC_SH_GOT10BY8=586,
    BFD_RELOC_SH_GOTPLT10BY4=587,
    BFD_RELOC_SH_GOTPLT10BY8=588,
    BFD_RELOC_SH_GOTPLT32=589,
    BFD_RELOC_SH_SHMEDIA_CODE=590,
    BFD_RELOC_SH_IMMU5=591,
    BFD_RELOC_SH_IMMS6=592,
    BFD_RELOC_SH_IMMS6BY32=593,
    BFD_RELOC_SH_IMMU6=594,
    BFD_RELOC_SH_IMMS10=595,
    BFD_RELOC_SH_IMMS10BY2=596,
    BFD_RELOC_SH_IMMS10BY4=597,
    BFD_RELOC_SH_IMMS10BY8=598,
    BFD_RELOC_SH_IMMS16=599,
    BFD_RELOC_SH_IMMU16=600,
    BFD_RELOC_SH_IMM_LOW16=601,
    BFD_RELOC_SH_IMM_LOW16_PCREL=602,
    BFD_RELOC_SH_IMM_MEDLOW16=603,
    BFD_RELOC_SH_IMM_MEDLOW16_PCREL=604,
    BFD_RELOC_SH_IMM_MEDHI16=605,
    BFD_RELOC_SH_IMM_MEDHI16_PCREL=606,
    BFD_RELOC_SH_IMM_HI16=607,
    BFD_RELOC_SH_IMM_HI16_PCREL=608,
    BFD_RELOC_SH_PT_16=609,
    BFD_RELOC_SH_TLS_GD_32=610,
    BFD_RELOC_SH_TLS_LD_32=611,
    BFD_RELOC_SH_TLS_LDO_32=612,
    BFD_RELOC_SH_TLS_IE_32=613,
    BFD_RELOC_SH_TLS_LE_32=614,
    BFD_RELOC_SH_TLS_DTPMOD32=615,
    BFD_RELOC_SH_TLS_DTPOFF32=616,
    BFD_RELOC_SH_TLS_TPOFF32=617,
    BFD_RELOC_ARC_B22_PCREL=618,
    BFD_RELOC_ARC_B26=619,
    BFD_RELOC_BFIN_16_IMM=620,
    BFD_RELOC_BFIN_16_HIGH=621,
    BFD_RELOC_BFIN_4_PCREL=622,
    BFD_RELOC_BFIN_5_PCREL=623,
    BFD_RELOC_BFIN_16_LOW=624,
    BFD_RELOC_BFIN_10_PCREL=625,
    BFD_RELOC_BFIN_11_PCREL=626,
    BFD_RELOC_BFIN_12_PCREL_JUMP=627,
    BFD_RELOC_BFIN_12_PCREL_JUMP_S=628,
    BFD_RELOC_BFIN_24_PCREL_CALL_X=629,
    BFD_RELOC_BFIN_24_PCREL_JUMP_L=630,
    BFD_RELOC_BFIN_GOT17M4=631,
    BFD_RELOC_BFIN_GOTHI=632,
    BFD_RELOC_BFIN_GOTLO=633,
    BFD_RELOC_BFIN_FUNCDESC=634,
    BFD_RELOC_BFIN_FUNCDESC_GOT17M4=635,
    BFD_RELOC_BFIN_FUNCDESC_GOTHI=636,
    BFD_RELOC_BFIN_FUNCDESC_GOTLO=637,
    BFD_RELOC_BFIN_FUNCDESC_VALUE=638,
    BFD_RELOC_BFIN_FUNCDESC_GOTOFF17M4=639,
    BFD_RELOC_BFIN_FUNCDESC_GOTOFFHI=640,
    BFD_RELOC_BFIN_FUNCDESC_GOTOFFLO=641,
    BFD_RELOC_BFIN_GOTOFF17M4=642,
    BFD_RELOC_BFIN_GOTOFFHI=643,
    BFD_RELOC_BFIN_GOTOFFLO=644,
    BFD_RELOC_BFIN_GOT=645,
    BFD_RELOC_BFIN_PLTPC=646,
    BFD_ARELOC_BFIN_PUSH=647,
    BFD_ARELOC_BFIN_CONST=648,
    BFD_ARELOC_BFIN_ADD=649,
    BFD_ARELOC_BFIN_SUB=650,
    BFD_ARELOC_BFIN_MULT=651,
    BFD_ARELOC_BFIN_DIV=652,
    BFD_ARELOC_BFIN_MOD=653,
    BFD_ARELOC_BFIN_LSHIFT=654,
    BFD_ARELOC_BFIN_RSHIFT=655,
    BFD_ARELOC_BFIN_AND=656,
    BFD_ARELOC_BFIN_OR=657,
    BFD_ARELOC_BFIN_XOR=658,
    BFD_ARELOC_BFIN_LAND=659,
    BFD_ARELOC_BFIN_LOR=660,
    BFD_ARELOC_BFIN_LEN=661,
    BFD_ARELOC_BFIN_NEG=662,
    BFD_ARELOC_BFIN_COMP=663,
    BFD_ARELOC_BFIN_PAGE=664,
    BFD_ARELOC_BFIN_HWPAGE=665,
    BFD_ARELOC_BFIN_ADDR=666,
    BFD_RELOC_D10V_10_PCREL_R=667,
    BFD_RELOC_D10V_10_PCREL_L=668,
    BFD_RELOC_D10V_18=669,
    BFD_RELOC_D10V_18_PCREL=670,
    BFD_RELOC_D30V_6=671,
    BFD_RELOC_D30V_9_PCREL=672,
    BFD_RELOC_D30V_9_PCREL_R=673,
    BFD_RELOC_D30V_15=674,
    BFD_RELOC_D30V_15_PCREL=675,
    BFD_RELOC_D30V_15_PCREL_R=676,
    BFD_RELOC_D30V_21=677,
    BFD_RELOC_D30V_21_PCREL=678,
    BFD_RELOC_D30V_21_PCREL_R=679,
    BFD_RELOC_D30V_32=680,
    BFD_RELOC_D30V_32_PCREL=681,
    BFD_RELOC_DLX_HI16_S=682,
    BFD_RELOC_DLX_LO16=683,
    BFD_RELOC_DLX_JMP26=684,
    BFD_RELOC_M32C_HI8=685,
    BFD_RELOC_M32C_RL_JUMP=686,
    BFD_RELOC_M32C_RL_1ADDR=687,
    BFD_RELOC_M32C_RL_2ADDR=688,
    BFD_RELOC_M32R_24=689,
    BFD_RELOC_M32R_10_PCREL=690,
    BFD_RELOC_M32R_18_PCREL=691,
    BFD_RELOC_M32R_26_PCREL=692,
    BFD_RELOC_M32R_HI16_ULO=693,
    BFD_RELOC_M32R_HI16_SLO=694,
    BFD_RELOC_M32R_LO16=695,
    BFD_RELOC_M32R_SDA16=696,
    BFD_RELOC_M32R_GOT24=697,
    BFD_RELOC_M32R_26_PLTREL=698,
    BFD_RELOC_M32R_COPY=699,
    BFD_RELOC_M32R_GLOB_DAT=700,
    BFD_RELOC_M32R_JMP_SLOT=701,
    BFD_RELOC_M32R_RELATIVE=702,
    BFD_RELOC_M32R_GOTOFF=703,
    BFD_RELOC_M32R_GOTOFF_HI_ULO=704,
    BFD_RELOC_M32R_GOTOFF_HI_SLO=705,
    BFD_RELOC_M32R_GOTOFF_LO=706,
    BFD_RELOC_M32R_GOTPC24=707,
    BFD_RELOC_M32R_GOT16_HI_ULO=708,
    BFD_RELOC_M32R_GOT16_HI_SLO=709,
    BFD_RELOC_M32R_GOT16_LO=710,
    BFD_RELOC_M32R_GOTPC_HI_ULO=711,
    BFD_RELOC_M32R_GOTPC_HI_SLO=712,
    BFD_RELOC_M32R_GOTPC_LO=713,
    BFD_RELOC_V850_9_PCREL=714,
    BFD_RELOC_V850_22_PCREL=715,
    BFD_RELOC_V850_SDA_16_16_OFFSET=716,
    BFD_RELOC_V850_SDA_15_16_OFFSET=717,
    BFD_RELOC_V850_ZDA_16_16_OFFSET=718,
    BFD_RELOC_V850_ZDA_15_16_OFFSET=719,
    BFD_RELOC_V850_TDA_6_8_OFFSET=720,
    BFD_RELOC_V850_TDA_7_8_OFFSET=721,
    BFD_RELOC_V850_TDA_7_7_OFFSET=722,
    BFD_RELOC_V850_TDA_16_16_OFFSET=723,
    BFD_RELOC_V850_TDA_4_5_OFFSET=724,
    BFD_RELOC_V850_TDA_4_4_OFFSET=725,
    BFD_RELOC_V850_SDA_16_16_SPLIT_OFFSET=726,
    BFD_RELOC_V850_ZDA_16_16_SPLIT_OFFSET=727,
    BFD_RELOC_V850_CALLT_6_7_OFFSET=728,
    BFD_RELOC_V850_CALLT_16_16_OFFSET=729,
    BFD_RELOC_V850_LONGCALL=730,
    BFD_RELOC_V850_LONGJUMP=731,
    BFD_RELOC_V850_ALIGN=732,
    BFD_RELOC_V850_LO16_SPLIT_OFFSET=733,
    BFD_RELOC_MN10300_32_PCREL=734,
    BFD_RELOC_MN10300_16_PCREL=735,
    BFD_RELOC_TIC30_LDP=736,
    BFD_RELOC_TIC54X_PARTLS7=737,
    BFD_RELOC_TIC54X_PARTMS9=738,
    BFD_RELOC_TIC54X_23=739,
    BFD_RELOC_TIC54X_16_OF_23=740,
    BFD_RELOC_TIC54X_MS7_OF_23=741,
    BFD_RELOC_FR30_48=742,
    BFD_RELOC_FR30_20=743,
    BFD_RELOC_FR30_6_IN_4=744,
    BFD_RELOC_FR30_8_IN_8=745,
    BFD_RELOC_FR30_9_IN_8=746,
    BFD_RELOC_FR30_10_IN_8=747,
    BFD_RELOC_FR30_9_PCREL=748,
    BFD_RELOC_FR30_12_PCREL=749,
    BFD_RELOC_MCORE_PCREL_IMM8BY4=750,
    BFD_RELOC_MCORE_PCREL_IMM11BY2=751,
    BFD_RELOC_MCORE_PCREL_IMM4BY2=752,
    BFD_RELOC_MCORE_PCREL_32=753,
    BFD_RELOC_MCORE_PCREL_JSR_IMM11BY2=754,
    BFD_RELOC_MCORE_RVA=755,
    BFD_RELOC_MEP_8=756,
    BFD_RELOC_MEP_16=757,
    BFD_RELOC_MEP_32=758,
    BFD_RELOC_MEP_PCREL8A2=759,
    BFD_RELOC_MEP_PCREL12A2=760,
    BFD_RELOC_MEP_PCREL17A2=761,
    BFD_RELOC_MEP_PCREL24A2=762,
    BFD_RELOC_MEP_PCABS24A2=763,
    BFD_RELOC_MEP_LOW16=764,
    BFD_RELOC_MEP_HI16U=765,
    BFD_RELOC_MEP_HI16S=766,
    BFD_RELOC_MEP_GPREL=767,
    BFD_RELOC_MEP_TPREL=768,
    BFD_RELOC_MEP_TPREL7=769,
    BFD_RELOC_MEP_TPREL7A2=770,
    BFD_RELOC_MEP_TPREL7A4=771,
    BFD_RELOC_MEP_UIMM24=772,
    BFD_RELOC_MEP_ADDR24A4=773,
    BFD_RELOC_MEP_GNU_VTINHERIT=774,
    BFD_RELOC_MEP_GNU_VTENTRY=775,
    BFD_RELOC_MMIX_GETA=776,
    BFD_RELOC_MMIX_GETA_1=777,
    BFD_RELOC_MMIX_GETA_2=778,
    BFD_RELOC_MMIX_GETA_3=779,
    BFD_RELOC_MMIX_CBRANCH=780,
    BFD_RELOC_MMIX_CBRANCH_J=781,
    BFD_RELOC_MMIX_CBRANCH_1=782,
    BFD_RELOC_MMIX_CBRANCH_2=783,
    BFD_RELOC_MMIX_CBRANCH_3=784,
    BFD_RELOC_MMIX_PUSHJ=785,
    BFD_RELOC_MMIX_PUSHJ_1=786,
    BFD_RELOC_MMIX_PUSHJ_2=787,
    BFD_RELOC_MMIX_PUSHJ_3=788,
    BFD_RELOC_MMIX_PUSHJ_STUBBABLE=789,
    BFD_RELOC_MMIX_JMP=790,
    BFD_RELOC_MMIX_JMP_1=791,
    BFD_RELOC_MMIX_JMP_2=792,
    BFD_RELOC_MMIX_JMP_3=793,
    BFD_RELOC_MMIX_ADDR19=794,
    BFD_RELOC_MMIX_ADDR27=795,
    BFD_RELOC_MMIX_REG_OR_BYTE=796,
    BFD_RELOC_MMIX_REG=797,
    BFD_RELOC_MMIX_BASE_PLUS_OFFSET=798,
    BFD_RELOC_MMIX_LOCAL=799,
    BFD_RELOC_AVR_7_PCREL=800,
    BFD_RELOC_AVR_13_PCREL=801,
    BFD_RELOC_AVR_16_PM=802,
    BFD_RELOC_AVR_LO8_LDI=803,
    BFD_RELOC_AVR_HI8_LDI=804,
    BFD_RELOC_AVR_HH8_LDI=805,
    BFD_RELOC_AVR_MS8_LDI=806,
    BFD_RELOC_AVR_LO8_LDI_NEG=807,
    BFD_RELOC_AVR_HI8_LDI_NEG=808,
    BFD_RELOC_AVR_HH8_LDI_NEG=809,
    BFD_RELOC_AVR_MS8_LDI_NEG=810,
    BFD_RELOC_AVR_LO8_LDI_PM=811,
    BFD_RELOC_AVR_LO8_LDI_GS=812,
    BFD_RELOC_AVR_HI8_LDI_PM=813,
    BFD_RELOC_AVR_HI8_LDI_GS=814,
    BFD_RELOC_AVR_HH8_LDI_PM=815,
    BFD_RELOC_AVR_LO8_LDI_PM_NEG=816,
    BFD_RELOC_AVR_HI8_LDI_PM_NEG=817,
    BFD_RELOC_AVR_HH8_LDI_PM_NEG=818,
    BFD_RELOC_AVR_CALL=819,
    BFD_RELOC_AVR_LDI=820,
    BFD_RELOC_AVR_6=821,
    BFD_RELOC_AVR_6_ADIW=822,
    BFD_RELOC_390_12=823,
    BFD_RELOC_390_GOT12=824,
    BFD_RELOC_390_PLT32=825,
    BFD_RELOC_390_COPY=826,
    BFD_RELOC_390_GLOB_DAT=827,
    BFD_RELOC_390_JMP_SLOT=828,
    BFD_RELOC_390_RELATIVE=829,
    BFD_RELOC_390_GOTPC=830,
    BFD_RELOC_390_GOT16=831,
    BFD_RELOC_390_PC16DBL=832,
    BFD_RELOC_390_PLT16DBL=833,
    BFD_RELOC_390_PC32DBL=834,
    BFD_RELOC_390_PLT32DBL=835,
    BFD_RELOC_390_GOTPCDBL=836,
    BFD_RELOC_390_GOT64=837,
    BFD_RELOC_390_PLT64=838,
    BFD_RELOC_390_GOTENT=839,
    BFD_RELOC_390_GOTOFF64=840,
    BFD_RELOC_390_GOTPLT12=841,
    BFD_RELOC_390_GOTPLT16=842,
    BFD_RELOC_390_GOTPLT32=843,
    BFD_RELOC_390_GOTPLT64=844,
    BFD_RELOC_390_GOTPLTENT=845,
    BFD_RELOC_390_PLTOFF16=846,
    BFD_RELOC_390_PLTOFF32=847,
    BFD_RELOC_390_PLTOFF64=848,
    BFD_RELOC_390_TLS_LOAD=849,
    BFD_RELOC_390_TLS_GDCALL=850,
    BFD_RELOC_390_TLS_LDCALL=851,
    BFD_RELOC_390_TLS_GD32=852,
    BFD_RELOC_390_TLS_GD64=853,
    BFD_RELOC_390_TLS_GOTIE12=854,
    BFD_RELOC_390_TLS_GOTIE32=855,
    BFD_RELOC_390_TLS_GOTIE64=856,
    BFD_RELOC_390_TLS_LDM32=857,
    BFD_RELOC_390_TLS_LDM64=858,
    BFD_RELOC_390_TLS_IE32=859,
    BFD_RELOC_390_TLS_IE64=860,
    BFD_RELOC_390_TLS_IEENT=861,
    BFD_RELOC_390_TLS_LE32=862,
    BFD_RELOC_390_TLS_LE64=863,
    BFD_RELOC_390_TLS_LDO32=864,
    BFD_RELOC_390_TLS_LDO64=865,
    BFD_RELOC_390_TLS_DTPMOD=866,
    BFD_RELOC_390_TLS_DTPOFF=867,
    BFD_RELOC_390_TLS_TPOFF=868,
    BFD_RELOC_390_20=869,
    BFD_RELOC_390_GOT20=870,
    BFD_RELOC_390_GOTPLT20=871,
    BFD_RELOC_390_TLS_GOTIE20=872,
    BFD_RELOC_SCORE_DUMMY1=873,
    BFD_RELOC_SCORE_GPREL15=874,
    BFD_RELOC_SCORE_DUMMY2=875,
    BFD_RELOC_SCORE_JMP=876,
    BFD_RELOC_SCORE_BRANCH=877,
    BFD_RELOC_SCORE16_JMP=878,
    BFD_RELOC_SCORE16_BRANCH=879,
    BFD_RELOC_SCORE_GOT15=880,
    BFD_RELOC_SCORE_GOT_LO16=881,
    BFD_RELOC_SCORE_CALL15=882,
    BFD_RELOC_SCORE_DUMMY_HI16=883,
    BFD_RELOC_IP2K_FR9=884,
    BFD_RELOC_IP2K_BANK=885,
    BFD_RELOC_IP2K_ADDR16CJP=886,
    BFD_RELOC_IP2K_PAGE3=887,
    BFD_RELOC_IP2K_LO8DATA=888,
    BFD_RELOC_IP2K_HI8DATA=889,
    BFD_RELOC_IP2K_EX8DATA=890,
    BFD_RELOC_IP2K_LO8INSN=891,
    BFD_RELOC_IP2K_HI8INSN=892,
    BFD_RELOC_IP2K_PC_SKIP=893,
    BFD_RELOC_IP2K_TEXT=894,
    BFD_RELOC_IP2K_FR_OFFSET=895,
    BFD_RELOC_VPE4KMATH_DATA=896,
    BFD_RELOC_VPE4KMATH_INSN=897,
    BFD_RELOC_VTABLE_INHERIT=898,
    BFD_RELOC_VTABLE_ENTRY=899,
    BFD_RELOC_IA64_IMM14=900,
    BFD_RELOC_IA64_IMM22=901,
    BFD_RELOC_IA64_IMM64=902,
    BFD_RELOC_IA64_DIR32MSB=903,
    BFD_RELOC_IA64_DIR32LSB=904,
    BFD_RELOC_IA64_DIR64MSB=905,
    BFD_RELOC_IA64_DIR64LSB=906,
    BFD_RELOC_IA64_GPREL22=907,
    BFD_RELOC_IA64_GPREL64I=908,
    BFD_RELOC_IA64_GPREL32MSB=909,
    BFD_RELOC_IA64_GPREL32LSB=910,
    BFD_RELOC_IA64_GPREL64MSB=911,
    BFD_RELOC_IA64_GPREL64LSB=912,
    BFD_RELOC_IA64_LTOFF22=913,
    BFD_RELOC_IA64_LTOFF64I=914,
    BFD_RELOC_IA64_PLTOFF22=915,
    BFD_RELOC_IA64_PLTOFF64I=916,
    BFD_RELOC_IA64_PLTOFF64MSB=917,
    BFD_RELOC_IA64_PLTOFF64LSB=918,
    BFD_RELOC_IA64_FPTR64I=919,
    BFD_RELOC_IA64_FPTR32MSB=920,
    BFD_RELOC_IA64_FPTR32LSB=921,
    BFD_RELOC_IA64_FPTR64MSB=922,
    BFD_RELOC_IA64_FPTR64LSB=923,
    BFD_RELOC_IA64_PCREL21B=924,
    BFD_RELOC_IA64_PCREL21BI=925,
    BFD_RELOC_IA64_PCREL21M=926,
    BFD_RELOC_IA64_PCREL21F=927,
    BFD_RELOC_IA64_PCREL22=928,
    BFD_RELOC_IA64_PCREL60B=929,
    BFD_RELOC_IA64_PCREL64I=930,
    BFD_RELOC_IA64_PCREL32MSB=931,
    BFD_RELOC_IA64_PCREL32LSB=932,
    BFD_RELOC_IA64_PCREL64MSB=933,
    BFD_RELOC_IA64_PCREL64LSB=934,
    BFD_RELOC_IA64_LTOFF_FPTR22=935,
    BFD_RELOC_IA64_LTOFF_FPTR64I=936,
    BFD_RELOC_IA64_LTOFF_FPTR32MSB=937,
    BFD_RELOC_IA64_LTOFF_FPTR32LSB=938,
    BFD_RELOC_IA64_LTOFF_FPTR64MSB=939,
    BFD_RELOC_IA64_LTOFF_FPTR64LSB=940,
    BFD_RELOC_IA64_SEGREL32MSB=941,
    BFD_RELOC_IA64_SEGREL32LSB=942,
    BFD_RELOC_IA64_SEGREL64MSB=943,
    BFD_RELOC_IA64_SEGREL64LSB=944,
    BFD_RELOC_IA64_SECREL32MSB=945,
    BFD_RELOC_IA64_SECREL32LSB=946,
    BFD_RELOC_IA64_SECREL64MSB=947,
    BFD_RELOC_IA64_SECREL64LSB=948,
    BFD_RELOC_IA64_REL32MSB=949,
    BFD_RELOC_IA64_REL32LSB=950,
    BFD_RELOC_IA64_REL64MSB=951,
    BFD_RELOC_IA64_REL64LSB=952,
    BFD_RELOC_IA64_LTV32MSB=953,
    BFD_RELOC_IA64_LTV32LSB=954,
    BFD_RELOC_IA64_LTV64MSB=955,
    BFD_RELOC_IA64_LTV64LSB=956,
    BFD_RELOC_IA64_IPLTMSB=957,
    BFD_RELOC_IA64_IPLTLSB=958,
    BFD_RELOC_IA64_COPY=959,
    BFD_RELOC_IA64_LTOFF22X=960,
    BFD_RELOC_IA64_LDXMOV=961,
    BFD_RELOC_IA64_TPREL14=962,
    BFD_RELOC_IA64_TPREL22=963,
    BFD_RELOC_IA64_TPREL64I=964,
    BFD_RELOC_IA64_TPREL64MSB=965,
    BFD_RELOC_IA64_TPREL64LSB=966,
    BFD_RELOC_IA64_LTOFF_TPREL22=967,
    BFD_RELOC_IA64_DTPMOD64MSB=968,
    BFD_RELOC_IA64_DTPMOD64LSB=969,
    BFD_RELOC_IA64_LTOFF_DTPMOD22=970,
    BFD_RELOC_IA64_DTPREL14=971,
    BFD_RELOC_IA64_DTPREL22=972,
    BFD_RELOC_IA64_DTPREL64I=973,
    BFD_RELOC_IA64_DTPREL32MSB=974,
    BFD_RELOC_IA64_DTPREL32LSB=975,
    BFD_RELOC_IA64_DTPREL64MSB=976,
    BFD_RELOC_IA64_DTPREL64LSB=977,
    BFD_RELOC_IA64_LTOFF_DTPREL22=978,
    BFD_RELOC_M68HC11_HI8=979,
    BFD_RELOC_M68HC11_LO8=980,
    BFD_RELOC_M68HC11_3B=981,
    BFD_RELOC_M68HC11_RL_JUMP=982,
    BFD_RELOC_M68HC11_RL_GROUP=983,
    BFD_RELOC_M68HC11_LO16=984,
    BFD_RELOC_M68HC11_PAGE=985,
    BFD_RELOC_M68HC11_24=986,
    BFD_RELOC_M68HC12_5B=987,
    BFD_RELOC_16C_NUM08=988,
    BFD_RELOC_16C_NUM08_C=989,
    BFD_RELOC_16C_NUM16=990,
    BFD_RELOC_16C_NUM16_C=991,
    BFD_RELOC_16C_NUM32=992,
    BFD_RELOC_16C_NUM32_C=993,
    BFD_RELOC_16C_DISP04=994,
    BFD_RELOC_16C_DISP04_C=995,
    BFD_RELOC_16C_DISP08=996,
    BFD_RELOC_16C_DISP08_C=997,
    BFD_RELOC_16C_DISP16=998,
    BFD_RELOC_16C_DISP16_C=999,
    BFD_RELOC_16C_DISP24=1000,
    BFD_RELOC_16C_DISP24_C=1001,
    BFD_RELOC_16C_DISP24a=1002,
    BFD_RELOC_16C_DISP24a_C=1003,
    BFD_RELOC_16C_REG04=1004,
    BFD_RELOC_16C_REG04_C=1005,
    BFD_RELOC_16C_REG04a=1006,
    BFD_RELOC_16C_REG04a_C=1007,
    BFD_RELOC_16C_REG14=1008,
    BFD_RELOC_16C_REG14_C=1009,
    BFD_RELOC_16C_REG16=1010,
    BFD_RELOC_16C_REG16_C=1011,
    BFD_RELOC_16C_REG20=1012,
    BFD_RELOC_16C_REG20_C=1013,
    BFD_RELOC_16C_ABS20=1014,
    BFD_RELOC_16C_ABS20_C=1015,
    BFD_RELOC_16C_ABS24=1016,
    BFD_RELOC_16C_ABS24_C=1017,
    BFD_RELOC_16C_IMM04=1018,
    BFD_RELOC_16C_IMM04_C=1019,
    BFD_RELOC_16C_IMM16=1020,
    BFD_RELOC_16C_IMM16_C=1021,
    BFD_RELOC_16C_IMM20=1022,
    BFD_RELOC_16C_IMM20_C=1023,
    BFD_RELOC_16C_IMM24=1024,
    BFD_RELOC_16C_IMM24_C=1025,
    BFD_RELOC_16C_IMM32=1026,
    BFD_RELOC_16C_IMM32_C=1027,
    BFD_RELOC_CR16_NUM8=1028,
    BFD_RELOC_CR16_NUM16=1029,
    BFD_RELOC_CR16_NUM32=1030,
    BFD_RELOC_CR16_NUM32a=1031,
    BFD_RELOC_CR16_REGREL0=1032,
    BFD_RELOC_CR16_REGREL4=1033,
    BFD_RELOC_CR16_REGREL4a=1034,
    BFD_RELOC_CR16_REGREL14=1035,
    BFD_RELOC_CR16_REGREL14a=1036,
    BFD_RELOC_CR16_REGREL16=1037,
    BFD_RELOC_CR16_REGREL20=1038,
    BFD_RELOC_CR16_REGREL20a=1039,
    BFD_RELOC_CR16_ABS20=1040,
    BFD_RELOC_CR16_ABS24=1041,
    BFD_RELOC_CR16_IMM4=1042,
    BFD_RELOC_CR16_IMM8=1043,
    BFD_RELOC_CR16_IMM16=1044,
    BFD_RELOC_CR16_IMM20=1045,
    BFD_RELOC_CR16_IMM24=1046,
    BFD_RELOC_CR16_IMM32=1047,
    BFD_RELOC_CR16_IMM32a=1048,
    BFD_RELOC_CR16_DISP4=1049,
    BFD_RELOC_CR16_DISP8=1050,
    BFD_RELOC_CR16_DISP16=1051,
    BFD_RELOC_CR16_DISP20=1052,
    BFD_RELOC_CR16_DISP24=1053,
    BFD_RELOC_CR16_DISP24a=1054,
    BFD_RELOC_CR16_SWITCH8=1055,
    BFD_RELOC_CR16_SWITCH16=1056,
    BFD_RELOC_CR16_SWITCH32=1057,
    BFD_RELOC_CRX_REL4=1058,
    BFD_RELOC_CRX_REL8=1059,
    BFD_RELOC_CRX_REL8_CMP=1060,
    BFD_RELOC_CRX_REL16=1061,
    BFD_RELOC_CRX_REL24=1062,
    BFD_RELOC_CRX_REL32=1063,
    BFD_RELOC_CRX_REGREL12=1064,
    BFD_RELOC_CRX_REGREL22=1065,
    BFD_RELOC_CRX_REGREL28=1066,
    BFD_RELOC_CRX_REGREL32=1067,
    BFD_RELOC_CRX_ABS16=1068,
    BFD_RELOC_CRX_ABS32=1069,
    BFD_RELOC_CRX_NUM8=1070,
    BFD_RELOC_CRX_NUM16=1071,
    BFD_RELOC_CRX_NUM32=1072,
    BFD_RELOC_CRX_IMM16=1073,
    BFD_RELOC_CRX_IMM32=1074,
    BFD_RELOC_CRX_SWITCH8=1075,
    BFD_RELOC_CRX_SWITCH16=1076,
    BFD_RELOC_CRX_SWITCH32=1077,
    BFD_RELOC_CRIS_BDISP8=1078,
    BFD_RELOC_CRIS_UNSIGNED_5=1079,
    BFD_RELOC_CRIS_SIGNED_6=1080,
    BFD_RELOC_CRIS_UNSIGNED_6=1081,
    BFD_RELOC_CRIS_SIGNED_8=1082,
    BFD_RELOC_CRIS_UNSIGNED_8=1083,
    BFD_RELOC_CRIS_SIGNED_16=1084,
    BFD_RELOC_CRIS_UNSIGNED_16=1085,
    BFD_RELOC_CRIS_LAPCQ_OFFSET=1086,
    BFD_RELOC_CRIS_UNSIGNED_4=1087,
    BFD_RELOC_CRIS_COPY=1088,
    BFD_RELOC_CRIS_GLOB_DAT=1089,
    BFD_RELOC_CRIS_JUMP_SLOT=1090,
    BFD_RELOC_CRIS_RELATIVE=1091,
    BFD_RELOC_CRIS_32_GOT=1092,
    BFD_RELOC_CRIS_16_GOT=1093,
    BFD_RELOC_CRIS_32_GOTPLT=1094,
    BFD_RELOC_CRIS_16_GOTPLT=1095,
    BFD_RELOC_CRIS_32_GOTREL=1096,
    BFD_RELOC_CRIS_32_PLT_GOTREL=1097,
    BFD_RELOC_CRIS_32_PLT_PCREL=1098,
    BFD_RELOC_860_COPY=1099,
    BFD_RELOC_860_GLOB_DAT=1100,
    BFD_RELOC_860_JUMP_SLOT=1101,
    BFD_RELOC_860_RELATIVE=1102,
    BFD_RELOC_860_PC26=1103,
    BFD_RELOC_860_PLT26=1104,
    BFD_RELOC_860_PC16=1105,
    BFD_RELOC_860_LOW0=1106,
    BFD_RELOC_860_SPLIT0=1107,
    BFD_RELOC_860_LOW1=1108,
    BFD_RELOC_860_SPLIT1=1109,
    BFD_RELOC_860_LOW2=1110,
    BFD_RELOC_860_SPLIT2=1111,
    BFD_RELOC_860_LOW3=1112,
    BFD_RELOC_860_LOGOT0=1113,
    BFD_RELOC_860_SPGOT0=1114,
    BFD_RELOC_860_LOGOT1=1115,
    BFD_RELOC_860_SPGOT1=1116,
    BFD_RELOC_860_LOGOTOFF0=1117,
    BFD_RELOC_860_SPGOTOFF0=1118,
    BFD_RELOC_860_LOGOTOFF1=1119,
    BFD_RELOC_860_SPGOTOFF1=1120,
    BFD_RELOC_860_LOGOTOFF2=1121,
    BFD_RELOC_860_LOGOTOFF3=1122,
    BFD_RELOC_860_LOPC=1123,
    BFD_RELOC_860_HIGHADJ=1124,
    BFD_RELOC_860_HAGOT=1125,
    BFD_RELOC_860_HAGOTOFF=1126,
    BFD_RELOC_860_HAPC=1127,
    BFD_RELOC_860_HIGH=1128,
    BFD_RELOC_860_HIGOT=1129,
    BFD_RELOC_860_HIGOTOFF=1130,
    BFD_RELOC_OPENRISC_ABS_26=1131,
    BFD_RELOC_OPENRISC_REL_26=1132,
    BFD_RELOC_OPENRISC_LO16_SPLIT_OFFSET=1133,
    BFD_RELOC_OPENRISC_GPREL16_SPLIT_OFFSET=1134,
    BFD_RELOC_AEON_GOTOFF16_SPLIT=1135,
    BFD_RELOC_BA_GOTOFF16_SPLIT=1135,
    BFD_RELOC_AEON_GOTOFF16=1136,
    BFD_RELOC_BA_GOTOFF16=1136,
    BFD_RELOC_OPENRISC_8_DIFF_LSB=1137,
    BFD_RELOC_OPENRISC_16_DIFF_LSB=1138,
    BFD_RELOC_OPENRISC_32_DIFF_LSB=1139,
    BFD_RELOC_OPENRISC_48_DIFF_LSB=1140,
    BFD_RELOC_OPENRISC_8_DIFF=1141,
    BFD_RELOC_OPENRISC_16_DIFF=1142,
    BFD_RELOC_OPENRISC_32_DIFF=1143,
    BFD_RELOC_OPENRISC_64_DIFF=1144,
    BFD_RELOC_OPENRISC_16_S2=1145,
    BFD_RELOC_OPENRISC_8_S2=1146,
    BFD_RELOC_OPENRISC_16_S1=1147,
    BFD_RELOC_OPENRISC_8_S1=1148,
    BFD_RELOC_OPENRISC_ALIGN=1149,
    BFD_RELOC_OPENRISC_ORG=1150,
    BFD_RELOC_2=1151,
    BFD_RELOC_GPREL8_S0=1152,
    BFD_RELOC_GPREL8_S1=1153,
    BFD_RELOC_GPREL8_S2=1154,
    BFD_RELOC_GPREL8_S3=1155,
    BFD_RELOC_GPREL16_S0=1156,
    BFD_RELOC_GPREL16_S1=1157,
    BFD_RELOC_GPREL16_S2=1158,
    BFD_RELOC_GPREL16_S3=1159,
    BFD_RELOC_GPREL32_S0=1160,
    BFD_RELOC_GPREL32_S1=1161,
    BFD_RELOC_GPREL32_S2=1162,
    BFD_RELOC_GPREL32_S3=1163,
    BFD_RELOC_8_S1=1164,
    BFD_RELOC_8_S2=1165,
    BFD_RELOC_8_S3=1166,
    BFD_RELOC_16_S1=1167,
    BFD_RELOC_16_S2=1168,
    BFD_RELOC_16_S3=1169,
    BFD_RELOC_32_S1=1170,
    BFD_RELOC_32_S2=1171,
    BFD_RELOC_32_S3=1172,
    BFD_RELOC_10_PCREL=1173,
    BFD_RELOC_18_PCREL=1174,
    BFD_RELOC_28_PCREL=1175,
    BFD_RELOC_8_LSB=1176,
    BFD_RELOC_16_LSB=1177,
    BFD_RELOC_32_LSB=1178,
    BFD_RELOC_HI32_S=1179,
    BFD_RELOC_HI31_S=1180,
    BFD_RELOC_HI30_S=1181,
    BFD_RELOC_HI29_S=1182,
    BFD_RELOC_HI32=1183,
    BFD_RELOC_HI31=1184,
    BFD_RELOC_HI30=1185,
    BFD_RELOC_HI29=1186,
    BFD_RELOC_LO32_S=1187,
    BFD_RELOC_LO31_S=1188,
    BFD_RELOC_LO30_S=1189,
    BFD_RELOC_LO29_S=1190,
    BFD_RELOC_LO32=1191,
    BFD_RELOC_LO31=1192,
    BFD_RELOC_LO30=1193,
    BFD_RELOC_LO29=1194,
    BFD_RELOC_16_INSN=1195,
    BFD_RELOC_AEON_GOTOFF8_S0=1196,
    BFD_RELOC_BA_GOTOFF8_S0=1196,
    BFD_RELOC_AEON_GOTOFF16_S0=1197,
    BFD_RELOC_BA_GOTOFF16_S0=1197,
    BFD_RELOC_AEON_GOTOFF32_S0=1198,
    BFD_RELOC_BA_GOTOFF32_S0=1198,
    BFD_RELOC_AEON_GOTOFF8_S1=1199,
    BFD_RELOC_BA_GOTOFF8_S1=1199,
    BFD_RELOC_AEON_GOTOFF16_S1=1200,
    BFD_RELOC_BA_GOTOFF16_S1=1200,
    BFD_RELOC_AEON_GOTOFF32_S1=1201,
    BFD_RELOC_BA_GOTOFF32_S1=1201,
    BFD_RELOC_AEON_GOTOFF8_S2=1202,
    BFD_RELOC_BA_GOTOFF8_S2=1202,
    BFD_RELOC_AEON_GOTOFF16_S2=1203,
    BFD_RELOC_BA_GOTOFF16_S2=1203,
    BFD_RELOC_AEON_GOTOFF32_S2=1204,
    BFD_RELOC_BA_GOTOFF32_S2=1204,
    BFD_RELOC_AEON_28_PLT_S2=1205,
    BFD_RELOC_BA_28_PLT_S2=1205,
    BFD_RELOC_AEON_14_PLT_S2=1206,
    BFD_RELOC_BA_14_PLT_S2=1206,
    BFD_RELOC_AEON_8_PLT=1207,
    BFD_RELOC_BA_8_PLT=1207,
    BFD_RELOC_AEON_16_PLT=1208,
    BFD_RELOC_BA_16_PLT=1208,
    BFD_RELOC_AEON_24_PLT=1209,
    BFD_RELOC_BA_24_PLT=1209,
    BFD_RELOC_AEON_32_PLT=1210,
    BFD_RELOC_BA_32_PLT=1210,
    BFD_RELOC_AEON_10_PLT=1211,
    BFD_RELOC_BA_10_PLT=1211,
    BFD_RELOC_AEON_12_PLT=1212,
    BFD_RELOC_BA_12_PLT=1212,
    BFD_RELOC_AEON_12_PLT_1=1213,
    BFD_RELOC_BA_12_PLT_1=1213,
    BFD_RELOC_AEON_18_PLT=1214,
    BFD_RELOC_BA_18_PLT=1214,
    BFD_RELOC_AEON_28_PLT=1215,
    BFD_RELOC_BA_28_PLT=1215,
    BFD_RELOC_AEON_GOT_PLT=1216,
    BFD_RELOC_BA_GOT_PLT=1216,
    BFD_RELOC_AEON_32_RELATIVE=1217,
    BFD_RELOC_BA_32_RELATIVE=1217,
    BFD_RELOC_AEON_COPY=1218,
    BFD_RELOC_BA_COPY=1218,
    BFD_RELOC_AEON_GP_MINUS_32=1219,
    BFD_RELOC_BA_GP_MINUS_32=1219,
    BFD_RELOC_AEON_GP_MINUS_16=1220,
    BFD_RELOC_BA_GP_MINUS_16=1220,
    BFD_RELOC_AEON_GP_MINUS_8=1221,
    BFD_RELOC_BA_GP_MINUS_8=1221,
    BFD_RELOC_AEON_GP_MINUS_HI=1222,
    BFD_RELOC_BA_GP_MINUS_HI=1222,
    BFD_RELOC_AEON_GP_MINUS_LO=1223,
    BFD_RELOC_BA_GP_MINUS_LO=1223,
    BFD_RELOC_AEON_32_PCREL_S2=1224,
    BFD_RELOC_BA_32_PCREL_S2=1224,
    BFD_RELOC_AEON_16_PCREL_S2=1225,
    BFD_RELOC_BA_16_PCREL_S2=1225,
    BFD_RELOC_AEON_8_PCREL_S2=1226,
    BFD_RELOC_BA_8_PCREL_S2=1226,
    BFD_RELOC_AEON_32_PCREL_S1=1227,
    BFD_RELOC_BA_32_PCREL_S1=1227,
    BFD_RELOC_AEON_16_PCREL_S1=1228,
    BFD_RELOC_BA_16_PCREL_S1=1228,
    BFD_RELOC_AEON_8_PCREL_S1=1229,
    BFD_RELOC_BA_8_PCREL_S1=1229,
    BFD_RELOC_AEON_32_PCREL_S0=1230,
    BFD_RELOC_BA_32_PCREL_S0=1230,
    BFD_RELOC_AEON_16_PCREL_S0=1231,
    BFD_RELOC_BA_16_PCREL_S0=1231,
    BFD_RELOC_AEON_8_PCREL_S0=1232,
    BFD_RELOC_BA_8_PCREL_S0=1232,
    BFD_RELOC_AEON_32_GOTPC_FULL=1233,
    BFD_RELOC_BA_32_GOTPC_FULL=1233,
    BFD_RELOC_AEON_32_GOTPC=1234,
    BFD_RELOC_BA_32_GOTPC=1234,
    BFD_RELOC_AEON_16_GOTPC=1235,
    BFD_RELOC_BA_16_GOTPC=1235,
    BFD_RELOC_AEON_8_GOTPC=1236,
    BFD_RELOC_BA_8_GOTPC=1236,
    BFD_RELOC_AEON_32_GOTPC_S1=1237,
    BFD_RELOC_BA_32_GOTPC_S1=1237,
    BFD_RELOC_AEON_16_GOTPC_S1=1238,
    BFD_RELOC_BA_16_GOTPC_S1=1238,
    BFD_RELOC_AEON_8_GOTPC_S1=1239,
    BFD_RELOC_BA_8_GOTPC_S1=1239,
    BFD_RELOC_AEON_32_GOTPC_S2=1240,
    BFD_RELOC_BA_32_GOTPC_S2=1240,
    BFD_RELOC_AEON_16_GOTPC_S2=1241,
    BFD_RELOC_BA_16_GOTPC_S2=1241,
    BFD_RELOC_AEON_8_GOTPC_S2=1242,
    BFD_RELOC_BA_8_GOTPC_S2=1242,
    BFD_RELOC_H8_DIR16A8=1243,
    BFD_RELOC_H8_DIR16R8=1244,
    BFD_RELOC_H8_DIR24A8=1245,
    BFD_RELOC_H8_DIR24R8=1246,
    BFD_RELOC_H8_DIR32A16=1247,
    BFD_RELOC_XSTORMY16_REL_12=1248,
    BFD_RELOC_XSTORMY16_12=1249,
    BFD_RELOC_XSTORMY16_24=1250,
    BFD_RELOC_XSTORMY16_FPTR16=1251,
    BFD_RELOC_RELC=1252,
    BFD_RELOC_XC16X_PAG=1253,
    BFD_RELOC_XC16X_POF=1254,
    BFD_RELOC_XC16X_SEG=1255,
    BFD_RELOC_XC16X_SOF=1256,
    BFD_RELOC_VAX_GLOB_DAT=1257,
    BFD_RELOC_VAX_JMP_SLOT=1258,
    BFD_RELOC_VAX_RELATIVE=1259,
    BFD_RELOC_MT_PC16=1260,
    BFD_RELOC_MT_HI16=1261,
    BFD_RELOC_MT_LO16=1262,
    BFD_RELOC_MT_GNU_VTINHERIT=1263,
    BFD_RELOC_MT_GNU_VTENTRY=1264,
    BFD_RELOC_MT_PCINSN8=1265,
    BFD_RELOC_MSP430_10_PCREL=1266,
    BFD_RELOC_MSP430_16_PCREL=1267,
    BFD_RELOC_MSP430_16=1268,
    BFD_RELOC_MSP430_16_PCREL_BYTE=1269,
    BFD_RELOC_MSP430_16_BYTE=1270,
    BFD_RELOC_MSP430_2X_PCREL=1271,
    BFD_RELOC_MSP430_RL_PCREL=1272,
    BFD_RELOC_IQ2000_OFFSET_16=1273,
    BFD_RELOC_IQ2000_OFFSET_21=1274,
    BFD_RELOC_IQ2000_UHI16=1275,
    BFD_RELOC_XTENSA_RTLD=1276,
    BFD_RELOC_XTENSA_GLOB_DAT=1277,
    BFD_RELOC_XTENSA_JMP_SLOT=1278,
    BFD_RELOC_XTENSA_RELATIVE=1279,
    BFD_RELOC_XTENSA_PLT=1280,
    BFD_RELOC_XTENSA_DIFF8=1281,
    BFD_RELOC_XTENSA_DIFF16=1282,
    BFD_RELOC_XTENSA_DIFF32=1283,
    BFD_RELOC_XTENSA_SLOT0_OP=1284,
    BFD_RELOC_XTENSA_SLOT1_OP=1285,
    BFD_RELOC_XTENSA_SLOT2_OP=1286,
    BFD_RELOC_XTENSA_SLOT3_OP=1287,
    BFD_RELOC_XTENSA_SLOT4_OP=1288,
    BFD_RELOC_XTENSA_SLOT5_OP=1289,
    BFD_RELOC_XTENSA_SLOT6_OP=1290,
    BFD_RELOC_XTENSA_SLOT7_OP=1291,
    BFD_RELOC_XTENSA_SLOT8_OP=1292,
    BFD_RELOC_XTENSA_SLOT9_OP=1293,
    BFD_RELOC_XTENSA_SLOT10_OP=1294,
    BFD_RELOC_XTENSA_SLOT11_OP=1295,
    BFD_RELOC_XTENSA_SLOT12_OP=1296,
    BFD_RELOC_XTENSA_SLOT13_OP=1297,
    BFD_RELOC_XTENSA_SLOT14_OP=1298,
    BFD_RELOC_XTENSA_SLOT0_ALT=1299,
    BFD_RELOC_XTENSA_SLOT1_ALT=1300,
    BFD_RELOC_XTENSA_SLOT2_ALT=1301,
    BFD_RELOC_XTENSA_SLOT3_ALT=1302,
    BFD_RELOC_XTENSA_SLOT4_ALT=1303,
    BFD_RELOC_XTENSA_SLOT5_ALT=1304,
    BFD_RELOC_XTENSA_SLOT6_ALT=1305,
    BFD_RELOC_XTENSA_SLOT7_ALT=1306,
    BFD_RELOC_XTENSA_SLOT8_ALT=1307,
    BFD_RELOC_XTENSA_SLOT9_ALT=1308,
    BFD_RELOC_XTENSA_SLOT10_ALT=1309,
    BFD_RELOC_XTENSA_SLOT11_ALT=1310,
    BFD_RELOC_XTENSA_SLOT12_ALT=1311,
    BFD_RELOC_XTENSA_SLOT13_ALT=1312,
    BFD_RELOC_XTENSA_SLOT14_ALT=1313,
    BFD_RELOC_XTENSA_OP0=1314,
    BFD_RELOC_XTENSA_OP1=1315,
    BFD_RELOC_XTENSA_OP2=1316,
    BFD_RELOC_XTENSA_ASM_EXPAND=1317,
    BFD_RELOC_XTENSA_ASM_SIMPLIFY=1318,
    BFD_RELOC_XTENSA_TLSDESC_FN=1319,
    BFD_RELOC_XTENSA_TLSDESC_ARG=1320,
    BFD_RELOC_XTENSA_TLS_DTPOFF=1321,
    BFD_RELOC_XTENSA_TLS_TPOFF=1322,
    BFD_RELOC_XTENSA_TLS_FUNC=1323,
    BFD_RELOC_XTENSA_TLS_ARG=1324,
    BFD_RELOC_XTENSA_TLS_CALL=1325,
    BFD_RELOC_Z80_DISP8=1326,
    BFD_RELOC_Z8K_DISP7=1327,
    BFD_RELOC_Z8K_CALLR=1328,
    BFD_RELOC_Z8K_IMM4L=1329,
    BFD_RELOC_13_PCREL_S2=1330,
    BFD_RELOC_15_PCREL=1331,
    BFD_RELOC_GPREL8_S1_BITPOS1=1332,
    BFD_RELOC_AEON_GOTOFF8_S1_BITPOS1=1333,
    BFD_RELOC_AEON_8_GOTPC_S1_BITPOS1=1334,
    BFD_RELOC_AEON_8_PCREL_S1_BITPOS1=1335,
    BFD_RELOC_8_S1_BITPOS1=1336,
    BFD_RELOC_GPREL8_S2_BITPOS2=1337,
    BFD_RELOC_AEON_GOTOFF8_S2_BITPOS2=1338,
    BFD_RELOC_AEON_8_GOTPC_S2_BITPOS2=1339,
    BFD_RELOC_AEON_8_PCREL_S2_BITPOS2=1340,
    BFD_RELOC_8_S2_BITPOS2=1341,
    BFD_RELOC_GPREL16_S1_BITPOS1=1342,
    BFD_RELOC_AEON_GOTOFF16_S1_BITPOS1=1343,
    BFD_RELOC_AEON_16_GOTPC_S1_BITPOS1=1344,
    BFD_RELOC_AEON_16_PCREL_S1_BITPOS1=1345,
    BFD_RELOC_16_S1_BITPOS1=1346,
    BFD_RELOC_GPREL16_S2_BITPOS2=1347,
    BFD_RELOC_AEON_GOTOFF16_S2_BITPOS2=1348,
    BFD_RELOC_AEON_16_GOTPC_S2_BITPOS2=1349,
    BFD_RELOC_AEON_16_PCREL_S2_BITPOS2=1350,
    BFD_RELOC_16_S2_BITPOS2=1351,
    BFD_RELOC_HI5=1352,
    BFD_RELOC_HI5_S=1353,
    BFD_RELOC_HI13=1354,
    BFD_RELOC_HI13_S=1355,
    BFD_RELOC_HI16_BITPOS5=1356,
    BFD_RELOC_HI16_BITPOS5_S=1357,
    BFD_RELOC_8_PCREL_BITPOS2=1358,
    BFD_RELOC_AEON_8_PLT_BITPOS2=1359,
    BFD_RELOC_10_PCREL_BITPOS1=1360,
    BFD_RELOC_AEON_10_PLT_BITPOS1=1361,
    BFD_RELOC_10_PCREL_BITPOS3=1362,
    BFD_RELOC_AEON_10_PLT_BITPOS3=1363,
    BFD_RELOC_12_PCREL_BITPOS4=1364,
    BFD_RELOC_AEON_12_PLT_BITPOS4=1365,
    BFD_RELOC_13_PCREL_BITPOS3=1366,
    BFD_RELOC_AEON_13_PLT_BITPOS3=1367,
    BFD_RELOC_16_PCREL_BITPOS2=1368,
    BFD_RELOC_AEON_16_PLT_BITPOS2=1369,
    BFD_RELOC_18_PCREL_BITPOS1=1370,
    BFD_RELOC_AEON_18_PLT_BITPOS1=1371,
    BFD_RELOC_22_PCREL_BITPOS4=1372,
    BFD_RELOC_AEON_22_PLT_BITPOS4=1373,
    BFD_RELOC_23_PCREL_BITPOS3=1374,
    BFD_RELOC_AEON_23_PLT_BITPOS3=1375,
    BFD_RELOC_25_PCREL_BITPOS1=1376,
    BFD_RELOC_AEON_25_PLT_BITPOS1=1377,
    BFD_RELOC_UNUSED=1378
} bfd_reloc_code_real;

typedef enum bfd_reloc_code_real bfd_reloc_code_real_type;

typedef enum bfd_architecture {
    bfd_arch_unknown=0,
    bfd_arch_obscure=1,
    bfd_arch_m68k=2,
    bfd_arch_vax=3,
    bfd_arch_i960=4,
    bfd_arch_or32=5,
    bfd_arch_aeon=6,
    bfd_arch_ba=7,
    bfd_arch_sparc=8,
    bfd_arch_spu=9,
    bfd_arch_mips=10,
    bfd_arch_i386=11,
    bfd_arch_we32k=12,
    bfd_arch_tahoe=13,
    bfd_arch_i860=14,
    bfd_arch_i370=15,
    bfd_arch_romp=16,
    bfd_arch_convex=17,
    bfd_arch_m88k=18,
    bfd_arch_m98k=19,
    bfd_arch_pyramid=20,
    bfd_arch_h8300=21,
    bfd_arch_pdp11=22,
    bfd_arch_powerpc=23,
    bfd_arch_rs6000=24,
    bfd_arch_hppa=25,
    bfd_arch_d10v=26,
    bfd_arch_d30v=27,
    bfd_arch_dlx=28,
    bfd_arch_m68hc11=29,
    bfd_arch_m68hc12=30,
    bfd_arch_z8k=31,
    bfd_arch_h8500=32,
    bfd_arch_sh=33,
    bfd_arch_alpha=34,
    bfd_arch_arm=35,
    bfd_arch_ns32k=36,
    bfd_arch_w65=37,
    bfd_arch_tic30=38,
    bfd_arch_tic4x=39,
    bfd_arch_tic54x=40,
    bfd_arch_tic80=41,
    bfd_arch_v850=42,
    bfd_arch_arc=43,
    bfd_arch_m32c=44,
    bfd_arch_m32r=45,
    bfd_arch_mn10200=46,
    bfd_arch_mn10300=47,
    bfd_arch_fr30=48,
    bfd_arch_frv=49,
    bfd_arch_mcore=50,
    bfd_arch_mep=51,
    bfd_arch_ia64=52,
    bfd_arch_ip2k=53,
    bfd_arch_iq2000=54,
    bfd_arch_mt=55,
    bfd_arch_pj=56,
    bfd_arch_avr=57,
    bfd_arch_bfin=58,
    bfd_arch_cr16=59,
    bfd_arch_cr16c=60,
    bfd_arch_crx=61,
    bfd_arch_cris=62,
    bfd_arch_s390=63,
    bfd_arch_score=64,
    bfd_arch_openrisc=65,
    bfd_arch_mmix=66,
    bfd_arch_xstormy16=67,
    bfd_arch_msp430=68,
    bfd_arch_xc16x=69,
    bfd_arch_xtensa=70,
    bfd_arch_maxq=71,
    bfd_arch_z80=72,
    bfd_arch_last=73
} bfd_architecture;

typedef uchar bfd_byte;

typedef struct bfd_link_order bfd_link_order, *Pbfd_link_order;

typedef struct bfd_link_hash_table bfd_link_hash_table, *Pbfd_link_hash_table;

typedef struct bfd_iovec bfd_iovec, *Pbfd_iovec;

typedef ulonglong ufile_ptr;

typedef enum bfd_format {
    bfd_unknown=0,
    bfd_object=1,
    bfd_archive=2,
    bfd_core=3,
    bfd_type_end=4
} bfd_format;

typedef enum bfd_direction {
    no_direction=0,
    read_direction=1,
    write_direction=2,
    both_direction=3
} bfd_direction;

typedef struct bfd_hash_table bfd_hash_table, *Pbfd_hash_table;

typedef struct bfd_hash_entry bfd_hash_entry, *Pbfd_hash_entry;

typedef struct bfd_arch_info bfd_arch_info, *Pbfd_arch_info;

typedef union anon_union_4_35_acf12297_for_tdata anon_union_4_35_acf12297_for_tdata, *Panon_union_4_35_acf12297_for_tdata;

typedef enum bfd_flavour {
    bfd_target_unknown_flavour=0,
    bfd_target_aout_flavour=1,
    bfd_target_coff_flavour=2,
    bfd_target_ecoff_flavour=3,
    bfd_target_xcoff_flavour=4,
    bfd_target_elf_flavour=5,
    bfd_target_ieee_flavour=6,
    bfd_target_nlm_flavour=7,
    bfd_target_oasys_flavour=8,
    bfd_target_tekhex_flavour=9,
    bfd_target_srec_flavour=10,
    bfd_target_ihex_flavour=11,
    bfd_target_som_flavour=12,
    bfd_target_os9k_flavour=13,
    bfd_target_versados_flavour=14,
    bfd_target_msdos_flavour=15,
    bfd_target_ovax_flavour=16,
    bfd_target_evax_flavour=17,
    bfd_target_mmo_flavour=18,
    bfd_target_mach_o_flavour=19,
    bfd_target_pef_flavour=20,
    bfd_target_pef_xlib_flavour=21,
    bfd_target_sym_flavour=22
} bfd_flavour;

typedef enum bfd_endian {
    BFD_ENDIAN_BIG=0,
    BFD_ENDIAN_LITTLE=1,
    BFD_ENDIAN_UNKNOWN=2
} bfd_endian;

typedef struct relent_chain relent_chain, *Prelent_chain;

typedef union anon_union_4_2_eea4284d_for_map_head_map_tail anon_union_4_2_eea4284d_for_map_head_map_tail, *Panon_union_4_2_eea4284d_for_map_head_map_tail;

typedef struct _bfd_window_internal _bfd_window_internal, *P_bfd_window_internal;

typedef enum report_method {
    RM_NOT_YET_SET=0,
    RM_IGNORE=1,
    RM_GENERATE_WARNING=2,
    RM_GENERATE_ERROR=3
} report_method;

typedef enum bfd_link_strip {
    strip_none=0,
    strip_debugger=1,
    strip_some=2,
    strip_all=3
} bfd_link_strip;

typedef enum bfd_link_discard {
    discard_sec_merge=0,
    discard_none=1,
    discard_l=2,
    discard_all=3
} bfd_link_discard;

typedef enum bfd_link_common_skip_ar_aymbols {
    bfd_link_common_skip_none=0,
    bfd_link_common_skip_text=1,
    bfd_link_common_skip_data=2,
    bfd_link_common_skip_all=3
} bfd_link_common_skip_ar_aymbols;

typedef struct bfd_link_callbacks bfd_link_callbacks, *Pbfd_link_callbacks;

typedef enum bfd_link_hash_type {
    bfd_link_hash_new=0,
    bfd_link_hash_undefined=1,
    bfd_link_hash_undefweak=2,
    bfd_link_hash_defined=3,
    bfd_link_hash_defweak=4,
    bfd_link_hash_common=5,
    bfd_link_hash_indirect=6,
    bfd_link_hash_warning=7
} bfd_link_hash_type;

typedef struct bfd_link_hash_entry bfd_link_hash_entry, *Pbfd_link_hash_entry;

typedef struct bfd_sym_chain bfd_sym_chain, *Pbfd_sym_chain;

typedef struct bfd_elf_dynamic_list bfd_elf_dynamic_list, *Pbfd_elf_dynamic_list;

typedef struct bfd_elf_version_expr bfd_elf_version_expr, *Pbfd_elf_version_expr;

typedef struct bfd_elf_version_expr_head bfd_elf_version_expr_head, *Pbfd_elf_version_expr_head;

typedef uint symvalue;

typedef union anon_union_4_2_94730108_for_udata anon_union_4_2_94730108_for_udata, *Panon_union_4_2_94730108_for_udata;

typedef union anon_union_8_2_61bc5f98_for_u anon_union_8_2_61bc5f98_for_u, *Panon_union_8_2_61bc5f98_for_u;

typedef ulonglong __u_quad_t;

typedef __u_quad_t __dev_t;

typedef uint __mode_t;
typedef uint __nlink_t;
typedef uint __uid_t;
typedef uint __gid_t;

typedef struct timespec timespec, *Ptimespec;

typedef union anon_union_4_2_e12cde57_for_u anon_union_4_2_e12cde57_for_u, *Panon_union_4_2_e12cde57_for_u;

typedef enum complain_overflow {
    complain_overflow_dont=0,
    complain_overflow_bitfield=1,
    complain_overflow_signed=2,
    complain_overflow_unsigned=3
} complain_overflow;

typedef enum bfd_link_order_type {
    bfd_undefined_link_order=0,
    bfd_indirect_link_order=1,
    bfd_data_link_order=2,
    bfd_section_reloc_link_order=3,
    bfd_symbol_reloc_link_order=4
} bfd_link_order_type;

typedef union anon_union_8_3_e5e33cc9_for_u anon_union_8_3_e5e33cc9_for_u, *Panon_union_8_3_e5e33cc9_for_u;

typedef enum bfd_link_hash_table_type {
    bfd_link_generic_hash_table=0,
    bfd_link_elf_hash_table=1
} bfd_link_hash_table_type;

typedef struct artdata artdata, *Partdata;

typedef struct coff_tdata coff_tdata, *Pcoff_tdata;

typedef struct pe_tdata pe_tdata, *Ppe_tdata;

typedef struct xcoff_tdata xcoff_tdata, *Pxcoff_tdata;

typedef struct ecoff_tdata ecoff_tdata, *Pecoff_tdata;

typedef struct srec_data_struct srec_data_struct, *Psrec_data_struct;

typedef struct ihex_data_struct ihex_data_struct, *Pihex_data_struct;

typedef struct tekhex_data_struct tekhex_data_struct, *Ptekhex_data_struct;

typedef struct elf_obj_tdata elf_obj_tdata, *Pelf_obj_tdata;

typedef union anon_union_12_4_19eee206_for_u anon_union_12_4_19eee206_for_u, *Panon_union_12_4_19eee206_for_u;

typedef struct anon_struct_4_1_f8c9b1c5_for_indirect anon_struct_4_1_f8c9b1c5_for_indirect, *Panon_struct_4_1_f8c9b1c5_for_indirect;

typedef struct anon_struct_8_2_3fe157d6_for_data anon_struct_8_2_3fe157d6_for_data, *Panon_struct_8_2_3fe157d6_for_data;

typedef struct anon_struct_4_1_54a39810_for_reloc anon_struct_4_1_54a39810_for_reloc, *Panon_struct_4_1_54a39810_for_reloc;

typedef struct htab htab, *Phtab;

typedef struct htab *htab_t;

typedef struct carsym carsym, *Pcarsym;

typedef struct coff_symbol_struct coff_symbol_struct, *Pcoff_symbol_struct;

typedef struct coff_ptr_struct coff_ptr_struct, *Pcoff_ptr_struct;

typedef struct coff_link_hash_entry coff_link_hash_entry, *Pcoff_link_hash_entry;

typedef struct coff_tdata coff_data_type;

typedef struct internal_extra_pe_aouthdr internal_extra_pe_aouthdr, *Pinternal_extra_pe_aouthdr;

typedef struct ecoff_debug_info ecoff_debug_info, *Pecoff_debug_info;

typedef struct ecoff_symbol_struct ecoff_symbol_struct, *Pecoff_symbol_struct;

typedef struct ecoff_link_hash_entry ecoff_link_hash_entry, *Pecoff_link_hash_entry;

typedef struct ecoff_find_line ecoff_find_line, *Pecoff_find_line;

typedef struct srec_data_list_struct srec_data_list_struct, *Psrec_data_list_struct;

typedef struct srec_data_list_struct srec_data_list_type;

typedef struct srec_symbol srec_symbol, *Psrec_symbol;

typedef struct ihex_data_list ihex_data_list, *Pihex_data_list;

typedef struct tekhex_data_list_struct tekhex_data_list_struct, *Ptekhex_data_list_struct;

typedef struct tekhex_data_list_struct tekhex_data_list_type;

typedef struct tekhex_symbol_struct tekhex_symbol_struct, *Ptekhex_symbol_struct;

typedef struct data_struct data_struct, *Pdata_struct;

typedef struct elf_internal_ehdr elf_internal_ehdr, *Pelf_internal_ehdr;

typedef struct elf_internal_ehdr Elf_Internal_Ehdr;

typedef struct elf_internal_shdr elf_internal_shdr, *Pelf_internal_shdr;

typedef struct elf_internal_shdr Elf_Internal_Shdr;

typedef struct elf_internal_phdr elf_internal_phdr, *Pelf_internal_phdr;

typedef struct elf_internal_phdr Elf_Internal_Phdr;

typedef struct elf_segment_map elf_segment_map, *Pelf_segment_map;

typedef struct elf_strtab_hash elf_strtab_hash, *Pelf_strtab_hash;

typedef struct elf_link_hash_entry elf_link_hash_entry, *Pelf_link_hash_entry;

typedef union anon_union_4_3_e986359d_for_local_got anon_union_4_3_e986359d_for_local_got, *Panon_union_4_3_e986359d_for_local_got;

typedef struct dwarf1_debug dwarf1_debug, *Pdwarf1_debug;

typedef struct elf_internal_verdef elf_internal_verdef, *Pelf_internal_verdef;

typedef struct elf_internal_verdef Elf_Internal_Verdef;

typedef struct elf_internal_verneed elf_internal_verneed, *Pelf_internal_verneed;

typedef struct elf_internal_verneed Elf_Internal_Verneed;

typedef enum dynamic_lib_link_class {
    DYN_NORMAL=0,
    DYN_AS_NEEDED=1,
    DYN_DT_NEEDED=2,
    DYN_NO_ADD_NEEDED=4,
    DYN_NO_NEEDED=8
} dynamic_lib_link_class;

typedef struct obj_attribute obj_attribute, *Pobj_attribute;

typedef struct obj_attribute_list obj_attribute_list, *Pobj_attribute_list;

typedef enum elf_object_id {
    ALPHA_ELF_TDATA=1,
    ARM_ELF_TDATA=2,
    AEON_ELF_TDATA=3,
    BA_ELF_TDATA=4,
    HPPA_ELF_TDATA=5,
    I386_ELF_TDATA=6,
    MIPS_ELF_TDATA=7,
    PPC32_ELF_TDATA=8,
    PPC64_ELF_TDATA=9,
    S390_ELF_TDATA=10,
    SH_ELF_TDATA=11,
    SPARC_ELF_TDATA=12,
    X86_64_ELF_TDATA=13,
    XTENSA_ELF_TDATA=14,
    GENERIC_ELF_TDATA=15
} elf_object_id;

typedef struct anon_struct_12_3_7512ec46_for_undef anon_struct_12_3_7512ec46_for_undef, *Panon_struct_12_3_7512ec46_for_undef;

typedef struct anon_struct_12_3_a42ba1c1_for_def anon_struct_12_3_a42ba1c1_for_def, *Panon_struct_12_3_a42ba1c1_for_def;

typedef struct anon_struct_12_3_46fa8561_for_i anon_struct_12_3_46fa8561_for_i, *Panon_struct_12_3_46fa8561_for_i;

typedef struct anon_struct_12_3_39aa8934_for_c anon_struct_12_3_39aa8934_for_c, *Panon_struct_12_3_39aa8934_for_c;

typedef struct bfd_link_order_reloc bfd_link_order_reloc, *Pbfd_link_order_reloc;

typedef uint hashval_t;

typedef hashval_t (*htab_hash)(void *);

typedef int (*htab_eq)(void *, void *);

typedef void (*htab_del)(void *);

typedef uint size_t;

typedef void * (*htab_alloc)(size_t, size_t);

typedef void (*htab_free)(void *);

typedef void * (*htab_alloc_with_arg)(void *, size_t, size_t);

typedef void (*htab_free_with_arg)(void *, void *);

typedef struct coff_ptr_struct combined_entry_type;

typedef union anon_union_24_2_c945b59e_for_u anon_union_24_2_c945b59e_for_u, *Panon_union_24_2_c945b59e_for_u;

typedef union internal_auxent internal_auxent, *Pinternal_auxent;

typedef struct _IMAGE_DATA_DIRECTORY _IMAGE_DATA_DIRECTORY, *P_IMAGE_DATA_DIRECTORY;

typedef struct _IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY;

typedef struct HDRR HDRR, *PHDRR;

typedef union aux_ext aux_ext, *Paux_ext;

typedef int RFDT;

typedef struct fdr fdr, *Pfdr;

typedef struct fdr FDR;

typedef struct ecoff_extr ecoff_extr, *Pecoff_extr;

typedef struct ecoff_extr EXTR;

typedef struct ecoff_fdrtab_entry ecoff_fdrtab_entry, *Pecoff_fdrtab_entry;

typedef struct anon_struct_24_6_5c3080d4_for_cache anon_struct_24_6_5c3080d4_for_cache, *Panon_struct_24_6_5c3080d4_for_cache;

typedef struct elf_strtab_hash_entry elf_strtab_hash_entry, *Pelf_strtab_hash_entry;

typedef union gotplt_union gotplt_union, *Pgotplt_union;

typedef union anon_union_4_2_666f4730_for_u anon_union_4_2_666f4730_for_u, *Panon_union_4_2_666f4730_for_u;

typedef union anon_union_4_2_309855c2_for_verinfo anon_union_4_2_309855c2_for_verinfo, *Panon_union_4_2_309855c2_for_verinfo;

typedef struct anon_struct_12_3_8c9411e8 anon_struct_12_3_8c9411e8, *Panon_struct_12_3_8c9411e8;

typedef struct dwarf1_unit dwarf1_unit, *Pdwarf1_unit;

typedef struct elf_internal_verdaux elf_internal_verdaux, *Pelf_internal_verdaux;

typedef struct elf_internal_vernaux elf_internal_vernaux, *Pelf_internal_vernaux;

typedef struct bfd_link_hash_common_entry bfd_link_hash_common_entry, *Pbfd_link_hash_common_entry;

typedef union anon_union_4_2_a11f7b3d_for_u anon_union_4_2_a11f7b3d_for_u, *Panon_union_4_2_a11f7b3d_for_u;

typedef struct internal_syment internal_syment, *Pinternal_syment;

typedef struct anon_struct_20_4_5e121dc5_for_x_sym anon_struct_20_4_5e121dc5_for_x_sym, *Panon_struct_20_4_5e121dc5_for_x_sym;

typedef union anon_union_16_2_a950de9e_for_x_file anon_union_16_2_a950de9e_for_x_file, *Panon_union_16_2_a950de9e_for_x_file;

typedef struct anon_struct_16_6_dc3de4d0_for_x_scn anon_struct_16_6_dc3de4d0_for_x_scn, *Panon_struct_16_6_dc3de4d0_for_x_scn;

typedef struct anon_struct_12_3_97c4c1d6_for_x_tv anon_struct_12_3_97c4c1d6_for_x_tv, *Panon_struct_12_3_97c4c1d6_for_x_tv;

typedef struct anon_struct_20_7_8417f343_for_x_csect anon_struct_20_7_8417f343_for_x_csect, *Panon_struct_20_7_8417f343_for_x_csect;

typedef struct anon_struct_4_1_05ba857f_for_x_sc anon_struct_4_1_05ba857f_for_x_sc, *Panon_struct_4_1_05ba857f_for_x_sc;

typedef struct anon_struct_4_1_0e0aa5f3_for_x_bal anon_struct_4_1_0e0aa5f3_for_x_bal, *Panon_struct_4_1_0e0aa5f3_for_x_bal;

typedef struct anon_struct_24_2_b6bd395f_for_x_ident anon_struct_24_2_b6bd395f_for_x_ident, *Panon_struct_24_2_b6bd395f_for_x_ident;

typedef struct tir_ext tir_ext, *Ptir_ext;

typedef struct rndx_ext rndx_ext, *Prndx_ext;

typedef struct SYMR SYMR, *PSYMR;

typedef union anon_union_4_2_c68fcebe_for_u anon_union_4_2_c68fcebe_for_u, *Panon_union_4_2_c68fcebe_for_u;

typedef struct bfd_elf_version_tree bfd_elf_version_tree, *Pbfd_elf_version_tree;

typedef struct linenumber linenumber, *Plinenumber;

typedef struct dwarf1_func dwarf1_func, *Pdwarf1_func;

typedef union anon_union_8_3_072adad1_for__n anon_union_8_3_072adad1_for__n, *Panon_union_8_3_072adad1_for__n;

typedef union anon_union_4_2_94730165_for_x_tagndx anon_union_4_2_94730165_for_x_tagndx, *Panon_union_4_2_94730165_for_x_tagndx;

typedef union anon_union_4_2_62d4962f_for_x_misc anon_union_4_2_62d4962f_for_x_misc, *Panon_union_4_2_62d4962f_for_x_misc;

typedef union anon_union_8_2_1c33b8ea_for_x_fcnary anon_union_8_2_1c33b8ea_for_x_fcnary, *Panon_union_8_2_1c33b8ea_for_x_fcnary;

typedef struct anon_struct_8_2_da0eb6fa_for_x_n anon_struct_8_2_da0eb6fa_for_x_n, *Panon_struct_8_2_da0eb6fa_for_x_n;

typedef union anon_union_4_2_94730165_for_x_scnlen anon_union_4_2_94730165_for_x_scnlen, *Panon_union_4_2_94730165_for_x_scnlen;

typedef struct bfd_elf_version_deps bfd_elf_version_deps, *Pbfd_elf_version_deps;

typedef struct anon_struct_8_2_e535f6e2_for__n_n anon_struct_8_2_e535f6e2_for__n_n, *Panon_struct_8_2_e535f6e2_for__n_n;

typedef struct anon_struct_4_2_3aa463dd_for_x_lnsz anon_struct_4_2_3aa463dd_for_x_lnsz, *Panon_struct_4_2_3aa463dd_for_x_lnsz;

typedef struct anon_struct_8_2_33e277a5_for_x_fcn anon_struct_8_2_33e277a5_for_x_fcn, *Panon_struct_8_2_33e277a5_for_x_fcn;

typedef struct anon_struct_8_1_f714eb8a_for_x_ary anon_struct_8_1_f714eb8a_for_x_ary, *Panon_struct_8_1_f714eb8a_for_x_ary;

typedef uint bfd_hostptr_t;

typedef union anon_union_4_2_94730165_for_x_endndx anon_union_4_2_94730165_for_x_endndx, *Panon_union_4_2_94730165_for_x_endndx;

union anon_union_4_2_94730165_for_x_endndx {
    long l;
    struct coff_ptr_struct *p;
};

struct anon_struct_8_2_33e277a5_for_x_fcn {
    bfd_signed_vma x_lnnoptr;
    union anon_union_4_2_94730165_for_x_endndx x_endndx;
};

struct dwarf1_func {
    struct dwarf1_func *prev;
    char *name;
    ulong low_pc;
    ulong high_pc;
};

union anon_union_4_2_eea4284d_for_map_head_map_tail {
    struct bfd_link_order *link_order;
    struct bfd_section *s;
};

struct anon_struct_12_3_7512ec46_for_undef {
    struct bfd_link_hash_entry *next;
    struct bfd *abfd;
    struct bfd *weak;
};

struct anon_struct_12_3_46fa8561_for_i {
    struct bfd_link_hash_entry *next;
    struct bfd_link_hash_entry *link;
    char *warning;
};

struct anon_struct_12_3_a42ba1c1_for_def {
    struct bfd_link_hash_entry *next;
    asection *section;
    bfd_vma value;
};

struct anon_struct_12_3_39aa8934_for_c {
    struct bfd_link_hash_entry *next;
    struct bfd_link_hash_common_entry *p;
    bfd_size_type size;
};

union anon_union_12_4_19eee206_for_u {
    struct anon_struct_12_3_7512ec46_for_undef undef;
    struct anon_struct_12_3_a42ba1c1_for_def def;
    struct anon_struct_12_3_46fa8561_for_i i;
    struct anon_struct_12_3_39aa8934_for_c c;
};

struct anon_struct_4_2_3aa463dd_for_x_lnsz {
    ushort x_lnno;
    ushort x_size;
};

struct srec_data_list_struct {
    struct srec_data_list_struct *next;
    bfd_byte *data;
    bfd_vma where;
    bfd_size_type size;
};

struct anon_struct_4_1_0e0aa5f3_for_x_bal {
    ulong x_balntry;
};

struct reloc_cache_entry {
    struct bfd_symbol **sym_ptr_ptr;
    bfd_size_type address;
    bfd_vma addend;
    struct reloc_howto_struct *howto;
};

struct carsym {
    char *name;
    file_ptr file_offset;
};

struct elf_internal_phdr {
    ulong p_type;
    ulong p_flags;
    bfd_vma p_offset;
    bfd_vma p_vaddr;
    bfd_vma p_paddr;
    bfd_vma p_filesz;
    bfd_vma p_memsz;
    bfd_vma p_align;
};

struct bfd_sym_chain {
    struct bfd_sym_chain *next;
    char *name;
};

struct elf_internal_verneed {
    ushort vn_version;
    ushort vn_cnt;
    ulong vn_file;
    ulong vn_aux;
    ulong vn_next;
    struct bfd *vn_bfd;
    char *vn_filename;
    struct elf_internal_vernaux *vn_auxptr;
    struct elf_internal_verneed *vn_nextref;
};

struct elf_internal_vernaux {
    ulong vna_hash;
    ushort vna_flags;
    ushort vna_other;
    ulong vna_name;
    ulong vna_next;
    char *vna_nodename;
    struct elf_internal_vernaux *vna_nextptr;
};

struct anon_struct_8_2_e535f6e2_for__n_n {
    bfd_hostptr_t _n_zeroes;
    bfd_hostptr_t _n_offset;
};

union anon_union_8_3_072adad1_for__n {
    char _n_name[8];
    struct anon_struct_8_2_e535f6e2_for__n_n _n_n;
    char *_n_nptr[2];
};

struct anon_struct_8_2_3fe157d6_for_data {
    uint size;
    bfd_byte *contents;
};

union anon_union_4_2_e12cde57_for_u {
    struct bfd_symbol *sym;
    bfd_vma offset;
};

struct internal_syment {
    union anon_union_8_3_072adad1_for__n _n;
    bfd_vma n_value;
    short n_scnum;
    ushort n_flags;
    ushort n_type;
    uchar n_sclass;
    uchar n_numaux;
};

union anon_union_4_2_62d4962f_for_x_misc {
    struct anon_struct_4_2_3aa463dd_for_x_lnsz x_lnsz;
    long x_fsize;
};

struct htab {
    htab_hash hash_f;
    htab_eq eq_f;
    htab_del del_f;
    void **entries;
    size_t size;
    size_t n_elements;
    size_t n_deleted;
    uint searches;
    uint collisions;
    htab_alloc alloc_f;
    htab_free free_f;
    void *alloc_arg;
    htab_alloc_with_arg alloc_with_arg_f;
    htab_free_with_arg free_with_arg_f;
    uint size_prime_index;
};

union anon_union_4_2_309855c2_for_verinfo {
    Elf_Internal_Verdef *verdef;
    struct bfd_elf_version_tree *vertree;
};

struct bfd_hash_entry {
    struct bfd_hash_entry *next;
    char *string;
    ulong hash;
};

struct bfd_link_hash_entry {
    struct bfd_hash_entry root;
    enum bfd_link_hash_type type;
    union anon_union_12_4_19eee206_for_u u;
};

union anon_union_4_2_666f4730_for_u {
    struct elf_link_hash_entry *weakdef;
    ulong elf_hash_value;
};

union gotplt_union {
    bfd_signed_vma refcount;
    bfd_vma offset;
    struct got_entry *glist;
    struct plt_entry *plist;
};

struct elf_link_hash_entry {
    struct bfd_link_hash_entry root;
    long indx;
    long dynindx;
    union gotplt_union got;
    union gotplt_union plt;
    bfd_size_type size;
    uint type:8;
    uint other:8;
    uint ref_regular:1;
    uint def_regular:1;
    uint ref_dynamic:1;
    uint def_dynamic:1;
    uint ref_regular_nonweak:1;
    uint dynamic_adjusted:1;
    uint needs_copy:1;
    uint needs_plt:1;
    uint non_elf:1;
    uint hidden:1;
    uint forced_local:1;
    uint dynamic:1;
    uint mark:1;
    uint non_got_ref:1;
    uint dynamic_def:1;
    uint dynamic_weak:1;
    uint pointer_equality_needed:1;
    ulong dynstr_index;
    union anon_union_4_2_666f4730_for_u u;
    union anon_union_4_2_309855c2_for_verinfo verinfo;
    struct anon_struct_12_3_8c9411e8 *vtable;
};

union anon_union_4_2_a11f7b3d_for_u {
    asection *section;
    char *name;
};

struct bfd_link_order_reloc {
    bfd_reloc_code_real_type reloc;
    union anon_union_4_2_a11f7b3d_for_u u;
    bfd_vma addend;
};

struct anon_struct_4_1_54a39810_for_reloc {
    struct bfd_link_order_reloc *p;
};

struct anon_struct_4_1_f8c9b1c5_for_indirect {
    asection *section;
};

union anon_union_8_3_e5e33cc9_for_u {
    struct anon_struct_4_1_f8c9b1c5_for_indirect indirect;
    struct anon_struct_8_2_3fe157d6_for_data data;
    struct anon_struct_4_1_54a39810_for_reloc reloc;
};

struct bfd_link_order {
    struct bfd_link_order *next;
    enum bfd_link_order_type type;
    bfd_vma offset;
    bfd_size_type size;
    union anon_union_8_3_e5e33cc9_for_u u;
};

struct HDRR {
    short magic;
    short vstamp;
    long ilineMax;
    bfd_vma cbLine;
    bfd_vma cbLineOffset;
    long idnMax;
    bfd_vma cbDnOffset;
    long ipdMax;
    bfd_vma cbPdOffset;
    long isymMax;
    bfd_vma cbSymOffset;
    long ioptMax;
    bfd_vma cbOptOffset;
    long iauxMax;
    bfd_vma cbAuxOffset;
    long issMax;
    bfd_vma cbSsOffset;
    long issExtMax;
    bfd_vma cbSsExtOffset;
    long ifdMax;
    bfd_vma cbFdOffset;
    long crfd;
    bfd_vma cbRfdOffset;
    long iextMax;
    bfd_vma cbExtOffset;
};

struct ecoff_debug_info {
    struct HDRR symbolic_header;
    uchar *line;
    void *external_dnr;
    void *external_pdr;
    void *external_sym;
    void *external_opt;
    union aux_ext *external_aux;
    char *ss;
    char *ssext;
    void *external_fdr;
    void *external_rfd;
    void *external_ext;
    char *ssext_end;
    void *external_ext_end;
    RFDT *ifdmap;
    FDR *fdr;
};

struct ecoff_tdata {
    file_ptr reloc_filepos;
    file_ptr sym_filepos;
    ulong text_start;
    ulong text_end;
    bfd_vma gp;
    uint gp_size;
    ulong gprmask;
    ulong fprmask;
    ulong cprmask[4];
    struct ecoff_debug_info debug_info;
    void *raw_syments;
    struct ecoff_symbol_struct *canonical_symbols;
    struct ecoff_link_hash_entry **sym_hashes;
    asection **symndx_to_section;
    bfd_boolean linker;
    bfd_boolean issued_multiple_gp_warning;
    struct ecoff_find_line *find_line_info;
    bfd_boolean rdata_in_text;
};

struct anon_struct_8_1_f714eb8a_for_x_ary {
    ushort x_dimen[4];
};

union anon_union_8_2_1c33b8ea_for_x_fcnary {
    struct anon_struct_8_2_33e277a5_for_x_fcn x_fcn;
    struct anon_struct_8_1_f714eb8a_for_x_ary x_ary;
};

union anon_union_4_2_94730165_for_x_tagndx {
    long l;
    struct coff_ptr_struct *p;
};

struct anon_struct_20_4_5e121dc5_for_x_sym {
    union anon_union_4_2_94730165_for_x_tagndx x_tagndx;
    union anon_union_4_2_62d4962f_for_x_misc x_misc;
    union anon_union_8_2_1c33b8ea_for_x_fcnary x_fcnary;
    ushort x_tvndx;
};

union anon_union_4_2_94730165_for_x_scnlen {
    bfd_signed_vma l;
    struct coff_ptr_struct *p;
};

struct anon_struct_20_7_8417f343_for_x_csect {
    union anon_union_4_2_94730165_for_x_scnlen x_scnlen;
    long x_parmhash;
    ushort x_snhash;
    uchar x_smtyp;
    uchar x_smclas;
    long x_stab;
    ushort x_snstab;
};

struct anon_struct_4_1_05ba857f_for_x_sc {
    long x_stindx;
};

struct anon_struct_24_2_b6bd395f_for_x_ident {
    ulong x_timestamp;
    char x_idstring[20];
};

struct anon_struct_12_3_97c4c1d6_for_x_tv {
    long x_tvfill;
    ushort x_tvlen;
    ushort x_tvran[2];
};

struct anon_struct_8_2_da0eb6fa_for_x_n {
    long x_zeroes;
    long x_offset;
};

union anon_union_16_2_a950de9e_for_x_file {
    char x_fname[14];
    struct anon_struct_8_2_da0eb6fa_for_x_n x_n;
    undefined1 field2[16]; /* Automatically generated padding to match DWARF declared size */
};

struct anon_struct_16_6_dc3de4d0_for_x_scn {
    long x_scnlen;
    ushort x_nreloc;
    ushort x_nlinno;
    ulong x_checksum;
    ushort x_associated;
    uchar x_comdat;
};

union internal_auxent {
    struct anon_struct_20_4_5e121dc5_for_x_sym x_sym;
    union anon_union_16_2_a950de9e_for_x_file x_file;
    struct anon_struct_16_6_dc3de4d0_for_x_scn x_scn;
    struct anon_struct_12_3_97c4c1d6_for_x_tv x_tv;
    struct anon_struct_20_7_8417f343_for_x_csect x_csect;
    struct anon_struct_4_1_05ba857f_for_x_sc x_sc;
    struct anon_struct_4_1_0e0aa5f3_for_x_bal x_bal;
    struct anon_struct_24_2_b6bd395f_for_x_ident x_ident;
};

union anon_union_24_2_c945b59e_for_u {
    union internal_auxent auxent;
    struct internal_syment syment;
};

struct srec_data_struct {
    srec_data_list_type *head;
    srec_data_list_type *tail;
    uint type;
    struct srec_symbol *symbols;
    struct srec_symbol *symtail;
    asymbol *csymbols;
};

union anon_union_4_2_94730108_for_udata {
    void *p;
    bfd_vma i;
};

struct bfd_symbol {
    struct bfd *the_bfd;
    char *name;
    symvalue value;
    flagword flags;
    struct bfd_section *section;
    union anon_union_4_2_94730108_for_udata udata;
};

struct tekhex_symbol_struct {
    asymbol symbol;
    struct tekhex_symbol_struct *prev;
};

struct bfd_hash_table {
    struct bfd_hash_entry **table;
    bfd_hash_entry * (*newfunc)(struct bfd_hash_entry *, struct bfd_hash_table *, char *);
    void *memory;
    uint size;
    uint count;
    uint entsize;
    uint frozen:1;
};

struct elf_internal_ehdr {
    uchar e_ident[16];
    bfd_vma e_entry;
    bfd_size_type e_phoff;
    bfd_size_type e_shoff;
    ulong e_version;
    ulong e_flags;
    ushort e_type;
    ushort e_machine;
    uint e_ehsize;
    uint e_phentsize;
    uint e_phnum;
    uint e_shentsize;
    uint e_shnum;
    uint e_shstrndx;
};

struct bfd_elf_version_expr_head {
    struct bfd_elf_version_expr *list;
    void *htab;
    struct bfd_elf_version_expr *remaining;
    uint mask;
};

struct timespec {
    __time_t tv_sec;
    long tv_nsec;
};

struct dwarf1_debug {
    struct bfd *abfd;
    asymbol **syms;
    struct dwarf1_unit *lastUnit;
    bfd_byte *debug_section;
    bfd_byte *debug_section_end;
    bfd_byte *line_section;
    bfd_byte *line_section_end;
    bfd_byte *currentDie;
};

struct ihex_data_list {
    struct ihex_data_list *next;
    bfd_byte *data;
    bfd_vma where;
    bfd_size_type size;
};

struct SYMR {
    long iss;
    bfd_vma value;
    uint st:6;
    uint sc:5;
    uint reserved:1;
    uint index:20;
};

struct ecoff_extr {
    uint jmptbl:1;
    uint cobol_main:1;
    uint weakext:1;
    uint reserved:13;
    int ifd;
    struct SYMR asym;
};

struct ecoff_link_hash_entry {
    struct bfd_link_hash_entry root;
    long indx;
    struct bfd *abfd;
    EXTR esym;
    char written;
    char small;
};

struct bfd_link_info {
    uint relocatable:1;
    uint emitrelocations:1;
    uint task_link:1;
    uint shared:1;
    uint symbolic:1;
    uint export_dynamic:1;
    uint static_link:1;
    uint traditional_format:1;
    uint optimize:1;
    uint allow_multiple_definition:1;
    uint allow_undefined_version:1;
    uint create_default_symver:1;
    uint default_imported_symver:1;
    uint keep_memory:1;
    uint notice_all:1;
    uint nocopyreloc:1;
    uint new_dtags:1;
    uint combreloc:1;
    uint eh_frame_hdr:1;
    uint strip_discarded:1;
    uint pie:1;
    uint executable:1;
    uint execstack:1;
    uint noexecstack:1;
    uint relro:1;
    uint warn_shared_textrel:1;
    uint gc_sections:1;
    uint print_gc_sections:1;
    uint emit_hash:1;
    uint emit_gnu_hash:1;
    uint reduce_memory_overheads:1;
    uint dynamic_data:1;
    uint dynamic:1;
    char *emit_note_gnu_build_id;
    enum report_method unresolved_syms_in_objects;
    enum report_method unresolved_syms_in_shared_libs;
    enum bfd_link_strip strip;
    enum bfd_link_discard discard;
    enum bfd_link_common_skip_ar_aymbols common_skip_ar_aymbols;
    char wrap_char;
    char path_separator;
    struct bfd_link_callbacks *callbacks;
    struct bfd_link_hash_table *hash;
    struct bfd_hash_table *keep_hash;
    struct bfd_hash_table *notice_hash;
    struct bfd_hash_table *wrap_hash;
    struct bfd *output_bfd;
    struct bfd *input_bfds;
    struct bfd **input_bfds_tail;
    asection *create_object_symbols_section;
    struct bfd_sym_chain *gc_sym_list;
    void *base_file;
    char *init_function;
    char *fini_function;
    int relax_pass;
    int relax_trip;
    int pei386_auto_import;
    int pei386_runtime_pseudo_reloc;
    uint spare_dynamic_tags;
    bfd_vma flags;
    bfd_vma flags_1;
    bfd_vma relro_start;
    bfd_vma relro_end;
    struct bfd_elf_dynamic_list *dynamic_list;
};

struct dwarf1_unit {
    struct dwarf1_unit *prev;
    char *name;
    ulong low_pc;
    ulong high_pc;
    int has_stmt_list;
    ulong stmt_list_offset;
    bfd_byte *first_child;
    ulong line_count;
    struct linenumber *linenumber_table;
    struct dwarf1_func *func_list;
};

struct _IMAGE_DATA_DIRECTORY {
    bfd_vma VirtualAddress;
    long Size;
};

struct internal_extra_pe_aouthdr {
    short Magic;
    char MajorLinkerVersion;
    char MinorLinkerVersion;
    long SizeOfCode;
    long SizeOfInitializedData;
    long SizeOfUninitializedData;
    bfd_vma AddressOfEntryPoint;
    bfd_vma BaseOfCode;
    bfd_vma BaseOfData;
    bfd_vma ImageBase;
    bfd_vma SectionAlignment;
    bfd_vma FileAlignment;
    short MajorOperatingSystemVersion;
    short MinorOperatingSystemVersion;
    short MajorImageVersion;
    short MinorImageVersion;
    short MajorSubsystemVersion;
    short MinorSubsystemVersion;
    long Reserved1;
    long SizeOfImage;
    long SizeOfHeaders;
    long CheckSum;
    short Subsystem;
    short DllCharacteristics;
    bfd_vma SizeOfStackReserve;
    bfd_vma SizeOfStackCommit;
    bfd_vma SizeOfHeapReserve;
    bfd_vma SizeOfHeapCommit;
    long LoaderFlags;
    long NumberOfRvaAndSizes;
    IMAGE_DATA_DIRECTORY DataDirectory[16];
};

struct coff_tdata {
    struct coff_symbol_struct *symbols;
    uint *conversion_table;
    int conv_table_size;
    file_ptr sym_filepos;
    struct coff_ptr_struct *raw_syments;
    ulong raw_syment_count;
    long relocbase;
    uint local_n_btmask;
    uint local_n_btshft;
    uint local_n_tmask;
    uint local_n_tshift;
    uint local_symesz;
    uint local_auxesz;
    uint local_linesz;
    void *external_syms;
    bfd_boolean keep_syms;
    char *strings;
    bfd_boolean keep_strings;
    bfd_boolean strings_written;
    int pe;
    struct coff_link_hash_entry **sym_hashes;
    int *local_toc_sym_map;
    struct bfd_link_info *link_info;
    void *line_info;
    void *dwarf2_find_line_info;
    long timestamp;
    flagword flags;
};

struct pe_tdata {
    coff_data_type coff;
    struct internal_extra_pe_aouthdr pe_opthdr;
    int dll;
    int has_reloc_section;
    bfd_boolean (*in_reloc_p)(struct bfd *, struct reloc_howto_struct *);
    flagword real_flags;
    int target_subsystem;
    bfd_boolean force_minimum_alignment;
};

struct bfd_target {
    char *name;
    enum bfd_flavour flavour;
    enum bfd_endian byteorder;
    enum bfd_endian header_byteorder;
    flagword object_flags;
    flagword section_flags;
    char symbol_leading_char;
    char ar_pad_char;
    ushort ar_max_namelen;
    bfd_uint64_t (*bfd_getx64)(void *);
    bfd_int64_t (*bfd_getx_signed_64)(void *);
    void (*bfd_putx64)(bfd_uint64_t, void *);
    bfd_vma (*bfd_getx32)(void *);
    bfd_signed_vma (*bfd_getx_signed_32)(void *);
    void (*bfd_putx32)(bfd_vma, void *);
    bfd_vma (*bfd_getx16)(void *);
    bfd_signed_vma (*bfd_getx_signed_16)(void *);
    void (*bfd_putx16)(bfd_vma, void *);
    bfd_uint64_t (*bfd_h_getx64)(void *);
    bfd_int64_t (*bfd_h_getx_signed_64)(void *);
    void (*bfd_h_putx64)(bfd_uint64_t, void *);
    bfd_vma (*bfd_h_getx32)(void *);
    bfd_signed_vma (*bfd_h_getx_signed_32)(void *);
    void (*bfd_h_putx32)(bfd_vma, void *);
    bfd_vma (*bfd_h_getx16)(void *);
    bfd_signed_vma (*bfd_h_getx_signed_16)(void *);
    void (*bfd_h_putx16)(bfd_vma, void *);
    bfd_target * (*_bfd_check_format[4])(struct bfd *);
    bfd_boolean (*_bfd_set_format[4])(struct bfd *);
    bfd_boolean (*_bfd_write_contents[4])(struct bfd *);
    bfd_boolean (*_close_and_cleanup)(struct bfd *);
    bfd_boolean (*_bfd_free_cached_info)(struct bfd *);
    bfd_boolean (*_new_section_hook)(struct bfd *, sec_ptr);
    bfd_boolean (*_bfd_get_section_contents)(struct bfd *, sec_ptr, void *, file_ptr, bfd_size_type);
    bfd_boolean (*_bfd_get_section_contents_in_window)(struct bfd *, sec_ptr, bfd_window *, file_ptr, bfd_size_type);
    bfd_boolean (*_bfd_copy_private_bfd_data)(struct bfd *, struct bfd *);
    bfd_boolean (*_bfd_merge_private_bfd_data)(struct bfd *, struct bfd *);
    bfd_boolean (*_bfd_init_private_section_data)(struct bfd *, sec_ptr, struct bfd *, sec_ptr, struct bfd_link_info *);
    bfd_boolean (*_bfd_copy_private_section_data)(struct bfd *, sec_ptr, struct bfd *, sec_ptr);
    bfd_boolean (*_bfd_copy_private_symbol_data)(struct bfd *, asymbol *, struct bfd *, asymbol *);
    bfd_boolean (*_bfd_copy_private_header_data)(struct bfd *, struct bfd *);
    bfd_boolean (*_bfd_set_private_flags)(struct bfd *, flagword);
    bfd_boolean (*_bfd_print_private_bfd_data)(struct bfd *, void *);
    char * (*_core_file_failing_command)(struct bfd *);
    int (*_core_file_failing_signal)(struct bfd *);
    bfd_boolean (*_core_file_matches_executable_p)(struct bfd *, struct bfd *);
    bfd_boolean (*_bfd_slurp_armap)(struct bfd *);
    bfd_boolean (*_bfd_slurp_extended_name_table)(struct bfd *);
    bfd_boolean (*_bfd_construct_extended_name_table)(struct bfd *, char **, bfd_size_type *, char **);
    void (*_bfd_truncate_arname)(struct bfd *, char *, char *);
    bfd_boolean (*write_armap)(struct bfd *, uint, struct orl *, uint, int);
    void * (*_bfd_read_ar_hdr_fn)(struct bfd *);
    bfd * (*openr_next_archived_file)(struct bfd *, struct bfd *);
    bfd * (*_bfd_get_elt_at_index)(struct bfd *, symindex);
    int (*_bfd_stat_arch_elt)(struct bfd *, struct stat *);
    bfd_boolean (*_bfd_update_armap_timestamp)(struct bfd *);
    long (*_bfd_get_symtab_upper_bound)(struct bfd *);
    long (*_bfd_canonicalize_symtab)(struct bfd *, struct bfd_symbol **);
    bfd_symbol * (*_bfd_make_empty_symbol)(struct bfd *);
    void (*_bfd_print_symbol)(struct bfd *, void *, struct bfd_symbol *, bfd_print_symbol_type);
    void (*_bfd_get_symbol_info)(struct bfd *, struct bfd_symbol *, symbol_info *);
    bfd_boolean (*_bfd_is_local_label_name)(struct bfd *, char *);
    bfd_boolean (*_bfd_is_target_special_symbol)(struct bfd *, asymbol *);
    alent * (*_get_lineno)(struct bfd *, struct bfd_symbol *);
    bfd_boolean (*_bfd_find_nearest_line)(struct bfd *, struct bfd_section *, struct bfd_symbol **, bfd_vma, char **, char **, uint *);
    bfd_boolean (*_bfd_find_line)(struct bfd *, struct bfd_symbol **, struct bfd_symbol *, char **, uint *);
    bfd_boolean (*_bfd_find_inliner_info)(struct bfd *, char **, char **, uint *);
    asymbol * (*_bfd_make_debug_symbol)(struct bfd *, void *, ulong);
    long (*_read_minisymbols)(struct bfd *, bfd_boolean, void **, uint *);
    asymbol * (*_minisymbol_to_symbol)(struct bfd *, bfd_boolean, void *, asymbol *);
    long (*_get_reloc_upper_bound)(struct bfd *, sec_ptr);
    long (*_bfd_canonicalize_reloc)(struct bfd *, sec_ptr, arelent **, struct bfd_symbol **);
    reloc_howto_struct * (*reloc_type_lookup)(struct bfd *, bfd_reloc_code_real_type);
    reloc_howto_struct * (*reloc_name_lookup)(struct bfd *, char *);
    bfd_boolean (*_bfd_set_arch_mach)(struct bfd *, enum bfd_architecture, ulong);
    bfd_boolean (*_bfd_set_section_contents)(struct bfd *, sec_ptr, void *, file_ptr, bfd_size_type);
    int (*_bfd_sizeof_headers)(struct bfd *, struct bfd_link_info *);
    bfd_byte * (*_bfd_get_relocated_section_contents)(struct bfd *, struct bfd_link_info *, struct bfd_link_order *, bfd_byte *, bfd_boolean, struct bfd_symbol **);
    bfd_boolean (*_bfd_relax_section)(struct bfd *, struct bfd_section *, struct bfd_link_info *, bfd_boolean *);
    bfd_link_hash_table * (*_bfd_link_hash_table_create)(struct bfd *);
    void (*_bfd_link_hash_table_free)(struct bfd_link_hash_table *);
    bfd_boolean (*_bfd_link_add_symbols)(struct bfd *, struct bfd_link_info *);
    void (*_bfd_link_just_syms)(asection *, struct bfd_link_info *);
    bfd_boolean (*_bfd_final_link)(struct bfd *, struct bfd_link_info *);
    bfd_boolean (*_bfd_link_split_section)(struct bfd *, struct bfd_section *);
    bfd_boolean (*_bfd_gc_sections)(struct bfd *, struct bfd_link_info *);
    bfd_boolean (*_bfd_merge_sections)(struct bfd *, struct bfd_link_info *);
    bfd_boolean (*_bfd_is_group_section)(struct bfd *, struct bfd_section *);
    bfd_boolean (*_bfd_discard_group)(struct bfd *, struct bfd_section *);
    void (*_section_already_linked)(struct bfd *, struct bfd_section *, struct bfd_link_info *);
    long (*_bfd_get_dynamic_symtab_upper_bound)(struct bfd *);
    long (*_bfd_canonicalize_dynamic_symtab)(struct bfd *, struct bfd_symbol **);
    long (*_bfd_get_synthetic_symtab)(struct bfd *, long, struct bfd_symbol **, long, struct bfd_symbol **, struct bfd_symbol **);
    long (*_bfd_get_dynamic_reloc_upper_bound)(struct bfd *);
    long (*_bfd_canonicalize_dynamic_reloc)(struct bfd *, arelent **, struct bfd_symbol **);
    struct bfd_target *alternative_target;
    void *backend_data;
};

union anon_union_8_2_61bc5f98_for_u {
    file_ptr pos;
    struct bfd *abfd;
};

struct tekhex_data_struct {
    tekhex_data_list_type *head;
    uint type;
    struct tekhex_symbol_struct *symbols;
    struct data_struct *data;
};

union anon_union_4_35_acf12297_for_tdata {
    struct aout_data_struct *aout_data;
    struct artdata *aout_ar_data;
    struct _oasys_data *oasys_obj_data;
    struct _oasys_ar_data *oasys_ar_data;
    struct coff_tdata *coff_obj_data;
    struct pe_tdata *pe_obj_data;
    struct xcoff_tdata *xcoff_obj_data;
    struct ecoff_tdata *ecoff_obj_data;
    struct ieee_data_struct *ieee_data;
    struct ieee_ar_data_struct *ieee_ar_data;
    struct srec_data_struct *srec_data;
    struct ihex_data_struct *ihex_data;
    struct tekhex_data_struct *tekhex_data;
    struct elf_obj_tdata *elf_obj_data;
    struct nlm_obj_tdata *nlm_obj_data;
    struct bout_data_struct *bout_data;
    struct mmo_data_struct *mmo_data;
    struct sun_core_struct *sun_core_data;
    struct sco5_core_struct *sco5_core_data;
    struct trad_core_struct *trad_core_data;
    struct som_data_struct *som_data;
    struct hpux_core_struct *hpux_core_data;
    struct hppabsd_core_struct *hppabsd_core_data;
    struct sgi_core_struct *sgi_core_data;
    struct lynx_core_struct *lynx_core_data;
    struct osf_core_struct *osf_core_data;
    struct cisco_core_struct *cisco_core_data;
    struct versados_data_struct *versados_data;
    struct netbsd_core_struct *netbsd_core_data;
    struct mach_o_data_struct *mach_o_data;
    struct mach_o_fat_data_struct *mach_o_fat_data;
    struct bfd_pef_data_struct *pef_data;
    struct bfd_pef_xlib_data_struct *pef_xlib_data;
    struct bfd_sym_data_struct *sym_data;
    void *any;
};

struct tekhex_data_list_struct {
    uchar *data;
    bfd_vma where;
    bfd_size_type size;
    struct tekhex_data_list_struct *next;
};

struct bfd_elf_dynamic_list {
    struct bfd_elf_version_expr_head head;
    bfd_elf_version_expr * (*match)(struct bfd_elf_version_expr_head *, struct bfd_elf_version_expr *, char *);
};

struct ar_cache {
    file_ptr ptr;
    struct bfd *arbfd;
};

struct stat {
    __dev_t st_dev;
    ushort __pad1;
    __ino_t st_ino;
    __mode_t st_mode;
    __nlink_t st_nlink;
    __uid_t st_uid;
    __gid_t st_gid;
    __dev_t st_rdev;
    ushort __pad2;
    __off_t st_size;
    __blksize_t st_blksize;
    __blkcnt_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    ulong __unused4;
    ulong __unused5;
};

struct elf_internal_shdr {
    uint sh_name;
    uint sh_type;
    bfd_vma sh_flags;
    bfd_vma sh_addr;
    file_ptr sh_offset;
    bfd_size_type sh_size;
    uint sh_link;
    uint sh_info;
    bfd_vma sh_addralign;
    bfd_size_type sh_entsize;
    asection *bfd_section;
    uchar *contents;
};

struct fdr {
    bfd_vma adr;
    long rss;
    long issBase;
    bfd_vma cbSs;
    long isymBase;
    long csym;
    long ilineBase;
    long cline;
    long ioptBase;
    long copt;
    ushort ipdFirst;
    short cpd;
    long iauxBase;
    long caux;
    long rfdBase;
    long crfd;
    uint lang:5;
    uint fMerge:1;
    uint fReadin:1;
    uint fBigendian:1;
    uint glevel:2;
    uint reserved:22;
    bfd_vma cbLineOffset;
    bfd_vma cbLine;
};

struct _symbol_info {
    symvalue value;
    char type;
    char *name;
    uchar stab_type;
    char stab_other;
    short stab_desc;
    char *stab_name;
};

struct bfd_link_callbacks {
    bfd_boolean (*add_archive_element)(struct bfd_link_info *, struct bfd *, char *);
    bfd_boolean (*multiple_definition)(struct bfd_link_info *, char *, struct bfd *, asection *, bfd_vma, struct bfd *, asection *, bfd_vma);
    bfd_boolean (*multiple_common)(struct bfd_link_info *, char *, struct bfd *, enum bfd_link_hash_type, bfd_vma, struct bfd *, enum bfd_link_hash_type, bfd_vma);
    bfd_boolean (*add_to_set)(struct bfd_link_info *, struct bfd_link_hash_entry *, bfd_reloc_code_real_type, struct bfd *, asection *, bfd_vma);
    bfd_boolean (*constructor)(struct bfd_link_info *, bfd_boolean, char *, struct bfd *, asection *, bfd_vma);
    bfd_boolean (*warning)(struct bfd_link_info *, char *, char *, struct bfd *, asection *, bfd_vma);
    bfd_boolean (*undefined_symbol)(struct bfd_link_info *, char *, struct bfd *, asection *, bfd_vma, bfd_boolean);
    bfd_boolean (*reloc_overflow)(struct bfd_link_info *, struct bfd_link_hash_entry *, char *, char *, bfd_vma, struct bfd *, asection *, bfd_vma);
    bfd_boolean (*reloc_dangerous)(struct bfd_link_info *, char *, struct bfd *, asection *, bfd_vma);
    bfd_boolean (*unattached_reloc)(struct bfd_link_info *, char *, struct bfd *, asection *, bfd_vma);
    bfd_boolean (*notice)(struct bfd_link_info *, char *, struct bfd *, asection *, bfd_vma);
    void (*einfo)(char *, ...);
    void (*info)(char *, ...);
    void (*minfo)(char *, ...);
    bfd_boolean (*override_segment_assignment)(struct bfd_link_info *, struct bfd *, asection *, asection *, bfd_boolean);
};

struct bfd_elf_version_deps {
    struct bfd_elf_version_deps *next;
    struct bfd_elf_version_tree *version_needed;
};

struct lineno_cache_entry {
    uint line_number;
    union anon_union_4_2_e12cde57_for_u u;
};

struct obj_attribute {
    int type;
    uint i;
    char *s;
};

struct obj_attribute_list {
    struct obj_attribute_list *next;
    int tag;
    struct obj_attribute attr;
};

struct rndx_ext {
    uchar r_bits[4];
};

struct tir_ext {
    uchar t_bits1[1];
    uchar t_tq45[1];
    uchar t_tq01[1];
    uchar t_tq23[1];
};

union aux_ext {
    struct tir_ext a_ti;
    struct rndx_ext a_rndx;
    uchar a_dnLow[4];
    uchar a_dnHigh[4];
    uchar a_isym[4];
    uchar a_iss[4];
    uchar a_width[4];
    uchar a_count[4];
};

struct bfd_elf_version_expr {
    struct bfd_elf_version_expr *next;
    char *pattern;
    char *symbol;
    uint symver:1;
    uint script:1;
    uint mask:3;
};

struct elf_internal_verdef {
    ushort vd_version;
    ushort vd_flags;
    ushort vd_ndx;
    ushort vd_cnt;
    ulong vd_hash;
    ulong vd_aux;
    ulong vd_next;
    struct bfd *vd_bfd;
    char *vd_nodename;
    struct elf_internal_verdef *vd_nextdef;
    struct elf_internal_verdaux *vd_auxptr;
    uint vd_exp_refno;
};

struct bfd {
    uint id;
    char *filename;
    struct bfd_target *xvec;
    void *iostream;
    struct bfd_iovec *iovec;
    struct bfd *lru_prev;
    struct bfd *lru_next;
    ufile_ptr where;
    long mtime;
    int ifd;
    enum bfd_format format;
    enum bfd_direction direction;
    flagword flags;
    ufile_ptr origin;
    ufile_ptr proxy_origin;
    struct bfd_hash_table section_htab;
    struct bfd_section *sections;
    struct bfd_section *section_last;
    uint section_count;
    bfd_vma start_address;
    uint symcount;
    struct bfd_symbol **outsymbols;
    uint dynsymcount;
    struct bfd_arch_info *arch_info;
    void *arelt_data;
    struct bfd *my_archive;
    struct bfd *archive_next;
    struct bfd *archive_head;
    struct bfd *nested_archives;
    struct bfd *link_next;
    int archive_pass;
    union anon_union_4_35_acf12297_for_tdata tdata;
    void *usrdata;
    void *memory;
    uint cacheable:1;
    uint target_defaulted:1;
    uint opened_once:1;
    uint mtime_set:1;
    uint no_export:1;
    uint output_has_begun:1;
    uint has_armap:1;
    uint is_thin_archive:1;
};

struct coff_symbol_struct {
    asymbol symbol;
    combined_entry_type *native;
    struct lineno_cache_entry *lineno;
    bfd_boolean done_lineno;
};

struct elf_strtab_hash {
    struct bfd_hash_table table;
    bfd_size_type size;
    bfd_size_type alloced;
    bfd_size_type sec_size;
    struct elf_strtab_hash_entry **array;
};

union anon_union_4_2_c68fcebe_for_u {
    bfd_size_type index;
    struct elf_strtab_hash_entry *suffix;
};

struct elf_strtab_hash_entry {
    struct bfd_hash_entry root;
    int len;
    uint refcount;
    union anon_union_4_2_c68fcebe_for_u u;
};

struct anon_struct_12_3_8c9411e8 {
    size_t size;
    bfd_boolean *used;
    struct elf_link_hash_entry *parent;
};

struct xcoff_tdata {
    coff_data_type coff;
    bfd_boolean xcoff64;
    bfd_boolean full_aouthdr;
    bfd_vma toc;
    int sntoc;
    int snentry;
    int text_align_power;
    int data_align_power;
    short modtype;
    short cputype;
    bfd_vma maxdata;
    bfd_vma maxstack;
    asection **csects;
    ulong *debug_indices;
    uint import_file_id;
};

struct bfd_arch_info {
    int bits_per_word;
    int bits_per_address;
    int bits_per_byte;
    enum bfd_architecture arch;
    ulong mach;
    char *arch_name;
    char *printable_name;
    uint section_align_power;
    bfd_boolean the_default;
    bfd_arch_info * (*compatible)(struct bfd_arch_info *, struct bfd_arch_info *);
    bfd_boolean (*scan)(struct bfd_arch_info *, char *);
    struct bfd_arch_info *next;
};

struct coff_ptr_struct {
    uint offset;
    uint fix_value:1;
    uint fix_tag:1;
    uint fix_end:1;
    uint fix_scnlen:1;
    uint fix_line:1;
    union anon_union_24_2_c945b59e_for_u u;
};

struct bfd_iovec {
    file_ptr (*bread)(struct bfd *, void *, file_ptr);
    file_ptr (*bwrite)(struct bfd *, void *, file_ptr);
    file_ptr (*btell)(struct bfd *);
    int (*bseek)(struct bfd *, file_ptr, int);
    int (*bclose)(struct bfd *);
    int (*bflush)(struct bfd *);
    int (*bstat)(struct bfd *, struct stat *);
};

struct _bfd_window {
    void *data;
    bfd_size_type size;
    struct _bfd_window_internal *i;
};

struct linenumber {
    ulong addr;
    ulong linenumber;
};

struct data_struct {
    char chunk_data[8192];
    char chunk_init[8192];
    bfd_vma vma;
    struct data_struct *next;
};

struct bfd_link_hash_table {
    struct bfd_hash_table table;
    struct bfd_link_hash_entry *undefs;
    struct bfd_link_hash_entry *undefs_tail;
    enum bfd_link_hash_table_type type;
};

struct elf_segment_map {
    struct elf_segment_map *next;
    ulong p_type;
    ulong p_flags;
    bfd_vma p_paddr;
    bfd_vma p_vaddr_offset;
    bfd_vma p_align;
    bfd_vma p_size;
    uint p_flags_valid:1;
    uint p_paddr_valid:1;
    uint p_align_valid:1;
    uint p_size_valid:1;
    uint includes_filehdr:1;
    uint includes_phdrs:1;
    uint count;
    asection *sections[1];
};

struct bfd_section {
    char *name;
    int id;
    int index;
    struct bfd_section *next;
    struct bfd_section *prev;
    flagword flags;
    uint user_set_vma:1;
    uint linker_mark:1;
    uint linker_has_input:1;
    uint gc_mark:1;
    uint segment_mark:1;
    uint sec_info_type:3;
    uint use_rela_p:1;
    uint has_tls_reloc:1;
    uint has_gp_reloc:1;
    uint need_finalize_relax:1;
    uint reloc_done:1;
    bfd_vma vma;
    bfd_vma lma;
    bfd_size_type size;
    bfd_size_type rawsize;
    bfd_vma output_offset;
    struct bfd_section *output_section;
    uint alignment_power;
    struct reloc_cache_entry *relocation;
    struct reloc_cache_entry **orelocation;
    uint reloc_count;
    file_ptr filepos;
    file_ptr rel_filepos;
    file_ptr line_filepos;
    void *userdata;
    uchar *contents;
    alent *lineno;
    uint lineno_count;
    uint entsize;
    struct bfd_section *kept_section;
    file_ptr moving_line_filepos;
    int target_index;
    void *used_by_bfd;
    struct relent_chain *constructor_chain;
    struct bfd *owner;
    struct bfd_symbol *symbol;
    struct bfd_symbol **symbol_ptr_ptr;
    union anon_union_4_2_eea4284d_for_map_head_map_tail map_head;
    union anon_union_4_2_eea4284d_for_map_head_map_tail map_tail;
};

struct ecoff_symbol_struct {
    asymbol symbol;
    FDR *fdr;
    bfd_boolean local;
    void *native;
};

struct ihex_data_struct {
    struct ihex_data_list *head;
    struct ihex_data_list *tail;
};

struct relent_chain {
    arelent relent;
    struct relent_chain *next;
};

union anon_union_4_3_e986359d_for_local_got {
    bfd_signed_vma *refcounts;
    bfd_vma *offsets;
    struct got_entry **ents;
};

struct ecoff_fdrtab_entry {
    bfd_vma base_addr;
    FDR *fdr;
};

struct elf_obj_tdata {
    Elf_Internal_Ehdr elf_header[1];
    Elf_Internal_Shdr **elf_sect_ptr;
    Elf_Internal_Phdr *phdr;
    struct elf_segment_map *segment_map;
    struct elf_strtab_hash *strtab_ptr;
    int num_locals;
    int num_globals;
    uint num_elf_sections;
    int num_section_syms;
    asymbol **section_syms;
    Elf_Internal_Shdr symtab_hdr;
    Elf_Internal_Shdr shstrtab_hdr;
    Elf_Internal_Shdr strtab_hdr;
    Elf_Internal_Shdr dynsymtab_hdr;
    Elf_Internal_Shdr dynstrtab_hdr;
    Elf_Internal_Shdr dynversym_hdr;
    Elf_Internal_Shdr dynverref_hdr;
    Elf_Internal_Shdr dynverdef_hdr;
    Elf_Internal_Shdr symtab_shndx_hdr;
    uint symtab_section;
    uint shstrtab_section;
    uint strtab_section;
    uint dynsymtab_section;
    uint symtab_shndx_section;
    uint dynversym_section;
    uint dynverdef_section;
    uint dynverref_section;
    file_ptr next_file_pos;
    bfd_vma gp;
    uint gp_size;
    int core_signal;
    int core_pid;
    int core_lwpid;
    char *core_program;
    char *core_command;
    struct elf_link_hash_entry **sym_hashes;
    union anon_union_4_3_e986359d_for_local_got local_got;
    char *dt_name;
    bfd_size_type program_header_size;
    void *line_info;
    struct mips_elf_find_line *find_line_info;
    struct dwarf1_debug *dwarf1_find_line_info;
    void *dwarf2_find_line_info;
    asection **local_stubs;
    asection **local_call_stubs;
    asection *eh_frame_hdr;
    Elf_Internal_Shdr **group_sect_ptr;
    int num_group;
    uint cverdefs;
    uint cverrefs;
    uint stack_flags;
    Elf_Internal_Verdef *verdef;
    Elf_Internal_Verneed *verref;
    asymbol *elf_data_symbol;
    asymbol *elf_text_symbol;
    asection *elf_data_section;
    asection *elf_text_section;
    asection *eh_frame_section;
    enum dynamic_lib_link_class dyn_lib_class;
    bfd_boolean linker;
    bfd_boolean bad_symtab;
    bfd_boolean flags_init;
    void *symbuf;
    struct obj_attribute known_obj_attributes[2][32];
    struct obj_attribute_list *other_obj_attributes[2];
    bfd_boolean (*after_write_object_contents)(struct bfd *);
    void *after_write_object_contents_info;
    bfd_size_type build_id_size;
    bfd_byte *build_id;
    enum elf_object_id object_id;
    void *cpu_dat;
};

struct srec_symbol {
    struct srec_symbol *next;
    char *name;
    bfd_vma val;
};

struct bfd_elf_version_tree {
    struct bfd_elf_version_tree *next;
    char *name;
    uint vernum;
    struct bfd_elf_version_expr_head globals;
    struct bfd_elf_version_expr_head locals;
    struct bfd_elf_version_deps *deps;
    uint name_indx;
    int used;
    bfd_elf_version_expr * (*match)(struct bfd_elf_version_expr_head *, struct bfd_elf_version_expr *, char *);
};

struct artdata {
    file_ptr first_file_filepos;
    htab_t cache;
    struct bfd *archive_head;
    struct carsym *symdefs;
    symindex symdef_count;
    char *extended_names;
    bfd_size_type extended_names_size;
    long armap_timestamp;
    file_ptr armap_datepos;
    void *tdata;
};

struct anon_struct_24_6_5c3080d4_for_cache {
    asection *sect;
    bfd_vma start;
    bfd_vma stop;
    char *filename;
    char *functionname;
    uint line_num;
};

struct ecoff_find_line {
    char *find_buffer;
    long fdrtab_len;
    struct ecoff_fdrtab_entry *fdrtab;
    struct anon_struct_24_6_5c3080d4_for_cache cache;
};

struct elf_internal_verdaux {
    ulong vda_name;
    ulong vda_next;
    char *vda_nodename;
    struct elf_internal_verdaux *vda_nextptr;
};

struct orl {
    char **name;
    union anon_union_8_2_61bc5f98_for_u u;
    int namidx;
};

struct bfd_link_hash_common_entry {
    uint alignment_power;
    asection *section;
};

struct _bfd_window_internal {
    struct _bfd_window_internal *next;
    void *data;
    bfd_size_type size;
    int refcount:31;
    uint mapped:1;
};

struct reloc_howto_struct {
    uint type;
    uint rightshift;
    int size;
    uint bitsize;
    bfd_boolean pc_relative;
    uint bitpos;
    enum complain_overflow complain_on_overflow;
    bfd_reloc_status_type (*special_function)(struct bfd *, arelent *, struct bfd_symbol *, void *, asection *, struct bfd *, char **);
    char *name;
    bfd_boolean partial_inplace;
    bfd_vma src_mask;
    bfd_vma dst_mask;
    bfd_boolean pcrel_offset;
};

struct coff_link_hash_entry {
    struct bfd_link_hash_entry root;
    long indx;
    ushort type;
    uchar class;
    char numaux;
    struct bfd *auxbfd;
    union internal_auxent *aux;
    ushort coff_link_hash_flags;
};

typedef struct defsym_list defsym_list, *Pdefsym_list;

typedef bfd_vma addressT;

typedef addressT valueT;

struct defsym_list {
    struct defsym_list *next;
    char *name;
    valueT value;
};

typedef struct _pseudo_type _pseudo_type, *P_pseudo_type;

struct _pseudo_type {
    char *poc_name;
    void (*poc_handler)(int);
    int poc_val;
};

typedef enum _relax_state {
    rs_dummy=0,
    rs_fill=1,
    rs_align=2,
    rs_align_code=3,
    rs_align_test=4,
    rs_org=5,
    rs_broken_word=6,
    rs_machine_dependent=7,
    rs_space=8,
    rs_leb128=9,
    rs_cfa=10,
    rs_dwarf2dbg=11
} _relax_state;

typedef enum debug_info_type {
    DEBUG_UNSPECIFIED=0,
    DEBUG_NONE=1,
    DEBUG_STABS=2,
    DEBUG_ECOFF=3,
    DEBUG_DWARF=4,
    DEBUG_DWARF2=5
} debug_info_type;

typedef struct frag frag, *Pfrag;

typedef struct frag fragS;

typedef bfd_signed_vma offsetT;

typedef struct symbol symbol, *Psymbol;

typedef struct symbol symbolS;

typedef struct list_info_struct list_info_struct, *Plist_info_struct;

typedef enum _relax_state relax_stateT;

typedef uint relax_substateT;

typedef struct aeon_relax_state aeon_relax_state, *Paeon_relax_state;

typedef struct expressionS expressionS, *PexpressionS;

typedef struct elf_obj_sy elf_obj_sy, *Pelf_obj_sy;

typedef struct file_info_struct file_info_struct, *Pfile_info_struct;

typedef struct file_info_struct file_info_type;

typedef enum anon_enum_32 {
    EDICT_NONE=0,
    ENDIAN_UNSET=0,
    Tag_NULL=0,
    __LC_CTYPE=0,
    EDICT_SBTTL=1,
    ENDIAN_BIG=1,
    Tag_File=1,
    __LC_NUMERIC=1,
    _sch_isblank=1,
    EDICT_TITLE=2,
    ENDIAN_LITTLE=2,
    Tag_Section=2,
    __LC_TIME=2,
    _sch_iscntrl=2,
    EDICT_NOLIST=3,
    Tag_Symbol=3,
    __LC_COLLATE=3,
    EDICT_LIST=4,
    __LC_MONETARY=4,
    _sch_isdigit=4,
    EDICT_NOLIST_NEXT=5,
    __LC_MESSAGES=5,
    EDICT_EJECT=6,
    __LC_ALL=6,
    __LC_PAPER=7,
    __LC_NAME=8,
    _sch_islower=8,
    __LC_ADDRESS=9,
    __LC_TELEPHONE=10,
    __LC_MEASUREMENT=11,
    __LC_IDENTIFICATION=12,
    _sch_isprint=16,
    Tag_compatibility=32,
    _sch_ispunct=32,
    _sch_isspace=64,
    _sch_isupper=128,
    _sch_isalpha=136,
    _sch_isalnum=140,
    _sch_isgraph=172,
    D_PRINT_BUFFER_LENGTH=256,
    _sch_isxdigit=256,
    _sch_isidst=512,
    _sch_isidnum=516,
    _sch_isvsp=1024,
    _sch_isnvsp=2048,
    _sch_iscppsp=3072,
    _sch_isbasic=3088
} anon_enum_32;

typedef union aeon_relax_data aeon_relax_data, *Paeon_relax_data;

typedef enum operatorT {
    O_illegal=0,
    O_absent=1,
    O_constant=2,
    O_symbol=3,
    O_symbol_rva=4,
    O_register=5,
    O_big=6,
    O_uminus=7,
    O_bit_not=8,
    O_logical_not=9,
    O_multiply=10,
    O_divide=11,
    O_modulus=12,
    O_left_shift=13,
    O_right_shift=14,
    O_bit_inclusive_or=15,
    O_bit_or_not=16,
    O_bit_exclusive_or=17,
    O_bit_and=18,
    O_add=19,
    O_subtract=20,
    O_eq=21,
    O_ne=22,
    O_lt=23,
    O_le=24,
    O_ge=25,
    O_gt=26,
    O_logical_and=27,
    O_logical_or=28,
    O_index=29,
    O_md1=30,
    O_md2=31,
    O_md3=32,
    O_md4=33,
    O_md5=34,
    O_md6=35,
    O_md7=36,
    O_md8=37,
    O_md9=38,
    O_md10=39,
    O_md11=40,
    O_md12=41,
    O_md13=42,
    O_md14=43,
    O_md15=44,
    O_md16=45,
    O_md17=46,
    O_md18=47,
    O_md19=48,
    O_md20=49,
    O_md21=50,
    O_md22=51,
    O_md23=52,
    O_md24=53,
    O_md25=54,
    O_md26=55,
    O_md27=56,
    O_md28=57,
    O_md29=58,
    O_md30=59,
    O_md31=60,
    O_md32=61,
    O_max=62
} operatorT;

typedef struct anon_struct_12_3_d70a58e0_for_equiv anon_struct_12_3_d70a58e0_for_equiv, *Panon_struct_12_3_d70a58e0_for_equiv;

typedef struct anon_struct_8_2_11821199_for_seq anon_struct_8_2_11821199_for_seq, *Panon_struct_8_2_11821199_for_seq;

struct anon_struct_8_2_11821199_for_seq {
    struct seq_list *cur_seq;
    struct seq_list *seq_list;
};

struct anon_struct_12_3_d70a58e0_for_equiv {
    struct bin_opcode *enc_bopc;
    struct bin_opcode *cur_bopc;
    struct bin_opcode **bopc_group;
};

union aeon_relax_data {
    struct anon_struct_12_3_d70a58e0_for_equiv equiv;
    struct anon_struct_8_2_11821199_for_seq seq;
};

struct aeon_relax_state {
    int type;
    int not_fit;
    union aeon_relax_data rd;
    uint sym_operands[10];
    uint sym_mods[10];
    offsetT offset[10];
    symbolS *symbol[10];
    int sym_count;
    op_t ops[10];
};

struct elf_obj_sy {
    int local;
    struct expressionS *size;
    char *versioned_name;
};

struct expressionS {
    symbolS *X_add_symbol;
    symbolS *X_op_symbol;
    offsetT X_add_number;
    enum operatorT X_op:8;
    uint X_unsigned:1;
    ushort X_md;
};

struct symbol {
    asymbol *bsym;
    struct expressionS sy_value;
    struct symbol *sy_next;
    struct symbol *sy_previous;
    struct frag *sy_frag;
    uint written:1;
    uint sy_resolved:1;
    uint sy_resolving:1;
    uint sy_used_in_reloc:1;
    uint sy_used:1;
    uint sy_volatile:1;
    uint sy_forward_ref:1;
    uint sy_mri_common:1;
    uint sy_weakrefr:1;
    uint sy_weakrefd:1;
    struct elf_obj_sy sy_obj;
    uint local:1;
};

struct file_info_struct {
    struct file_info_struct *next;
    char *filename;
    long pos;
    uint linenum;
    int at_end;
};

struct list_info_struct {
    fragS *frag;
    uint line;
    file_info_type *file;
    char *line_contents;
    struct list_info_struct *next;
    file_info_type *hll_file;
    uint hll_line;
    char *message;
    enum anon_enum_32 edict;
    char *edict_arg;
    int debugging;
};

struct frag {
    addressT fr_address;
    addressT last_fr_address;
    offsetT fr_fix;
    offsetT fr_var;
    offsetT fr_offset;
    symbolS *fr_symbol;
    char *fr_opcode;
    struct frag *fr_next;
    char *fr_file;
    uint fr_line;
    struct list_info_struct *line;
    uint relax_marker:1;
    uint has_code:1;
    uint insn_addr:6;
    relax_stateT fr_type;
    relax_substateT fr_subtype;
    struct aeon_relax_state tc_frag_data;
    char fr_literal[1];
};

typedef struct _pseudo_type pseudo_typeS;

typedef addressT relax_addressT;

typedef asection *segT;

typedef struct bfd_arch_info bfd_arch_info_type;

typedef enum bfd_error {
    bfd_error_no_error=0,
    bfd_error_system_call=1,
    bfd_error_invalid_target=2,
    bfd_error_wrong_format=3,
    bfd_error_wrong_object_format=4,
    bfd_error_invalid_operation=5,
    bfd_error_no_memory=6,
    bfd_error_no_symbols=7,
    bfd_error_no_armap=8,
    bfd_error_no_more_archived_files=9,
    bfd_error_malformed_archive=10,
    bfd_error_file_not_recognized=11,
    bfd_error_file_ambiguously_recognized=12,
    bfd_error_no_contents=13,
    bfd_error_nonrepresentable_section=14,
    bfd_error_no_debug_section=15,
    bfd_error_bad_value=16,
    bfd_error_file_truncated=17,
    bfd_error_file_too_big=18,
    bfd_error_on_input=19,
    bfd_error_invalid_error_code=20
} bfd_error;

typedef void (*bfd_error_handler_type)(char *, ...);

typedef enum bfd_error bfd_error_type;

typedef struct bfd_link_needed_list bfd_link_needed_list, *Pbfd_link_needed_list;

struct bfd_link_needed_list {
    struct bfd_link_needed_list *next;
    struct bfd *by;
    char *name;
};

typedef struct bfd_preserve bfd_preserve, *Pbfd_preserve;

struct bfd_preserve {
    void *marker;
    void *tdata;
    flagword flags;
    struct bfd_arch_info *arch_info;
    struct bfd_section *sections;
    struct bfd_section *section_last;
    uint section_count;
    struct bfd_hash_table section_htab;
};

typedef struct coff_comdat_info coff_comdat_info, *Pcoff_comdat_info;

struct coff_comdat_info {
    char *name;
    long symbol;
};

typedef enum notice_asneeded_action {
    notice_as_needed=0,
    notice_not_needed=1,
    notice_needed=2
} notice_asneeded_action;

typedef struct reloc_howto_struct reloc_howto_type;

typedef struct stab_info stab_info, *Pstab_info;

typedef struct bfd_strtab_hash bfd_strtab_hash, *Pbfd_strtab_hash;

typedef struct strtab_hash_entry strtab_hash_entry, *Pstrtab_hash_entry;

struct stab_info {
    struct bfd_strtab_hash *strings;
    struct bfd_hash_table includes;
    struct bfd_section *stabstr;
};

struct strtab_hash_entry {
    struct bfd_hash_entry root;
    bfd_size_type index;
    struct strtab_hash_entry *next;
};

struct bfd_strtab_hash {
    struct bfd_hash_table table;
    bfd_size_type size;
    struct strtab_hash_entry *first;
    struct strtab_hash_entry *last;
    bfd_boolean xcoff;
};

typedef struct bit_fix bit_fix, *Pbit_fix;

struct bit_fix {
    int fx_bit_size;
    int fx_bit_offset;
    long fx_bit_base;
    long fx_bit_base_adj;
    long fx_bit_max;
    long fx_bit_min;
    long fx_bit_add;
};

typedef struct bit_fix bit_fixS;

typedef enum cache_flag {
    CACHE_NORMAL=0,
    CACHE_NO_OPEN=1,
    CACHE_NO_SEEK=2,
    CACHE_NO_SEEK_ERROR=4
} cache_flag;

typedef struct conditional_frame conditional_frame, *Pconditional_frame;

typedef struct file_line file_line, *Pfile_line;

struct file_line {
    char *file;
    uint line;
};

struct conditional_frame {
    struct file_line if_file_line;
    struct file_line else_file_line;
    struct conditional_frame *previous_cframe;
    int else_seen;
    int ignoring;
    int dead_tree;
    int macro_nest;
};

typedef struct d_growable_string d_growable_string, *Pd_growable_string;

struct d_growable_string {
    char *buf;
    size_t len;
    size_t alc;
    int allocation_failure;
};

typedef struct d_print_info d_print_info, *Pd_print_info;

typedef void (*demangle_callbackref)(char *, size_t, void *);

typedef struct d_print_template d_print_template, *Pd_print_template;

typedef struct d_print_mod d_print_mod, *Pd_print_mod;

typedef struct demangle_component demangle_component, *Pdemangle_component;

typedef enum demangle_component_type {
    DEMANGLE_COMPONENT_NAME=0,
    DEMANGLE_COMPONENT_QUAL_NAME=1,
    DEMANGLE_COMPONENT_LOCAL_NAME=2,
    DEMANGLE_COMPONENT_TYPED_NAME=3,
    DEMANGLE_COMPONENT_TEMPLATE=4,
    DEMANGLE_COMPONENT_TEMPLATE_PARAM=5,
    DEMANGLE_COMPONENT_CTOR=6,
    DEMANGLE_COMPONENT_DTOR=7,
    DEMANGLE_COMPONENT_VTABLE=8,
    DEMANGLE_COMPONENT_VTT=9,
    DEMANGLE_COMPONENT_CONSTRUCTION_VTABLE=10,
    DEMANGLE_COMPONENT_TYPEINFO=11,
    DEMANGLE_COMPONENT_TYPEINFO_NAME=12,
    DEMANGLE_COMPONENT_TYPEINFO_FN=13,
    DEMANGLE_COMPONENT_THUNK=14,
    DEMANGLE_COMPONENT_VIRTUAL_THUNK=15,
    DEMANGLE_COMPONENT_COVARIANT_THUNK=16,
    DEMANGLE_COMPONENT_JAVA_CLASS=17,
    DEMANGLE_COMPONENT_GUARD=18,
    DEMANGLE_COMPONENT_REFTEMP=19,
    DEMANGLE_COMPONENT_HIDDEN_ALIAS=20,
    DEMANGLE_COMPONENT_SUB_STD=21,
    DEMANGLE_COMPONENT_RESTRICT=22,
    DEMANGLE_COMPONENT_VOLATILE=23,
    DEMANGLE_COMPONENT_CONST=24,
    DEMANGLE_COMPONENT_RESTRICT_THIS=25,
    DEMANGLE_COMPONENT_VOLATILE_THIS=26,
    DEMANGLE_COMPONENT_CONST_THIS=27,
    DEMANGLE_COMPONENT_VENDOR_TYPE_QUAL=28,
    DEMANGLE_COMPONENT_POINTER=29,
    DEMANGLE_COMPONENT_REFERENCE=30,
    DEMANGLE_COMPONENT_RVALUE_REFERENCE=31,
    DEMANGLE_COMPONENT_COMPLEX=32,
    DEMANGLE_COMPONENT_IMAGINARY=33,
    DEMANGLE_COMPONENT_BUILTIN_TYPE=34,
    DEMANGLE_COMPONENT_VENDOR_TYPE=35,
    DEMANGLE_COMPONENT_FUNCTION_TYPE=36,
    DEMANGLE_COMPONENT_ARRAY_TYPE=37,
    DEMANGLE_COMPONENT_PTRMEM_TYPE=38,
    DEMANGLE_COMPONENT_ARGLIST=39,
    DEMANGLE_COMPONENT_TEMPLATE_ARGLIST=40,
    DEMANGLE_COMPONENT_OPERATOR=41,
    DEMANGLE_COMPONENT_EXTENDED_OPERATOR=42,
    DEMANGLE_COMPONENT_CAST=43,
    DEMANGLE_COMPONENT_UNARY=44,
    DEMANGLE_COMPONENT_BINARY=45,
    DEMANGLE_COMPONENT_BINARY_ARGS=46,
    DEMANGLE_COMPONENT_TRINARY=47,
    DEMANGLE_COMPONENT_TRINARY_ARG1=48,
    DEMANGLE_COMPONENT_TRINARY_ARG2=49,
    DEMANGLE_COMPONENT_LITERAL=50,
    DEMANGLE_COMPONENT_LITERAL_NEG=51,
    DEMANGLE_COMPONENT_JAVA_RESOURCE=52,
    DEMANGLE_COMPONENT_COMPOUND_NAME=53,
    DEMANGLE_COMPONENT_CHARACTER=54
} demangle_component_type;

typedef union anon_union_8_10_ba9ed05a_for_u anon_union_8_10_ba9ed05a_for_u, *Panon_union_8_10_ba9ed05a_for_u;

typedef struct anon_struct_8_2_fa2525a7_for_s_name anon_struct_8_2_fa2525a7_for_s_name, *Panon_struct_8_2_fa2525a7_for_s_name;

typedef struct anon_struct_4_1_3fcf669f_for_s_operator anon_struct_4_1_3fcf669f_for_s_operator, *Panon_struct_4_1_3fcf669f_for_s_operator;

typedef struct anon_struct_8_2_3808c76b_for_s_extended_operator anon_struct_8_2_3808c76b_for_s_extended_operator, *Panon_struct_8_2_3808c76b_for_s_extended_operator;

typedef struct anon_struct_8_2_3891b394_for_s_ctor anon_struct_8_2_3891b394_for_s_ctor, *Panon_struct_8_2_3891b394_for_s_ctor;

typedef struct anon_struct_8_2_3891b394_for_s_dtor anon_struct_8_2_3891b394_for_s_dtor, *Panon_struct_8_2_3891b394_for_s_dtor;

typedef struct anon_struct_4_1_89923c38_for_s_builtin anon_struct_4_1_89923c38_for_s_builtin, *Panon_struct_4_1_89923c38_for_s_builtin;

typedef struct anon_struct_8_2_cd8693eb_for_s_string anon_struct_8_2_cd8693eb_for_s_string, *Panon_struct_8_2_cd8693eb_for_s_string;

typedef struct anon_struct_4_1_637ccc87_for_s_number anon_struct_4_1_637ccc87_for_s_number, *Panon_struct_4_1_637ccc87_for_s_number;

typedef struct anon_struct_4_1_72d441c9_for_s_character anon_struct_4_1_72d441c9_for_s_character, *Panon_struct_4_1_72d441c9_for_s_character;

typedef struct anon_struct_8_2_2465f1bc_for_s_binary anon_struct_8_2_2465f1bc_for_s_binary, *Panon_struct_8_2_2465f1bc_for_s_binary;

typedef struct demangle_operator_info demangle_operator_info, *Pdemangle_operator_info;

typedef enum gnu_v3_ctor_kinds {
    gnu_v3_complete_object_ctor=1,
    gnu_v3_base_object_ctor=2,
    gnu_v3_complete_object_allocating_ctor=3
} gnu_v3_ctor_kinds;

typedef enum gnu_v3_dtor_kinds {
    gnu_v3_deleting_dtor=1,
    gnu_v3_complete_object_dtor=2,
    gnu_v3_base_object_dtor=3
} gnu_v3_dtor_kinds;

typedef struct demangle_builtin_type_info demangle_builtin_type_info, *Pdemangle_builtin_type_info;

typedef enum d_builtin_type_print {
    D_PRINT_DEFAULT=0,
    D_PRINT_INT=1,
    D_PRINT_UNSIGNED=2,
    D_PRINT_LONG=3,
    D_PRINT_UNSIGNED_LONG=4,
    D_PRINT_LONG_LONG=5,
    D_PRINT_UNSIGNED_LONG_LONG=6,
    D_PRINT_BOOL=7,
    D_PRINT_FLOAT=8,
    D_PRINT_VOID=9
} d_builtin_type_print;

struct anon_struct_4_1_3fcf669f_for_s_operator {
    struct demangle_operator_info *op;
};

struct anon_struct_8_2_3891b394_for_s_dtor {
    enum gnu_v3_dtor_kinds kind;
    struct demangle_component *name;
};

struct anon_struct_8_2_fa2525a7_for_s_name {
    char *s;
    int len;
};

struct anon_struct_8_2_3808c76b_for_s_extended_operator {
    int args;
    struct demangle_component *name;
};

struct anon_struct_4_1_72d441c9_for_s_character {
    int character;
};

struct anon_struct_8_2_cd8693eb_for_s_string {
    char *string;
    int len;
};

struct d_print_info {
    int options;
    char buf[256];
    size_t len;
    char last_char;
    demangle_callbackref callback;
    void *opaque;
    struct d_print_template *templates;
    struct d_print_mod *modifiers;
    int demangle_failure;
};

struct anon_struct_8_2_3891b394_for_s_ctor {
    enum gnu_v3_ctor_kinds kind;
    struct demangle_component *name;
};

struct anon_struct_4_1_89923c38_for_s_builtin {
    struct demangle_builtin_type_info *type;
};

struct anon_struct_4_1_637ccc87_for_s_number {
    long number;
};

struct anon_struct_8_2_2465f1bc_for_s_binary {
    struct demangle_component *left;
    struct demangle_component *right;
};

union anon_union_8_10_ba9ed05a_for_u {
    struct anon_struct_8_2_fa2525a7_for_s_name s_name;
    struct anon_struct_4_1_3fcf669f_for_s_operator s_operator;
    struct anon_struct_8_2_3808c76b_for_s_extended_operator s_extended_operator;
    struct anon_struct_8_2_3891b394_for_s_ctor s_ctor;
    struct anon_struct_8_2_3891b394_for_s_dtor s_dtor;
    struct anon_struct_4_1_89923c38_for_s_builtin s_builtin;
    struct anon_struct_8_2_cd8693eb_for_s_string s_string;
    struct anon_struct_4_1_637ccc87_for_s_number s_number;
    struct anon_struct_4_1_72d441c9_for_s_character s_character;
    struct anon_struct_8_2_2465f1bc_for_s_binary s_binary;
};

struct demangle_component {
    enum demangle_component_type type;
    union anon_union_8_10_ba9ed05a_for_u u;
};

struct demangle_builtin_type_info {
    char *name;
    int len;
    char *java_name;
    int java_len;
    enum d_builtin_type_print print;
};

struct demangle_operator_info {
    char *code;
    char *name;
    int len;
    int args;
};

struct d_print_mod {
    struct d_print_mod *next;
    struct demangle_component *mod;
    int printed;
    struct d_print_template *templates;
};

struct d_print_template {
    struct d_print_template *next;
    struct demangle_component *template_decl;
};

typedef struct d_standard_sub_info d_standard_sub_info, *Pd_standard_sub_info;

struct d_standard_sub_info {
    char code;
    char *simple_expansion;
    int simple_len;
    char *full_expansion;
    int full_len;
    char *set_last_name;
    int set_last_name_len;
};

typedef struct d_info d_info, *Pd_info;

struct d_info {
    char *s;
    char *send;
    int options;
    char *n;
    struct demangle_component *comps;
    int next_comp;
    int num_comps;
    struct demangle_component **subs;
    int next_sub;
    int num_subs;
    int did_subs;
    struct demangle_component *last_name;
    int expansion;
};

typedef struct optable optable, *Poptable;

struct optable {
    char *in;
    char *out;
    int flags;
};

typedef struct string string, *Pstring;

struct string {
    char *b;
    char *p;
    char *e;
};

typedef enum type_kind_t {
    tk_none=0,
    tk_pointer=1,
    tk_reference=2,
    tk_integral=3,
    tk_bool=4,
    tk_char=5,
    tk_real=6
} type_kind_t;

typedef struct work_stuff work_stuff, *Pwork_stuff;

struct work_stuff {
    int options;
    char **typevec;
    char **ktypevec;
    char **btypevec;
    int numk;
    int numb;
    int ksize;
    int bsize;
    int ntypes;
    int typevec_size;
    int constructor;
    int destructor;
    int static_type;
    int temp_start;
    int type_quals;
    int dllimported;
    char **tmpl_argvec;
    int ntmpl_args;
    int forgetting_types;
    struct string *previous_argument;
    int nrepeats;
};

typedef struct demangler_engine demangler_engine, *Pdemangler_engine;

typedef enum demangling_styles {
    no_demangling=-1,
    unknown_demangling=0,
    java_demangling=4,
    auto_demangling=256,
    gnu_demangling=512,
    lucid_demangling=1024,
    arm_demangling=2048,
    hp_demangling=4096,
    edg_demangling=8192,
    gnu_v3_demangling=16384,
    gnat_demangling=32768
} demangling_styles;

struct demangler_engine {
    char *demangling_style_name;
    enum demangling_styles demangling_style;
    char *demangling_style_doc;
};

typedef struct dependency dependency, *Pdependency;

struct dependency {
    char *file;
    struct dependency *next;
};

typedef struct anon_struct_24_3_263016ec_for_ea anon_struct_24_3_263016ec_for_ea, *Panon_struct_24_3_263016ec_for_ea;

struct anon_struct_24_3_263016ec_for_ea {
    uint reg;
    uint encoding;
    struct expressionS exp;
};

typedef struct anon_struct_8_2_389b0a9e_for_ll anon_struct_8_2_389b0a9e_for_ll, *Panon_struct_8_2_389b0a9e_for_ll;

struct anon_struct_8_2_389b0a9e_for_ll {
    symbolS *lab1;
    symbolS *lab2;
};

typedef struct anon_struct_8_2_38f445be_for_rr anon_struct_8_2_38f445be_for_rr, *Panon_struct_8_2_38f445be_for_rr;

struct anon_struct_8_2_38f445be_for_rr {
    uint reg1;
    uint reg2;
};

typedef struct anon_struct_8_2_8d7113ba_for_ri anon_struct_8_2_8d7113ba_for_ri, *Panon_struct_8_2_8d7113ba_for_ri;

struct anon_struct_8_2_8d7113ba_for_ri {
    uint reg;
    offsetT offset;
};

typedef union anon_union_24_7_ab287d4b_for_u anon_union_24_7_ab287d4b_for_u, *Panon_union_24_7_ab287d4b_for_u;

typedef struct cfi_escape_data cfi_escape_data, *Pcfi_escape_data;

struct cfi_escape_data {
    struct cfi_escape_data *next;
    struct expressionS exp;
};

union anon_union_24_7_ab287d4b_for_u {
    struct anon_struct_8_2_8d7113ba_for_ri ri;
    struct anon_struct_8_2_38f445be_for_rr rr;
    uint r;
    offsetT i;
    struct anon_struct_8_2_389b0a9e_for_ll ll;
    struct cfi_escape_data *esc;
    struct anon_struct_24_3_263016ec_for_ea ea;
};

typedef struct cfa_save_data cfa_save_data, *Pcfa_save_data;

struct cfa_save_data {
    struct cfa_save_data *next;
    offsetT cfa_offset;
};

typedef struct cfi_insn_data cfi_insn_data, *Pcfi_insn_data;

struct cfi_insn_data {
    struct cfi_insn_data *next;
    int insn;
    union anon_union_24_7_ab287d4b_for_u u;
};

typedef struct cie_entry cie_entry, *Pcie_entry;

struct cie_entry {
    struct cie_entry *next;
    symbolS *start_address;
    uint return_column;
    uint signal_frame;
    uchar per_encoding;
    uchar lsda_encoding;
    struct expressionS personality;
    struct cfi_insn_data *first;
    struct cfi_insn_data *last;
};

typedef struct fde_entry fde_entry, *Pfde_entry;

struct fde_entry {
    struct fde_entry *next;
    symbolS *start_address;
    symbolS *end_address;
    struct cfi_insn_data *data;
    struct cfi_insn_data **last;
    uchar per_encoding;
    uchar lsda_encoding;
    struct expressionS personality;
    struct expressionS lsda;
    uint return_column;
    uint signal_frame;
};

typedef struct frch_cfi_data frch_cfi_data, *Pfrch_cfi_data;

struct frch_cfi_data {
    struct fde_entry *cur_fde_data;
    symbolS *last_address;
    offsetT cur_cfa_offset;
    struct cfa_save_data *cfa_save_stack;
};

typedef struct die_info die_info, *Pdie_info;

struct die_info {
    ulong length;
    ulong sibling;
    ulong low_pc;
    ulong high_pc;
    ulong stmt_list_offset;
    char *name;
    int has_stmt_list;
    ushort tag;
};

typedef union anon_union_8_4_59f785e6_for_u anon_union_8_4_59f785e6_for_u, *Panon_union_8_4_59f785e6_for_u;

typedef struct dwarf_block dwarf_block, *Pdwarf_block;

union anon_union_8_4_59f785e6_for_u {
    char *str;
    struct dwarf_block *blk;
    bfd_uint64_t val;
    bfd_int64_t sval;
};

struct dwarf_block {
    uint size;
    bfd_byte *data;
};

typedef struct abbrev_info abbrev_info, *Pabbrev_info;

typedef enum dwarf_tag {
    DW_TAG_padding=0,
    TAG_padding=0,
    DW_TAG_array_type=1,
    TAG_array_type=1,
    DW_TAG_class_type=2,
    TAG_class_type=2,
    DW_TAG_entry_point=3,
    TAG_entry_point=3,
    DW_TAG_enumeration_type=4,
    TAG_enumeration_type=4,
    DW_TAG_formal_parameter=5,
    TAG_formal_parameter=5,
    TAG_global_subroutine=6,
    TAG_global_variable=7,
    DW_TAG_imported_declaration=8,
    DW_TAG_label=10,
    TAG_label=10,
    DW_TAG_lexical_block=11,
    TAG_lexical_block=11,
    TAG_local_variable=12,
    DW_TAG_member=13,
    TAG_member=13,
    DW_TAG_pointer_type=15,
    TAG_pointer_type=15,
    DW_TAG_reference_type=16,
    TAG_reference_type=16,
    DW_TAG_compile_unit=17,
    TAG_compile_unit=17,
    DW_TAG_string_type=18,
    TAG_string_type=18,
    DW_TAG_structure_type=19,
    TAG_structure_type=19,
    TAG_subroutine=20,
    DW_TAG_subroutine_type=21,
    TAG_subroutine_type=21,
    DW_TAG_typedef=22,
    TAG_typedef=22,
    DW_TAG_union_type=23,
    TAG_union_type=23,
    DW_TAG_unspecified_parameters=24,
    TAG_unspecified_parameters=24,
    DW_TAG_variant=25,
    TAG_variant=25,
    DW_TAG_common_block=26,
    TAG_common_block=26,
    DW_TAG_common_inclusion=27,
    TAG_common_inclusion=27,
    DW_TAG_inheritance=28,
    TAG_inheritance=28,
    DW_TAG_inlined_subroutine=29,
    TAG_inlined_subroutine=29,
    DW_TAG_module=30,
    TAG_module=30,
    DW_TAG_ptr_to_member_type=31,
    TAG_ptr_to_member_type=31,
    DW_TAG_set_type=32,
    TAG_set_type=32,
    DW_TAG_subrange_type=33,
    TAG_subrange_type=33,
    DW_TAG_with_stmt=34,
    TAG_with_stmt=34,
    DW_TAG_access_declaration=35,
    DW_TAG_base_type=36,
    DW_TAG_catch_block=37,
    DW_TAG_const_type=38,
    DW_TAG_constant=39,
    DW_TAG_enumerator=40,
    DW_TAG_file_type=41,
    DW_TAG_friend=42,
    DW_TAG_namelist=43,
    DW_TAG_namelist_item=44,
    DW_TAG_packed_type=45,
    DW_TAG_subprogram=46,
    DW_TAG_template_type_param=47,
    DW_TAG_template_value_param=48,
    DW_TAG_thrown_type=49,
    DW_TAG_try_block=50,
    DW_TAG_variant_part=51,
    DW_TAG_variable=52,
    DW_TAG_volatile_type=53,
    DW_TAG_dwarf_procedure=54,
    DW_TAG_restrict_type=55,
    DW_TAG_interface_type=56,
    DW_TAG_namespace=57,
    DW_TAG_imported_module=58,
    DW_TAG_unspecified_type=59,
    DW_TAG_partial_unit=60,
    DW_TAG_imported_unit=61,
    DW_TAG_condition=63,
    DW_TAG_shared_type=64,
    DW_TAG_MIPS_loop=16513,
    DW_TAG_HP_array_descriptor=16528,
    DW_TAG_format_label=16641,
    DW_TAG_function_template=16642,
    DW_TAG_class_template=16643,
    DW_TAG_GNU_BINCL=16644,
    DW_TAG_GNU_EINCL=16645,
    TAG_format_label=32768,
    TAG_namelist=32769,
    TAG_function_template=32770,
    TAG_class_template=32771,
    DW_TAG_upc_shared_type=34661,
    DW_TAG_upc_strict_type=34662,
    DW_TAG_upc_relaxed_type=34663,
    DW_TAG_PGI_kanji_type=40960,
    DW_TAG_PGI_interface_block=40992
} dwarf_tag;

typedef struct attr_abbrev attr_abbrev, *Pattr_abbrev;

typedef enum dwarf_attribute {
    DW_AT_sibling=1,
    DW_AT_location=2,
    DW_AT_name=3,
    DW_AT_ordering=9,
    DW_AT_subscr_data=10,
    DW_AT_byte_size=11,
    DW_AT_bit_offset=12,
    DW_AT_bit_size=13,
    DW_AT_element_list=15,
    DW_AT_stmt_list=16,
    DW_AT_low_pc=17,
    AT_sibling=18,
    DW_AT_high_pc=18,
    DW_AT_language=19,
    DW_AT_member=20,
    DW_AT_discr=21,
    DW_AT_discr_value=22,
    DW_AT_visibility=23,
    DW_AT_import=24,
    DW_AT_string_length=25,
    DW_AT_common_reference=26,
    DW_AT_comp_dir=27,
    DW_AT_const_value=28,
    DW_AT_containing_type=29,
    DW_AT_default_value=30,
    DW_AT_inline=32,
    DW_AT_is_optional=33,
    DW_AT_lower_bound=34,
    AT_location=35,
    DW_AT_producer=37,
    DW_AT_prototyped=39,
    DW_AT_return_addr=42,
    DW_AT_start_scope=44,
    DW_AT_bit_stride=46,
    DW_AT_upper_bound=47,
    DW_AT_abstract_origin=49,
    DW_AT_accessibility=50,
    DW_AT_address_class=51,
    DW_AT_artificial=52,
    DW_AT_base_types=53,
    DW_AT_calling_convention=54,
    DW_AT_count=55,
    AT_name=56,
    DW_AT_data_member_location=56,
    DW_AT_decl_column=57,
    DW_AT_decl_file=58,
    DW_AT_decl_line=59,
    DW_AT_declaration=60,
    DW_AT_discr_list=61,
    DW_AT_encoding=62,
    DW_AT_external=63,
    DW_AT_frame_base=64,
    DW_AT_friend=65,
    DW_AT_identifier_case=66,
    DW_AT_macro_info=67,
    DW_AT_namelist_items=68,
    DW_AT_priority=69,
    DW_AT_segment=70,
    DW_AT_specification=71,
    DW_AT_static_link=72,
    DW_AT_type=73,
    DW_AT_use_location=74,
    DW_AT_variable_parameter=75,
    DW_AT_virtuality=76,
    DW_AT_vtable_elem_location=77,
    DW_AT_allocated=78,
    DW_AT_associated=79,
    DW_AT_data_location=80,
    DW_AT_byte_stride=81,
    DW_AT_entry_pc=82,
    DW_AT_use_UTF8=83,
    DW_AT_extension=84,
    AT_fund_type=85,
    DW_AT_ranges=85,
    DW_AT_trampoline=86,
    DW_AT_call_column=87,
    DW_AT_call_file=88,
    DW_AT_call_line=89,
    DW_AT_description=90,
    DW_AT_binary_scale=91,
    DW_AT_decimal_scale=92,
    DW_AT_small=93,
    DW_AT_decimal_sign=94,
    DW_AT_digit_count=95,
    DW_AT_picture_string=96,
    DW_AT_mutable=97,
    DW_AT_threads_scaled=98,
    AT_mod_fund_type=99,
    DW_AT_explicit=99,
    DW_AT_object_pointer=100,
    DW_AT_endianity=101,
    DW_AT_elemental=102,
    DW_AT_pure=103,
    DW_AT_recursive=104,
    AT_user_def_type=114,
    AT_mod_u_d_type=131,
    AT_ordering=149,
    AT_subscr_data=163,
    AT_byte_size=182,
    AT_bit_offset=197,
    AT_bit_size=214,
    AT_element_list=244,
    AT_stmt_list=262,
    AT_low_pc=273,
    AT_high_pc=289,
    AT_language=310,
    AT_member=322,
    AT_discr=338,
    AT_discr_value=355,
    AT_string_length=403,
    AT_common_reference=418,
    AT_comp_dir=440,
    AT_const_value_block2=451,
    AT_const_value_block4=452,
    AT_const_value_data2=453,
    AT_const_value_data4=454,
    AT_const_value_data8=455,
    AT_const_value_string=456,
    AT_containing_type=466,
    AT_default_value_addr=481,
    AT_default_value_data2=485,
    AT_default_value_data4=486,
    AT_default_value_data8=487,
    AT_default_value_string=488,
    AT_friends=499,
    AT_inline=520,
    AT_is_optional=536,
    AT_lower_bound_ref=546,
    AT_lower_bound_data2=549,
    AT_lower_bound_data4=550,
    AT_lower_bound_data8=551,
    AT_program=568,
    AT_private=584,
    AT_producer=600,
    AT_protected=616,
    AT_prototyped=632,
    AT_public=648,
    AT_pure_virtual=664,
    AT_return_addr=675,
    AT_abstract_origin=690,
    AT_start_scope=710,
    AT_stride_size=742,
    AT_upper_bound_ref=754,
    AT_upper_bound_data2=757,
    AT_upper_bound_data4=758,
    AT_upper_bound_data8=759,
    AT_virtual=776,
    DW_AT_HP_block_index=8192,
    DW_AT_HP_unmodifiable=8193,
    DW_AT_MIPS_fde=8193,
    DW_AT_MIPS_loop_begin=8194,
    DW_AT_MIPS_tail_loop_begin=8195,
    DW_AT_MIPS_epilog_begin=8196,
    DW_AT_MIPS_loop_unroll_factor=8197,
    DW_AT_MIPS_software_pipeline_depth=8198,
    DW_AT_MIPS_linkage_name=8199,
    DW_AT_MIPS_stride=8200,
    DW_AT_MIPS_abstract_name=8201,
    DW_AT_MIPS_clone_origin=8202,
    DW_AT_MIPS_has_inlines=8203,
    DW_AT_HP_actuals_stmt_list=8208,
    DW_AT_HP_proc_per_section=8209,
    DW_AT_HP_raw_data_ptr=8210,
    DW_AT_HP_pass_by_reference=8211,
    DW_AT_HP_opt_level=8212,
    DW_AT_HP_prof_version_id=8213,
    DW_AT_HP_opt_flags=8214,
    DW_AT_HP_cold_region_low_pc=8215,
    DW_AT_HP_cold_region_high_pc=8216,
    DW_AT_HP_all_variables_modifiable=8217,
    DW_AT_HP_linkage_name=8218,
    DW_AT_HP_prof_flags=8219,
    DW_AT_sf_names=8449,
    DW_AT_src_info=8450,
    DW_AT_mac_info=8451,
    DW_AT_src_coords=8452,
    DW_AT_body_begin=8453,
    DW_AT_body_end=8454,
    DW_AT_GNU_vector=8455,
    DW_AT_VMS_rtnbeg_pd_address=8705,
    DW_AT_upc_threads_scaled=12816,
    DW_AT_PGI_lbase=14848,
    DW_AT_PGI_soffset=14849,
    DW_AT_PGI_lstride=14850,
    AT_sf_names=32774,
    AT_src_info=32790,
    AT_mac_info=32806,
    AT_src_coords=32822,
    AT_body_begin=32833,
    AT_body_end=32849
} dwarf_attribute;

typedef enum dwarf_form {
    DW_FORM_addr=1,
    FORM_ADDR=1,
    FORM_REF=2,
    DW_FORM_block2=3,
    FORM_BLOCK2=3,
    DW_FORM_block4=4,
    FORM_BLOCK4=4,
    DW_FORM_data2=5,
    FORM_DATA2=5,
    DW_FORM_data4=6,
    FORM_DATA4=6,
    DW_FORM_data8=7,
    FORM_DATA8=7,
    DW_FORM_string=8,
    FORM_STRING=8,
    DW_FORM_block=9,
    DW_FORM_block1=10,
    DW_FORM_data1=11,
    DW_FORM_flag=12,
    DW_FORM_sdata=13,
    DW_FORM_strp=14,
    DW_FORM_udata=15,
    DW_FORM_ref_addr=16,
    DW_FORM_ref1=17,
    DW_FORM_ref2=18,
    DW_FORM_ref4=19,
    DW_FORM_ref8=20,
    DW_FORM_ref_udata=21,
    DW_FORM_indirect=22
} dwarf_form;

struct attr_abbrev {
    enum dwarf_attribute name;
    enum dwarf_form form;
};

struct abbrev_info {
    uint number;
    enum dwarf_tag tag;
    int has_children;
    uint num_attrs;
    struct attr_abbrev *attrs;
    struct abbrev_info *next;
};

typedef struct adjusted_section adjusted_section, *Padjusted_section;

struct adjusted_section {
    asection *section;
    bfd_vma adj_vma;
};

typedef struct arange arange, *Parange;

struct arange {
    struct arange *next;
    bfd_vma low;
    bfd_vma high;
};

typedef struct attribute attribute, *Pattribute;

struct attribute {
    enum dwarf_attribute name;
    enum dwarf_form form;
    union anon_union_8_4_59f785e6_for_u u;
};

typedef struct comp_unit comp_unit, *Pcomp_unit;

typedef struct line_info_table line_info_table, *Pline_info_table;

typedef struct funcinfo funcinfo, *Pfuncinfo;

typedef struct varinfo varinfo, *Pvarinfo;

typedef struct dwarf2_debug dwarf2_debug, *Pdwarf2_debug;

typedef struct fileinfo fileinfo, *Pfileinfo;

typedef struct line_info line_info, *Pline_info;

typedef struct info_hash_table info_hash_table, *Pinfo_hash_table;

struct comp_unit {
    struct comp_unit *next_unit;
    struct comp_unit *prev_unit;
    struct bfd *abfd;
    struct arange arange;
    char *name;
    struct abbrev_info **abbrevs;
    int error;
    char *comp_dir;
    int stmtlist;
    bfd_byte *info_ptr_unit;
    ulong line_offset;
    bfd_byte *first_child_die_ptr;
    bfd_byte *end_ptr;
    struct line_info_table *line_table;
    struct funcinfo *function_table;
    struct varinfo *variable_table;
    struct dwarf2_debug *stash;
    int version;
    uchar addr_size;
    uchar offset_size;
    bfd_vma base_address;
    bfd_boolean cached;
};

struct info_hash_table {
    struct bfd_hash_table base;
};

struct fileinfo {
    char *name;
    uint dir;
    uint time;
    uint size;
};

struct funcinfo {
    struct funcinfo *prev_func;
    struct funcinfo *caller_func;
    char *caller_file;
    int caller_line;
    char *file;
    int line;
    int tag;
    char *name;
    struct arange arange;
    asection *sec;
};

struct varinfo {
    struct varinfo *prev_var;
    char *file;
    int line;
    int tag;
    char *name;
    bfd_vma addr;
    asection *sec;
    uint stack:1;
};

struct dwarf2_debug {
    struct comp_unit *all_comp_units;
    struct comp_unit *last_comp_unit;
    bfd_byte *info_ptr;
    bfd_byte *info_ptr_end;
    struct bfd *bfd;
    asection *sec;
    bfd_byte *sec_info_ptr;
    bfd_byte *info_ptr_memory;
    asymbol **syms;
    bfd_byte *dwarf_abbrev_buffer;
    bfd_size_type dwarf_abbrev_size;
    bfd_byte *dwarf_line_buffer;
    bfd_size_type dwarf_line_size;
    bfd_byte *dwarf_str_buffer;
    bfd_size_type dwarf_str_size;
    bfd_byte *dwarf_ranges_buffer;
    bfd_size_type dwarf_ranges_size;
    struct funcinfo *inliner_chain;
    uint adjusted_section_count;
    struct adjusted_section *adjusted_sections;
    int info_hash_count;
    struct info_hash_table *funcinfo_hash_table;
    struct info_hash_table *varinfo_hash_table;
    struct comp_unit *hash_units_head;
    int info_hash_status;
};

struct line_info_table {
    struct bfd *abfd;
    uint num_files;
    uint num_dirs;
    char *comp_dir;
    char **dirs;
    struct fileinfo *files;
    struct line_info *last_line;
    struct line_info *lcl_head;
};

struct line_info {
    struct line_info *prev_line;
    bfd_vma address;
    char *filename;
    uint line;
    uint column;
    int end_sequence;
};

typedef struct info_hash_entry info_hash_entry, *Pinfo_hash_entry;

typedef struct info_list_node info_list_node, *Pinfo_list_node;

struct info_hash_entry {
    struct bfd_hash_entry root;
    struct info_list_node *head;
};

struct info_list_node {
    struct info_list_node *next;
    void *info;
};

typedef struct line_head line_head, *Pline_head;

struct line_head {
    bfd_vma total_length;
    ushort version;
    bfd_vma prologue_length;
    uchar minimum_instruction_length;
    uchar default_is_stmt;
    int line_base;
    uchar line_range;
    uchar opcode_base;
    uchar *standard_opcode_lengths;
};

typedef enum dwarf_call_frame_info {
    DW_CFA_nop=0,
    DW_CFA_set_loc=1,
    DW_CFA_advance_loc1=2,
    DW_CFA_advance_loc2=3,
    DW_CFA_advance_loc4=4,
    DW_CFA_offset_extended=5,
    DW_CFA_restore_extended=6,
    DW_CFA_undefined=7,
    DW_CFA_same_value=8,
    DW_CFA_register=9,
    DW_CFA_remember_state=10,
    DW_CFA_restore_state=11,
    DW_CFA_def_cfa=12,
    DW_CFA_def_cfa_register=13,
    DW_CFA_def_cfa_offset=14,
    DW_CFA_def_cfa_expression=15,
    DW_CFA_expression=16,
    DW_CFA_offset_extended_sf=17,
    DW_CFA_def_cfa_sf=18,
    DW_CFA_def_cfa_offset_sf=19,
    DW_CFA_val_offset=20,
    DW_CFA_val_offset_sf=21,
    DW_CFA_val_expression=22,
    DW_CFA_MIPS_advance_loc8=29,
    DW_CFA_GNU_window_save=45,
    DW_CFA_GNU_args_size=46,
    DW_CFA_GNU_negative_offset_extended=47,
    DW_CFA_advance_loc=64,
    DW_CFA_offset=128,
    DW_CFA_restore=192
} dwarf_call_frame_info;

typedef enum dwarf_line_number_ops {
    DW_LNS_extended_op=0,
    DW_LNS_copy=1,
    DW_LNS_advance_pc=2,
    DW_LNS_advance_line=3,
    DW_LNS_set_file=4,
    DW_LNS_set_column=5,
    DW_LNS_negate_stmt=6,
    DW_LNS_set_basic_block=7,
    DW_LNS_const_add_pc=8,
    DW_LNS_fixed_advance_pc=9,
    DW_LNS_set_prologue_end=10,
    DW_LNS_set_epilogue_begin=11,
    DW_LNS_set_isa=12
} dwarf_line_number_ops;

typedef enum dwarf_line_number_x_ops {
    DW_LNE_end_sequence=1,
    DW_LNE_set_address=2,
    DW_LNE_define_file=3,
    DW_LNE_HP_negate_is_UV_update=17,
    DW_LNE_HP_push_context=18,
    DW_LNE_HP_pop_context=19,
    DW_LNE_HP_set_file_line_column=20,
    DW_LNE_HP_set_routine_name=21,
    DW_LNE_HP_set_sequence=22,
    DW_LNE_HP_negate_post_semantics=23,
    DW_LNE_HP_negate_function_exit=24,
    DW_LNE_HP_negate_front_end_logical=25,
    DW_LNE_HP_define_proc=32
} dwarf_line_number_x_ops;

typedef enum dwarf_location_atom {
    DW_OP_addr=3,
    DW_OP_deref=6,
    DW_OP_const1u=8,
    DW_OP_const1s=9,
    DW_OP_const2u=10,
    DW_OP_const2s=11,
    DW_OP_const4u=12,
    DW_OP_const4s=13,
    DW_OP_const8u=14,
    DW_OP_const8s=15,
    DW_OP_constu=16,
    DW_OP_consts=17,
    DW_OP_dup=18,
    DW_OP_drop=19,
    DW_OP_over=20,
    DW_OP_pick=21,
    DW_OP_swap=22,
    DW_OP_rot=23,
    DW_OP_xderef=24,
    DW_OP_abs=25,
    DW_OP_and=26,
    DW_OP_div=27,
    DW_OP_minus=28,
    DW_OP_mod=29,
    DW_OP_mul=30,
    DW_OP_neg=31,
    DW_OP_not=32,
    DW_OP_or=33,
    DW_OP_plus=34,
    DW_OP_plus_uconst=35,
    DW_OP_shl=36,
    DW_OP_shr=37,
    DW_OP_shra=38,
    DW_OP_xor=39,
    DW_OP_bra=40,
    DW_OP_eq=41,
    DW_OP_ge=42,
    DW_OP_gt=43,
    DW_OP_le=44,
    DW_OP_lt=45,
    DW_OP_ne=46,
    DW_OP_skip=47,
    DW_OP_lit0=48,
    DW_OP_lit1=49,
    DW_OP_lit2=50,
    DW_OP_lit3=51,
    DW_OP_lit4=52,
    DW_OP_lit5=53,
    DW_OP_lit6=54,
    DW_OP_lit7=55,
    DW_OP_lit8=56,
    DW_OP_lit9=57,
    DW_OP_lit10=58,
    DW_OP_lit11=59,
    DW_OP_lit12=60,
    DW_OP_lit13=61,
    DW_OP_lit14=62,
    DW_OP_lit15=63,
    DW_OP_lit16=64,
    DW_OP_lit17=65,
    DW_OP_lit18=66,
    DW_OP_lit19=67,
    DW_OP_lit20=68,
    DW_OP_lit21=69,
    DW_OP_lit22=70,
    DW_OP_lit23=71,
    DW_OP_lit24=72,
    DW_OP_lit25=73,
    DW_OP_lit26=74,
    DW_OP_lit27=75,
    DW_OP_lit28=76,
    DW_OP_lit29=77,
    DW_OP_lit30=78,
    DW_OP_lit31=79,
    DW_OP_reg0=80,
    DW_OP_reg1=81,
    DW_OP_reg2=82,
    DW_OP_reg3=83,
    DW_OP_reg4=84,
    DW_OP_reg5=85,
    DW_OP_reg6=86,
    DW_OP_reg7=87,
    DW_OP_reg8=88,
    DW_OP_reg9=89,
    DW_OP_reg10=90,
    DW_OP_reg11=91,
    DW_OP_reg12=92,
    DW_OP_reg13=93,
    DW_OP_reg14=94,
    DW_OP_reg15=95,
    DW_OP_reg16=96,
    DW_OP_reg17=97,
    DW_OP_reg18=98,
    DW_OP_reg19=99,
    DW_OP_reg20=100,
    DW_OP_reg21=101,
    DW_OP_reg22=102,
    DW_OP_reg23=103,
    DW_OP_reg24=104,
    DW_OP_reg25=105,
    DW_OP_reg26=106,
    DW_OP_reg27=107,
    DW_OP_reg28=108,
    DW_OP_reg29=109,
    DW_OP_reg30=110,
    DW_OP_reg31=111,
    DW_OP_breg0=112,
    DW_OP_breg1=113,
    DW_OP_breg2=114,
    DW_OP_breg3=115,
    DW_OP_breg4=116,
    DW_OP_breg5=117,
    DW_OP_breg6=118,
    DW_OP_breg7=119,
    DW_OP_breg8=120,
    DW_OP_breg9=121,
    DW_OP_breg10=122,
    DW_OP_breg11=123,
    DW_OP_breg12=124,
    DW_OP_breg13=125,
    DW_OP_breg14=126,
    DW_OP_breg15=127,
    DW_OP_breg16=128,
    DW_OP_breg17=129,
    DW_OP_breg18=130,
    DW_OP_breg19=131,
    DW_OP_breg20=132,
    DW_OP_breg21=133,
    DW_OP_breg22=134,
    DW_OP_breg23=135,
    DW_OP_breg24=136,
    DW_OP_breg25=137,
    DW_OP_breg26=138,
    DW_OP_breg27=139,
    DW_OP_breg28=140,
    DW_OP_breg29=141,
    DW_OP_breg30=142,
    DW_OP_breg31=143,
    DW_OP_regx=144,
    DW_OP_fbreg=145,
    DW_OP_bregx=146,
    DW_OP_piece=147,
    DW_OP_deref_size=148,
    DW_OP_xderef_size=149,
    DW_OP_nop=150,
    DW_OP_push_object_address=151,
    DW_OP_call2=152,
    DW_OP_call4=153,
    DW_OP_call_ref=154,
    DW_OP_form_tls_address=155,
    DW_OP_call_frame_cfa=156,
    DW_OP_bit_piece=157,
    DW_OP_GNU_push_tls_address=224,
    DW_OP_HP_unknown=224,
    DW_OP_HP_is_value=225,
    DW_OP_HP_fltconst4=226,
    DW_OP_HP_fltconst8=227,
    DW_OP_HP_mod_range=228,
    DW_OP_HP_unmod_range=229,
    DW_OP_HP_tls=230,
    DW_OP_GNU_uninit=240,
    DW_OP_GNU_encoded_addr=241,
    DW_OP_PGI_omp_thread_num=248
} dwarf_location_atom;

typedef enum dwarf_source_language {
    DW_LANG_C89=1,
    DW_LANG_C=2,
    DW_LANG_Ada83=3,
    DW_LANG_C_plus_plus=4,
    DW_LANG_Cobol74=5,
    DW_LANG_Cobol85=6,
    DW_LANG_Fortran77=7,
    DW_LANG_Fortran90=8,
    DW_LANG_Pascal83=9,
    DW_LANG_Modula2=10,
    DW_LANG_Java=11,
    DW_LANG_C99=12,
    DW_LANG_Ada95=13,
    DW_LANG_Fortran95=14,
    DW_LANG_PLI=15,
    DW_LANG_ObjC=16,
    DW_LANG_ObjC_plus_plus=17,
    DW_LANG_UPC=18,
    DW_LANG_D=19,
    DW_LANG_Mips_Assembler=32769,
    DW_LANG_Upc=34661
} dwarf_source_language;

typedef struct file_entry file_entry, *Pfile_entry;

struct file_entry {
    char *filename;
    uint dir;
};

typedef struct line_entry line_entry, *Pline_entry;

typedef struct dwarf2_line_info dwarf2_line_info, *Pdwarf2_line_info;

struct dwarf2_line_info {
    uint filenum;
    uint line;
    uint column;
    uint isa;
    uint flags;
};

struct line_entry {
    struct line_entry *next;
    symbolS *label;
    struct dwarf2_line_info loc;
};

typedef struct line_seg line_seg, *Pline_seg;

typedef struct line_subseg line_subseg, *Pline_subseg;

typedef int subsegT;

struct line_seg {
    struct line_seg *next;
    segT seg;
    struct line_subseg *head;
    symbolS *text_start;
    symbolS *text_end;
};

struct line_subseg {
    struct line_subseg *next;
    subsegT subseg;
    struct line_entry *head;
    struct line_entry **ptail;
};

typedef enum dwarf2_format {
    dwarf2_format_32bit=0,
    dwarf2_format_64bit=1,
    dwarf2_format_64bit_irix=2
} dwarf2_format;

typedef struct ecoff_debug_swap ecoff_debug_swap, *Pecoff_debug_swap;

typedef struct DNR DNR, *PDNR;

typedef struct pdr pdr, *Ppdr;

typedef struct pdr PDR;

typedef struct OPTR OPTR, *POPTR;

typedef struct TIR TIR, *PTIR;

typedef struct RNDXR RNDXR, *PRNDXR;

struct DNR {
    ulong rfd;
    ulong index;
};

struct RNDXR {
    uint rfd:12;
    uint index:20;
};

struct OPTR {
    uint ot:8;
    uint value:24;
    struct RNDXR rndx;
    ulong offset;
};

struct ecoff_debug_swap {
    int sym_magic;
    bfd_size_type debug_align;
    bfd_size_type external_hdr_size;
    bfd_size_type external_dnr_size;
    bfd_size_type external_pdr_size;
    bfd_size_type external_sym_size;
    bfd_size_type external_opt_size;
    bfd_size_type external_fdr_size;
    bfd_size_type external_rfd_size;
    bfd_size_type external_ext_size;
    void (*swap_hdr_in)(struct bfd *, void *, struct HDRR *);
    void (*swap_dnr_in)(struct bfd *, void *, struct DNR *);
    void (*swap_pdr_in)(struct bfd *, void *, PDR *);
    void (*swap_sym_in)(struct bfd *, void *, struct SYMR *);
    void (*swap_opt_in)(struct bfd *, void *, struct OPTR *);
    void (*swap_fdr_in)(struct bfd *, void *, FDR *);
    void (*swap_rfd_in)(struct bfd *, void *, RFDT *);
    void (*swap_ext_in)(struct bfd *, void *, EXTR *);
    void (*swap_tir_in)(int, struct tir_ext *, struct TIR *);
    void (*swap_rndx_in)(int, struct rndx_ext *, struct RNDXR *);
    void (*swap_hdr_out)(struct bfd *, struct HDRR *, void *);
    void (*swap_dnr_out)(struct bfd *, struct DNR *, void *);
    void (*swap_pdr_out)(struct bfd *, PDR *, void *);
    void (*swap_sym_out)(struct bfd *, struct SYMR *, void *);
    void (*swap_opt_out)(struct bfd *, struct OPTR *, void *);
    void (*swap_fdr_out)(struct bfd *, FDR *, void *);
    void (*swap_rfd_out)(struct bfd *, RFDT *, void *);
    void (*swap_ext_out)(struct bfd *, EXTR *, void *);
    void (*swap_tir_out)(int, struct TIR *, struct tir_ext *);
    void (*swap_rndx_out)(int, struct RNDXR *, struct rndx_ext *);
    bfd_boolean (*read_debug_info)(struct bfd *, asection *, struct ecoff_debug_info *);
};

struct TIR {
    uint fBitfield:1;
    uint continued:1;
    uint bt:6;
    uint tq4:4;
    uint tq5:4;
    uint tq0:4;
    uint tq1:4;
    uint tq2:4;
    uint tq3:4;
};

struct pdr {
    bfd_vma adr;
    long isym;
    long iline;
    long regmask;
    long regoffset;
    long iopt;
    long fregmask;
    long fregoffset;
    long frameoffset;
    short framereg;
    short pcreg;
    long lnLow;
    long lnHigh;
    bfd_vma cbLineOffset;
    uint gp_prologue:8;
    uint gp_used:1;
    uint reg_frame:1;
    uint prof:1;
    uint reserved:13;
    uint localoff:8;
};

typedef struct frame_data frame_data, *Pframe_data;

typedef enum frame_state {
    state_idle=0,
    state_saw_size=1,
    state_saw_cie_offset=2,
    state_saw_pc_begin=3,
    state_seeing_aug_size=4,
    state_skipping_aug=5,
    state_wait_loc4=6,
    state_saw_loc4=7,
    state_error=8
} frame_state;

typedef struct cie_info cie_info, *Pcie_info;

struct cie_info {
    uint code_alignment;
    int z_augmentation;
};

struct frame_data {
    enum frame_state state;
    int cie_info_ok;
    struct cie_info cie_info;
    symbolS *size_end_sym;
    fragS *loc4_frag;
    int loc4_fix;
    int aug_size;
    int aug_shift;
};

typedef union anon_union_4_2_43ac7cb1_for_group anon_union_4_2_43ac7cb1_for_group, *Panon_union_4_2_43ac7cb1_for_group;

union anon_union_4_2_43ac7cb1_for_group {
    char *name;
    struct bfd_symbol *id;
};

typedef union anon_union_4_3_20489be5_for_u anon_union_4_3_20489be5_for_u, *Panon_union_4_3_20489be5_for_u;

typedef struct cie cie, *Pcie;

typedef struct eh_cie_fde eh_cie_fde, *Peh_cie_fde;

typedef union anon_union_4_3_9fb3e409_for_personality anon_union_4_3_9fb3e409_for_personality, *Panon_union_4_3_9fb3e409_for_personality;

typedef union anon_union_8_2_43a78e69_for_u anon_union_8_2_43a78e69_for_u, *Panon_union_8_2_43a78e69_for_u;

typedef struct anon_struct_8_2_25c831dd_for_fde anon_struct_8_2_25c831dd_for_fde, *Panon_struct_8_2_25c831dd_for_fde;

typedef struct anon_struct_8_6_81834d1f_for_cie anon_struct_8_6_81834d1f_for_cie, *Panon_struct_8_6_81834d1f_for_cie;

struct anon_struct_8_2_25c831dd_for_fde {
    struct eh_cie_fde *cie_inf;
    struct eh_cie_fde *next_for_section;
};

union anon_union_4_3_20489be5_for_u {
    struct cie *full_cie;
    struct eh_cie_fde *merged_with;
    asection *sec;
};

struct anon_struct_8_6_81834d1f_for_cie {
    union anon_union_4_3_20489be5_for_u u;
    uint gc_mark:1;
    uint make_lsda_relative:1;
    uint per_encoding_relative:1;
    uint add_fde_encoding:1;
    uint merged:1;
};

union anon_union_8_2_43a78e69_for_u {
    struct anon_struct_8_2_25c831dd_for_fde fde;
    struct anon_struct_8_6_81834d1f_for_cie cie;
};

struct eh_cie_fde {
    union anon_union_8_2_43a78e69_for_u u;
    uint reloc_index;
    uint size;
    uint offset;
    uint new_offset;
    uint fde_encoding:8;
    uint lsda_encoding:8;
    uint lsda_offset:8;
    uint cie:1;
    uint removed:1;
    uint add_augmentation_size:1;
    uint make_relative:1;
    uint pad1:4;
    uint *set_loc;
};

union anon_union_4_3_9fb3e409_for_personality {
    struct elf_link_hash_entry *h;
    bfd_vma val;
    uint reloc_index;
};

struct cie {
    uint length;
    uint hash;
    uchar version;
    uchar local_personality;
    char augmentation[20];
    bfd_vma code_align;
    bfd_signed_vma data_align;
    bfd_vma ra_column;
    bfd_vma augmentation_size;
    union anon_union_4_3_9fb3e409_for_personality personality;
    asection *output_sec;
    struct eh_cie_fde *cie_inf;
    uchar per_encoding;
    uchar lsda_encoding;
    uchar fde_encoding;
    uchar initial_insn_length;
    uchar can_make_lsda_relative;
    uchar initial_instructions[50];
};

typedef union anon_union_4_3_b90ae321_for_tc_data anon_union_4_3_b90ae321_for_tc_data, *Panon_union_4_3_b90ae321_for_tc_data;

union anon_union_4_3_b90ae321_for_tc_data {
    uint hppa_arg_reloc;
    void *mips_extr;
    void *any;
};

typedef enum action_discarded {
    COMPLAIN=1,
    PRETEND=2
} action_discarded;

typedef struct bfd_elf_section_data bfd_elf_section_data, *Pbfd_elf_section_data;

typedef struct elf_internal_rela elf_internal_rela, *Pelf_internal_rela;

typedef struct elf_internal_rela Elf_Internal_Rela;

struct bfd_elf_section_data {
    Elf_Internal_Shdr this_hdr;
    Elf_Internal_Shdr rel_hdr;
    Elf_Internal_Shdr *rel_hdr2;
    uint rel_count;
    uint rel_count2;
    int this_idx;
    int rel_idx;
    int rel_idx2;
    int dynindx;
    asection *linked_to;
    struct elf_link_hash_entry **rel_hashes;
    Elf_Internal_Rela *relocs;
    void *local_dynrel;
    asection *sreloc;
    union anon_union_4_2_43ac7cb1_for_group group;
    asection *sec_group;
    asection *next_in_group;
    struct eh_cie_fde *fde_list;
    void *sec_info;
};

struct elf_internal_rela {
    bfd_vma r_offset;
    bfd_vma r_info;
    bfd_vma r_addend;
};

typedef struct bfd_elf_special_section bfd_elf_special_section, *Pbfd_elf_special_section;

struct bfd_elf_special_section {
    char *prefix;
    int prefix_length;
    int suffix_length;
    int type;
    int attr;
};

typedef struct eh_frame_array_ent eh_frame_array_ent, *Peh_frame_array_ent;

struct eh_frame_array_ent {
    bfd_vma initial_loc;
    bfd_vma fde;
};

typedef struct eh_frame_hdr_info eh_frame_hdr_info, *Peh_frame_hdr_info;

struct eh_frame_hdr_info {
    struct htab *cies;
    asection *hdr_sec;
    uint fde_count;
    uint array_count;
    struct eh_frame_array_ent *array;
    bfd_boolean merge_cies;
    bfd_boolean parsed_eh_frames;
    bfd_boolean table;
};

typedef struct eh_frame_sec_info eh_frame_sec_info, *Peh_frame_sec_info;

struct eh_frame_sec_info {
    uint count;
    struct cie *cies;
    struct eh_cie_fde entry[1];
};

typedef struct elf_assign_sym_version_info elf_assign_sym_version_info, *Pelf_assign_sym_version_info;

struct elf_assign_sym_version_info {
    struct bfd *output_bfd;
    struct bfd_link_info *info;
    struct bfd_elf_version_tree *verdefs;
    bfd_boolean failed;
};

typedef struct elf_backend_data elf_backend_data, *Pelf_backend_data;

typedef struct elf_symbol_type elf_symbol_type, *Pelf_symbol_type;

typedef struct elf_internal_sym elf_internal_sym, *Pelf_internal_sym;

typedef struct elf_internal_sym Elf_Internal_Sym;

typedef asection * (*elf_gc_mark_hook_fn)(asection *, struct bfd_link_info *, Elf_Internal_Rela *, struct elf_link_hash_entry *, Elf_Internal_Sym *);

typedef struct elf_internal_note elf_internal_note, *Pelf_internal_note;

typedef struct elf_internal_note Elf_Internal_Note;

typedef enum elf_reloc_type_class {
    reloc_class_normal=0,
    reloc_class_relative=1,
    reloc_class_plt=2,
    reloc_class_copy=3
} elf_reloc_type_class;

typedef struct elf_reloc_cookie elf_reloc_cookie, *Pelf_reloc_cookie;

typedef enum irix_compat_t {
    ict_none=0,
    ict_irix5=1,
    ict_irix6=2
} irix_compat_t;

typedef struct elf_size_info elf_size_info, *Pelf_size_info;

typedef struct elf_internal_dyn elf_internal_dyn, *Pelf_internal_dyn;

typedef struct elf_internal_dyn Elf_Internal_Dyn;

typedef union anon_union_4_2_f9000a74_for_d_un anon_union_4_2_f9000a74_for_d_un, *Panon_union_4_2_f9000a74_for_d_un;

struct elf_size_info {
    uchar sizeof_ehdr;
    uchar sizeof_phdr;
    uchar sizeof_shdr;
    uchar sizeof_rel;
    uchar sizeof_rela;
    uchar sizeof_sym;
    uchar sizeof_dyn;
    uchar sizeof_note;
    uchar sizeof_hash_entry;
    uchar int_rels_per_ext_rel;
    uchar arch_size;
    uchar log_file_align;
    uchar elfclass;
    uchar ev_current;
    int (*write_out_phdrs)(struct bfd *, Elf_Internal_Phdr *, uint);
    bfd_boolean (*write_shdrs_and_ehdr)(struct bfd *);
    bfd_boolean (*checksum_contents)(struct bfd *, void (*)(void *, size_t, void *), void *);
    void (*write_relocs)(struct bfd *, asection *, void *);
    bfd_boolean (*swap_symbol_in)(struct bfd *, void *, void *, Elf_Internal_Sym *);
    void (*swap_symbol_out)(struct bfd *, Elf_Internal_Sym *, void *, void *);
    bfd_boolean (*slurp_reloc_table)(struct bfd *, asection *, asymbol **, bfd_boolean);
    long (*slurp_symbol_table)(struct bfd *, asymbol **, bfd_boolean);
    void (*swap_dyn_in)(struct bfd *, void *, Elf_Internal_Dyn *);
    void (*swap_dyn_out)(struct bfd *, Elf_Internal_Dyn *, void *);
    void (*swap_reloc_in)(struct bfd *, bfd_byte *, Elf_Internal_Rela *);
    void (*swap_reloc_out)(struct bfd *, Elf_Internal_Rela *, bfd_byte *);
    void (*swap_reloca_in)(struct bfd *, bfd_byte *, Elf_Internal_Rela *);
    void (*swap_reloca_out)(struct bfd *, Elf_Internal_Rela *, bfd_byte *);
};

struct elf_internal_sym {
    bfd_vma st_value;
    bfd_vma st_size;
    ulong st_name;
    uchar st_info;
    uchar st_other;
    uint st_shndx;
};

struct elf_symbol_type {
    asymbol symbol;
    Elf_Internal_Sym internal_elf_sym;
    union anon_union_4_3_b90ae321_for_tc_data tc_data;
    ushort version;
};

struct elf_backend_data {
    enum bfd_architecture arch;
    int elf_machine_code;
    int elf_osabi;
    bfd_vma maxpagesize;
    bfd_vma minpagesize;
    bfd_vma commonpagesize;
    flagword dynamic_sec_flags;
    void (*elf_info_to_howto)(struct bfd *, arelent *, Elf_Internal_Rela *);
    void (*elf_info_to_howto_rel)(struct bfd *, arelent *, Elf_Internal_Rela *);
    bfd_boolean (*elf_backend_sym_is_global)(struct bfd *, asymbol *);
    bfd_boolean (*elf_backend_object_p)(struct bfd *);
    void (*elf_backend_symbol_processing)(struct bfd *, asymbol *);
    bfd_boolean (*elf_backend_symbol_table_processing)(struct bfd *, struct elf_symbol_type *, uint);
    int (*elf_backend_get_symbol_type)(Elf_Internal_Sym *, int);
    elf_link_hash_entry * (*elf_backend_archive_symbol_lookup)(struct bfd *, struct bfd_link_info *, char *);
    bfd_boolean (*elf_backend_name_local_section_symbols)(struct bfd *);
    bfd_boolean (*elf_backend_section_processing)(struct bfd *, Elf_Internal_Shdr *);
    bfd_boolean (*elf_backend_section_from_shdr)(struct bfd *, Elf_Internal_Shdr *, char *, int);
    bfd_boolean (*elf_backend_section_flags)(flagword *, Elf_Internal_Shdr *);
    bfd_elf_special_section * (*get_sec_type_attr)(struct bfd *, asection *);
    bfd_boolean (*elf_backend_section_from_phdr)(struct bfd *, Elf_Internal_Phdr *, int, char *);
    bfd_boolean (*elf_backend_fake_sections)(struct bfd *, Elf_Internal_Shdr *, asection *);
    bfd_boolean (*elf_backend_section_from_bfd_section)(struct bfd *, asection *, int *);
    bfd_boolean (*elf_add_symbol_hook)(struct bfd *, struct bfd_link_info *, Elf_Internal_Sym *, char **, flagword *, asection **, bfd_vma *);
    bfd_boolean (*elf_backend_link_output_symbol_hook)(struct bfd_link_info *, char *, Elf_Internal_Sym *, asection *, struct elf_link_hash_entry *);
    bfd_boolean (*elf_backend_create_dynamic_sections)(struct bfd *, struct bfd_link_info *);
    bfd_boolean (*elf_backend_omit_section_dynsym)(struct bfd *, struct bfd_link_info *, asection *);
    bfd_boolean (*relocs_compatible)(struct bfd_target *, struct bfd_target *);
    bfd_boolean (*check_relocs)(struct bfd *, struct bfd_link_info *, asection *, Elf_Internal_Rela *);
    bfd_boolean (*check_directives)(struct bfd *, struct bfd_link_info *);
    bfd_boolean (*as_needed_cleanup)(struct bfd *, struct bfd_link_info *);
    bfd_boolean (*elf_backend_adjust_dynamic_symbol)(struct bfd_link_info *, struct elf_link_hash_entry *);
    bfd_boolean (*elf_backend_always_size_sections)(struct bfd *, struct bfd_link_info *);
    bfd_boolean (*elf_backend_size_dynamic_sections)(struct bfd *, struct bfd_link_info *);
    void (*elf_backend_init_index_section)(struct bfd *, struct bfd_link_info *);
    int (*elf_backend_relocate_section)(struct bfd *, struct bfd_link_info *, struct bfd *, asection *, bfd_byte *, Elf_Internal_Rela *, Elf_Internal_Sym *, asection **);
    bfd_boolean (*elf_backend_finish_dynamic_symbol)(struct bfd *, struct bfd_link_info *, struct elf_link_hash_entry *, Elf_Internal_Sym *);
    bfd_boolean (*elf_backend_finish_dynamic_sections)(struct bfd *, struct bfd_link_info *);
    void (*elf_backend_begin_write_processing)(struct bfd *, struct bfd_link_info *);
    void (*elf_backend_final_write_processing)(struct bfd *, bfd_boolean);
    int (*elf_backend_additional_program_headers)(struct bfd *, struct bfd_link_info *);
    bfd_boolean (*elf_backend_modify_segment_map)(struct bfd *, struct bfd_link_info *);
    bfd_boolean (*elf_backend_modify_program_headers)(struct bfd *, struct bfd_link_info *);
    void (*gc_keep)(struct bfd_link_info *);
    bfd_boolean (*gc_mark_dynamic_ref)(struct elf_link_hash_entry *, void *);
    elf_gc_mark_hook_fn gc_mark_hook;
    bfd_boolean (*gc_mark_extra_sections)(struct bfd_link_info *, elf_gc_mark_hook_fn);
    bfd_boolean (*gc_sweep_hook)(struct bfd *, struct bfd_link_info *, asection *, Elf_Internal_Rela *);
    void (*elf_backend_post_process_headers)(struct bfd *, struct bfd_link_info *);
    char * (*elf_backend_print_symbol_all)(struct bfd *, void *, asymbol *);
    bfd_boolean (*elf_backend_output_arch_local_syms)(struct bfd *, struct bfd_link_info *, void *, bfd_boolean (*)(void *, char *, Elf_Internal_Sym *, asection *, struct elf_link_hash_entry *));
    bfd_boolean (*elf_backend_output_arch_syms)(struct bfd *, struct bfd_link_info *, void *, bfd_boolean (*)(void *, char *, Elf_Internal_Sym *, asection *, struct elf_link_hash_entry *));
    void (*elf_backend_copy_indirect_symbol)(struct bfd_link_info *, struct elf_link_hash_entry *, struct elf_link_hash_entry *);
    void (*elf_backend_hide_symbol)(struct bfd_link_info *, struct elf_link_hash_entry *, bfd_boolean);
    bfd_boolean (*elf_backend_fixup_symbol)(struct bfd_link_info *, struct elf_link_hash_entry *);
    void (*elf_backend_merge_symbol_attribute)(struct elf_link_hash_entry *, Elf_Internal_Sym *, bfd_boolean, bfd_boolean);
    char * (*elf_backend_get_target_dtag)(bfd_vma);
    bfd_boolean (*elf_backend_ignore_undef_symbol)(struct elf_link_hash_entry *);
    bfd_boolean (*elf_backend_emit_relocs)(struct bfd *, asection *, Elf_Internal_Shdr *, Elf_Internal_Rela *, struct elf_link_hash_entry **);
    uint (*elf_backend_count_relocs)(asection *, Elf_Internal_Rela *);
    bfd_boolean (*elf_backend_grok_prstatus)(struct bfd *, Elf_Internal_Note *);
    bfd_boolean (*elf_backend_grok_psinfo)(struct bfd *, Elf_Internal_Note *);
    char * (*elf_backend_write_core_note)(struct bfd *, char *, int *, int, ...);
    elf_reloc_type_class (*elf_backend_reloc_type_class)(Elf_Internal_Rela *);
    bfd_boolean (*elf_backend_discard_info)(struct bfd *, struct elf_reloc_cookie *, struct bfd_link_info *);
    bfd_boolean (*elf_backend_ignore_discarded_relocs)(asection *);
    uint (*action_discarded)(asection *);
    uint (*elf_backend_eh_frame_address_size)(struct bfd *, asection *);
    bfd_boolean (*elf_backend_can_make_relative_eh_frame)(struct bfd *, struct bfd_link_info *, asection *);
    bfd_boolean (*elf_backend_can_make_lsda_relative_eh_frame)(struct bfd *, struct bfd_link_info *, asection *);
    bfd_byte (*elf_backend_encode_eh_address)(struct bfd *, struct bfd_link_info *, asection *, bfd_vma, asection *, bfd_vma, bfd_vma *);
    bfd_boolean (*elf_backend_write_section)(struct bfd *, struct bfd_link_info *, asection *, bfd_byte *);
    irix_compat_t (*elf_backend_mips_irix_compat)(struct bfd *);
    reloc_howto_struct * (*elf_backend_mips_rtype_to_howto)(uint, bfd_boolean);
    struct ecoff_debug_swap *elf_backend_ecoff_debug_swap;
    bfd * (*elf_backend_bfd_from_remote_memory)(struct bfd *, bfd_vma, bfd_vma *, int (*)(bfd_vma, bfd_byte *, int));
    bfd_vma (*plt_sym_val)(bfd_vma, asection *, arelent *);
    bfd_boolean (*common_definition)(Elf_Internal_Sym *);
    uint (*common_section_index)(asection *);
    asection * (*common_section)(asection *);
    bfd_boolean (*merge_symbol)(struct bfd_link_info *, struct elf_link_hash_entry **, struct elf_link_hash_entry *, Elf_Internal_Sym *, asection **, bfd_vma *, uint *, bfd_boolean *, bfd_boolean *, bfd_boolean *, bfd_boolean *, bfd_boolean *, bfd_boolean *, bfd_boolean *, bfd_boolean *, struct bfd *, asection **, bfd_boolean *, bfd_boolean *, bfd_boolean *, bfd_boolean *, struct bfd *, asection **);
    bfd_boolean (*elf_hash_symbol)(struct elf_link_hash_entry *);
    bfd_boolean (*is_function_type)(uint);
    bfd_error_handler_type link_order_error_handler;
    char *relplt_name;
    int elf_machine_alt1;
    int elf_machine_alt2;
    struct elf_size_info *s;
    struct bfd_elf_special_section *special_sections;
    bfd_vma got_header_size;
    char *obj_attrs_vendor;
    char *obj_attrs_section;
    int (*obj_attrs_arg_type)(int);
    uint obj_attrs_section_type;
    uint collect:1;
    uint type_change_ok:1;
    uint may_use_rel_p:1;
    uint may_use_rela_p:1;
    uint default_use_rela_p:1;
    uint rela_plts_and_copies_p:1;
    uint rela_normal:1;
    uint sign_extend_vma:1;
    uint want_got_plt:1;
    uint plt_readonly:1;
    uint want_plt_sym:1;
    uint plt_not_loaded:1;
    uint plt_alignment:4;
    uint can_gc_sections:1;
    uint can_refcount:1;
    uint want_got_sym:1;
    uint want_dynbss:1;
    uint want_p_paddr_set_to_zero:1;
    uint default_execstack:1;
};

union anon_union_4_2_f9000a74_for_d_un {
    bfd_vma d_val;
    bfd_vma d_ptr;
};

struct elf_reloc_cookie {
    Elf_Internal_Rela *rels;
    Elf_Internal_Rela *rel;
    Elf_Internal_Rela *relend;
    Elf_Internal_Sym *locsyms;
    struct bfd *abfd;
    size_t locsymcount;
    size_t extsymoff;
    struct elf_link_hash_entry **sym_hashes;
    int r_sym_shift;
    bfd_boolean bad_symtab;
};

struct elf_internal_note {
    ulong namesz;
    ulong descsz;
    ulong type;
    char *namedata;
    char *descdata;
    bfd_vma descpos;
};

struct elf_internal_dyn {
    bfd_vma d_tag;
    union anon_union_4_2_f9000a74_for_d_un d_un;
};

typedef struct elf_find_verdep_info elf_find_verdep_info, *Pelf_find_verdep_info;

struct elf_find_verdep_info {
    struct bfd *output_bfd;
    struct bfd_link_info *info;
    uint vers;
    bfd_boolean failed;
};

typedef struct elf_info_failed elf_info_failed, *Pelf_info_failed;

struct elf_info_failed {
    bfd_boolean failed;
    struct bfd_link_info *info;
    struct bfd_elf_version_tree *verdefs;
};

typedef struct elf_link_hash_table elf_link_hash_table, *Pelf_link_hash_table;

typedef struct elf_link_local_dynamic_entry elf_link_local_dynamic_entry, *Pelf_link_local_dynamic_entry;

typedef struct elf_link_loaded_list elf_link_loaded_list, *Pelf_link_loaded_list;

struct elf_link_local_dynamic_entry {
    struct elf_link_local_dynamic_entry *next;
    struct bfd *input_bfd;
    long input_indx;
    long dynindx;
    Elf_Internal_Sym isym;
};

struct elf_link_hash_table {
    struct bfd_link_hash_table root;
    bfd_boolean dynamic_sections_created;
    bfd_boolean is_relocatable_executable;
    struct bfd *dynobj;
    union gotplt_union init_got_refcount;
    union gotplt_union init_plt_refcount;
    union gotplt_union init_got_offset;
    union gotplt_union init_plt_offset;
    bfd_size_type dynsymcount;
    struct elf_strtab_hash *dynstr;
    bfd_size_type bucketcount;
    struct bfd_link_needed_list *needed;
    asection *text_index_section;
    asection *data_index_section;
    struct elf_link_hash_entry *hgot;
    struct elf_link_hash_entry *hplt;
    void *merge_info;
    struct stab_info stab_info;
    struct eh_frame_hdr_info eh_info;
    struct elf_link_local_dynamic_entry *dynlocal;
    struct bfd_link_needed_list *runpath;
    asection *tls_sec;
    bfd_size_type tls_size;
    struct elf_link_loaded_list *loaded;
};

struct elf_link_loaded_list {
    struct elf_link_loaded_list *next;
    struct bfd *abfd;
};

typedef struct sym_sec_cache sym_sec_cache, *Psym_sec_cache;

struct sym_sec_cache {
    struct bfd *abfd;
    ulong indx[32];
    uint shndx[32];
};

typedef struct anon_struct_8_2_62ab84f1 anon_struct_8_2_62ab84f1, *Panon_struct_8_2_62ab84f1;

struct anon_struct_8_2_62ab84f1 {
    char *name;
    int len;
};



typedef union elf_internal_group elf_internal_group, *Pelf_internal_group;

typedef union elf_internal_group Elf_Internal_Group;

union elf_internal_group {
    Elf_Internal_Shdr *shdr;
    uint flags;
};

typedef union anon_union_4_2_7962af12_for_u anon_union_4_2_7962af12_for_u, *Panon_union_4_2_7962af12_for_u;

union anon_union_4_2_7962af12_for_u {
    bfd_vma offset;
    bfd_vma sym_mask;
};

typedef union anon_union_4_2_31a96317_for_u anon_union_4_2_31a96317_for_u, *Panon_union_4_2_31a96317_for_u;

typedef struct elf_symbuf_symbol elf_symbuf_symbol, *Pelf_symbuf_symbol;

union anon_union_4_2_31a96317_for_u {
    Elf_Internal_Sym *isym;
    struct elf_symbuf_symbol *ssym;
};

struct elf_symbuf_symbol {
    ulong st_name;
    uchar st_info;
    uchar st_other;
};

typedef struct alloc_got_off_arg alloc_got_off_arg, *Palloc_got_off_arg;

struct alloc_got_off_arg {
    bfd_vma gotoff;
    uint got_elt_size;
};

typedef struct collect_gnu_hash_codes collect_gnu_hash_codes, *Pcollect_gnu_hash_codes;

struct collect_gnu_hash_codes {
    struct bfd *output_bfd;
    struct elf_backend_data *bed;
    ulong nsyms;
    ulong maskbits;
    ulong *hashcodes;
    ulong *hashval;
    ulong *indx;
    ulong *counts;
    bfd_vma *bitmask;
    bfd_byte *contents;
    long min_dynindx;
    ulong bucketcount;
    ulong symindx;
    long local_indx;
    long shift1;
    long shift2;
    ulong mask;
    bfd_boolean error;
};

typedef struct elf_final_link_info elf_final_link_info, *Pelf_final_link_info;

typedef struct Elf_External_Sym_Shndx Elf_External_Sym_Shndx, *PElf_External_Sym_Shndx;

struct Elf_External_Sym_Shndx {
    uchar est_shndx[4];
};

struct elf_final_link_info {
    struct bfd_link_info *info;
    struct bfd *output_bfd;
    struct bfd_strtab_hash *symstrtab;
    asection *dynsym_sec;
    asection *hash_sec;
    asection *symver_sec;
    bfd_byte *contents;
    void *external_relocs;
    Elf_Internal_Rela *internal_relocs;
    bfd_byte *external_syms;
    struct Elf_External_Sym_Shndx *locsym_shndx;
    Elf_Internal_Sym *internal_syms;
    long *indices;
    asection **sections;
    bfd_byte *symbuf;
    struct Elf_External_Sym_Shndx *symshndxbuf;
    size_t symbuf_count;
    size_t symbuf_size;
    size_t shndxbuf_size;
};

typedef struct elf_gc_sweep_symbol_info elf_gc_sweep_symbol_info, *Pelf_gc_sweep_symbol_info;

struct elf_gc_sweep_symbol_info {
    struct bfd_link_info *info;
    void (*hide_symbol)(struct bfd_link_info *, struct elf_link_hash_entry *, bfd_boolean);
};

typedef struct elf_link_sort_rela elf_link_sort_rela, *Pelf_link_sort_rela;

struct elf_link_sort_rela {
    union anon_union_4_2_7962af12_for_u u;
    enum elf_reloc_type_class type;
    Elf_Internal_Rela rela[1];
};

typedef struct elf_outext_info elf_outext_info, *Pelf_outext_info;

struct elf_outext_info {
    bfd_boolean failed;
    bfd_boolean localsyms;
    struct elf_final_link_info *finfo;
};

typedef struct elf_symbol elf_symbol, *Pelf_symbol;

struct elf_symbol {
    union anon_union_4_2_31a96317_for_u u;
    char *name;
};

typedef struct elf_symbuf_head elf_symbuf_head, *Pelf_symbuf_head;

struct elf_symbuf_head {
    struct elf_symbuf_symbol *ssym;
    bfd_size_type count;
    uint st_shndx;
};

typedef bfd_boolean (*gc_sweep_hook_fn)(struct bfd *, struct bfd_link_info *, asection *, Elf_Internal_Rela *);

typedef struct hash_codes_info hash_codes_info, *Phash_codes_info;

struct hash_codes_info {
    ulong *hashcodes;
    bfd_boolean error;
};

typedef union anon_union_4_2_e3cc860a_for_tls_ldm_got anon_union_4_2_e3cc860a_for_tls_ldm_got, *Panon_union_4_2_e3cc860a_for_tls_ldm_got;

union anon_union_4_2_e3cc860a_for_tls_ldm_got {
    bfd_signed_vma refcount;
    bfd_vma offset;
};

typedef struct aeon_far_stub aeon_far_stub, *Paeon_far_stub;

typedef struct anon_struct_8_2_54f930c4 anon_struct_8_2_54f930c4, *Panon_struct_8_2_54f930c4;

struct anon_struct_8_2_54f930c4 {
    bfd_vma r_offset;
    int r_type;
};

struct aeon_far_stub {
    int size;
    bfd_byte *stub;
    int last_instr_bytes;
    struct anon_struct_8_2_54f930c4 relocs[4];
};

typedef struct aeon_reloc_map aeon_reloc_map, *Paeon_reloc_map;

struct aeon_reloc_map {
    bfd_reloc_code_real_type bfd_reloc_val;
    uint elf_reloc_val;
    uint insn_beg;
    uint bit_order_lsb:1;
    uint no_relax:1;
    uint mod;
};

typedef struct bin_isa bin_isa, *Pbin_isa;

typedef struct elf_aeon_link_hash_table elf_aeon_link_hash_table, *Pelf_aeon_link_hash_table;

typedef struct plt_type plt_type, *Pplt_type;

typedef struct plt_types plt_types, *Pplt_types;

struct plt_type {
    uint entry_size;
    bfd_byte *entry;
    void (*fixup_entry)(struct bfd *, bfd_byte *, bfd_vma, bfd_vma);
    uint lazy_offset;
    uint header_size;
    bfd_byte *header;
    void (*fixup_header)(struct bfd *, struct bfd_link_info *);
};

struct plt_types {
    struct plt_type *pic;
    struct plt_type *nonpic;
};

struct elf_aeon_link_hash_table {
    struct elf_link_hash_table elf;
    asection *sgot;
    asection *sgotplt;
    asection *srelagot;
    asection *splt;
    asection *srelaplt;
    asection *sdynbss;
    asection *srelabss;
    union anon_union_4_2_e3cc860a_for_tls_ldm_got tls_ldm_got;
    struct plt_type *plt_type;
    struct sym_sec_cache sym_sec;
};

struct bin_isa {
    struct aeon_isa *isa;
    struct decode_struct *decs;
    struct bin_eq_enc **beq_enc;
    struct bin_seq **seqs;
    struct bin_to_seq **to_seqs;
    struct aeon_reloc_map *reloc_map;
    uint reloc_map_size;
    struct reloc_howto_struct *reloc_howto;
    uint reloc_howto_size;
    bfd_reloc_status_type (*final_link_relocate)(struct reloc_howto_struct *, struct elf_link_hash_entry *, struct aeon_reloc_map *, struct bfd *, asection *, bfd_byte *, struct bfd *, Elf_Internal_Rela *, bfd_vma, struct bfd_link_info *);
    void (*gc_sweep_hook)(struct bfd *, asection *, ulong, struct elf_link_hash_entry *, ulong, bfd_signed_vma *, struct bfd_link_info *);
    bfd_boolean (*check_reloc)(struct bfd *, struct bfd_link_info *, asection *, ulong, ulong, struct elf_link_hash_entry *, asection *, struct elf_aeon_link_hash_table *);
    struct plt_types *plts;
    uint plt_abis;
    struct aeon_far_stub *far_stub;
    struct aeon_far_stub *far_stub_jump;
};

typedef struct elf_aeon_dyn_relocs elf_aeon_dyn_relocs, *Pelf_aeon_dyn_relocs;

struct elf_aeon_dyn_relocs {
    struct elf_aeon_dyn_relocs *next;
    asection *sec;
    bfd_size_type count;
};

typedef struct elf_aeon_link_hash_entry elf_aeon_link_hash_entry, *Pelf_aeon_link_hash_entry;

typedef struct elf_aeon_stubs_list elf_aeon_stubs_list, *Pelf_aeon_stubs_list;

struct elf_aeon_link_hash_entry {
    struct elf_link_hash_entry elf;
    uchar tls_type;
    struct elf_aeon_dyn_relocs *dyn_relocs;
    struct elf_aeon_stubs_list *stubs;
};

struct elf_aeon_stubs_list {
    struct elf_aeon_link_hash_entry *stub_sym_hash;
    bfd_vma stub_addr;
    asection *output_section;
    struct elf_aeon_stubs_list *next;
};

typedef struct elf_aeon_obj_tdata elf_aeon_obj_tdata, *Pelf_aeon_obj_tdata;

struct elf_aeon_obj_tdata {
    struct elf_obj_tdata root;
    char *local_got_tls_type;
    int n_hashes;
};

typedef struct elf_aeon_section_data elf_aeon_section_data, *Pelf_aeon_section_data;

typedef struct relax_info relax_info, *Prelax_info;

struct relax_info {
    Elf_Internal_Rela **aligns;
    Elf_Internal_Rela **diffs;
    Elf_Internal_Rela **orgs;
    htab_t expands;
};

struct elf_aeon_section_data {
    struct bfd_elf_section_data elf;
    struct relax_info ri;
};

typedef struct expr_symbol_line expr_symbol_line, *Pexpr_symbol_line;

struct expr_symbol_line {
    struct expr_symbol_line *next;
    symbolS *sym;
    char *file;
    uint line;
};

typedef enum expr_mode {
    expr_evaluate=0,
    expr_normal=1,
    expr_defer=2
} expr_mode;



typedef struct Elf32_External_Dyn Elf32_External_Dyn, *PElf32_External_Dyn;

struct Elf32_External_Dyn {
    uchar d_tag[4];
    union anon_union_4_2_f9000a74_for_d_un d_un;
};

typedef struct Elf32_External_Ehdr Elf32_External_Ehdr, *PElf32_External_Ehdr;

struct Elf32_External_Ehdr {
    uchar e_ident[16];
    uchar e_type[2];
    uchar e_machine[2];
    uchar e_version[4];
    uchar e_entry[4];
    uchar e_phoff[4];
    uchar e_shoff[4];
    uchar e_flags[4];
    uchar e_ehsize[2];
    uchar e_phentsize[2];
    uchar e_phnum[2];
    uchar e_shentsize[2];
    uchar e_shnum[2];
    uchar e_shstrndx[2];
};

typedef struct Elf32_External_Phdr Elf32_External_Phdr, *PElf32_External_Phdr;

struct Elf32_External_Phdr {
    uchar p_type[4];
    uchar p_offset[4];
    uchar p_vaddr[4];
    uchar p_paddr[4];
    uchar p_filesz[4];
    uchar p_memsz[4];
    uchar p_flags[4];
    uchar p_align[4];
};

typedef struct Elf32_External_Rel Elf32_External_Rel, *PElf32_External_Rel;

struct Elf32_External_Rel {
    uchar r_offset[4];
    uchar r_info[4];
};

typedef struct Elf32_External_Rela Elf32_External_Rela, *PElf32_External_Rela;

struct Elf32_External_Rela {
    uchar r_offset[4];
    uchar r_info[4];
    uchar r_addend[4];
};

typedef struct Elf32_External_Shdr Elf32_External_Shdr, *PElf32_External_Shdr;

struct Elf32_External_Shdr {
    uchar sh_name[4];
    uchar sh_type[4];
    uchar sh_flags[4];
    uchar sh_addr[4];
    uchar sh_offset[4];
    uchar sh_size[4];
    uchar sh_link[4];
    uchar sh_info[4];
    uchar sh_addralign[4];
    uchar sh_entsize[4];
};

typedef struct Elf32_External_Sym Elf32_External_Sym, *PElf32_External_Sym;

struct Elf32_External_Sym {
    uchar st_name[4];
    uchar st_value[4];
    uchar st_size[4];
    uchar st_info[1];
    uchar st_other[1];
    uchar st_shndx[2];
};

typedef struct Elf_External_Note Elf_External_Note, *PElf_External_Note;

struct Elf_External_Note {
    uchar namesz[4];
    uchar descsz[4];
    uchar type[4];
    char name[1];
};

typedef struct Elf_External_Verdaux Elf_External_Verdaux, *PElf_External_Verdaux;

struct Elf_External_Verdaux {
    uchar vda_name[4];
    uchar vda_next[4];
};

typedef struct Elf_External_Verdef Elf_External_Verdef, *PElf_External_Verdef;

struct Elf_External_Verdef {
    uchar vd_version[2];
    uchar vd_flags[2];
    uchar vd_ndx[2];
    uchar vd_cnt[2];
    uchar vd_hash[4];
    uchar vd_aux[4];
    uchar vd_next[4];
};

typedef struct Elf_External_Vernaux Elf_External_Vernaux, *PElf_External_Vernaux;

struct Elf_External_Vernaux {
    uchar vna_hash[4];
    uchar vna_flags[2];
    uchar vna_other[2];
    uchar vna_name[4];
    uchar vna_next[4];
};

typedef struct Elf_External_Verneed Elf_External_Verneed, *PElf_External_Verneed;

struct Elf_External_Verneed {
    uchar vn_version[2];
    uchar vn_cnt[2];
    uchar vn_file[4];
    uchar vn_aux[4];
    uchar vn_next[4];
};

typedef struct Elf_External_Versym Elf_External_Versym, *PElf_External_Versym;

struct Elf_External_Versym {
    uchar vs_vers[2];
};

typedef struct FLONUM_STRUCT FLONUM_STRUCT, *PFLONUM_STRUCT;

typedef ushort LITTLENUM_TYPE;

struct FLONUM_STRUCT {
    LITTLENUM_TYPE *low;
    LITTLENUM_TYPE *high;
    LITTLENUM_TYPE *leader;
    long exponent;
    char sign;
};

typedef struct FLONUM_STRUCT FLONUM_TYPE;

typedef struct generic_link_hash_entry generic_link_hash_entry, *Pgeneric_link_hash_entry;

struct generic_link_hash_entry {
    struct bfd_link_hash_entry root;
    bfd_boolean written;
    asymbol *sym;
};

typedef struct generic_link_hash_table generic_link_hash_table, *Pgeneric_link_hash_table;

struct generic_link_hash_table {
    struct bfd_link_hash_table root;
};

typedef struct generic_write_global_symbol_info generic_write_global_symbol_info, *Pgeneric_write_global_symbol_info;

struct generic_write_global_symbol_info {
    struct bfd_link_info *info;
    struct bfd *output_bfd;
    size_t *psymalloc;
};

typedef struct option option, *Poption;

struct option {
    char *name;
    int has_arg;
    int *flag;
    int val;
};

typedef struct hash_control hash_control, *Phash_control;

typedef struct hash_entry hash_entry, *Phash_entry;

typedef struct obstack obstack, *Pobstack;

typedef struct _obstack_chunk _obstack_chunk, *P_obstack_chunk;

struct obstack {
    long chunk_size;
    struct _obstack_chunk *chunk;
    char *object_base;
    char *next_free;
    char *chunk_limit;
    int temp;
    int alignment_mask;
    _obstack_chunk * (*chunkfun)(void *, long);
    void (*freefun)(void *, struct _obstack_chunk *);
    void *extra_arg;
    uint use_extra_arg:1;
    uint maybe_empty_object:1;
    uint alloc_failed:1;
};

struct hash_entry {
    struct hash_entry *next;
    char *string;
    ulong hash;
    void *data;
};

struct _obstack_chunk {
    char *limit;
    struct _obstack_chunk *prev;
    char contents[4];
};

struct hash_control {
    struct hash_entry **table;
    uint size;
    struct obstack memory;
};

typedef struct prime_ent prime_ent, *Pprime_ent;

struct prime_ent {
    hashval_t prime;
    hashval_t inv;
    hashval_t inv_m2;
    hashval_t shift;
};

typedef int (*htab_trav)(void **, void *);

typedef enum insert_option {
    NO_INSERT=0,
    INSERT=1
} insert_option;

typedef struct saved_file saved_file, *Psaved_file;

typedef void _IO_lock_t;

typedef longlong __quad_t;

typedef __quad_t __off64_t;

struct saved_file {
    FILE *f_in;
    char *file_name;
    int preprocess;
    char *app_save;
};

typedef struct input_save input_save, *Pinput_save;

typedef uint line_numberT;

typedef struct sb sb, *Psb;

typedef struct le le, *Ple;

struct sb {
    char *ptr;
    int len;
    int pot;
    struct le *item;
};

struct input_save {
    char *buffer_start;
    char *partial_where;
    int partial_size;
    char save_source[1];
    uint buffer_length;
    char *physical_input_file;
    char *logical_input_file;
    line_numberT physical_input_line;
    int logical_input_line;
    int sb_index;
    struct sb from_sb;
    int from_sb_is_expansion;
    struct input_save *next_saved_file;
    char *input_file_save;
    char *saved_position;
};

struct le {
    struct le *next;
    int size;
    char data[1];
};

typedef union anon_union_4_2_48746dff_for_l_addr anon_union_4_2_48746dff_for_l_addr, *Panon_union_4_2_48746dff_for_l_addr;

union anon_union_4_2_48746dff_for_l_addr {
    bfd_signed_vma l_symndx;
    bfd_signed_vma l_paddr;
};

typedef struct elf_internal_verdaux Elf_Internal_Verdaux;

typedef struct elf_internal_vernaux Elf_Internal_Vernaux;

typedef struct elf_internal_versym elf_internal_versym, *Pelf_internal_versym;

typedef struct elf_internal_versym Elf_Internal_Versym;

struct elf_internal_versym {
    ushort vs_vers;
};

typedef struct internal_aouthdr internal_aouthdr, *Pinternal_aouthdr;

struct internal_aouthdr {
    short magic;
    short vstamp;
    bfd_vma tsize;
    bfd_vma dsize;
    bfd_vma bsize;
    bfd_vma entry;
    bfd_vma text_start;
    bfd_vma data_start;
    ulong tagentries;
    bfd_vma o_toc;
    short o_snentry;
    short o_sntext;
    short o_sndata;
    short o_sntoc;
    short o_snloader;
    short o_snbss;
    short o_algntext;
    short o_algndata;
    short o_modtype;
    short o_cputype;
    bfd_vma o_maxstack;
    bfd_vma o_maxdata;
    bfd_vma bss_start;
    bfd_vma gp_value;
    ulong gprmask;
    ulong cprmask[4];
    ulong fprmask;
    long o_inlib;
    long o_sri;
    long vid[2];
    struct internal_extra_pe_aouthdr pe;
};

typedef struct internal_extra_pe_filehdr internal_extra_pe_filehdr, *Pinternal_extra_pe_filehdr;

struct internal_extra_pe_filehdr {
    ushort e_magic;
    ushort e_cblp;
    ushort e_cp;
    ushort e_crlc;
    ushort e_cparhdr;
    ushort e_minalloc;
    ushort e_maxalloc;
    ushort e_ss;
    ushort e_sp;
    ushort e_csum;
    ushort e_ip;
    ushort e_cs;
    ushort e_lfarlc;
    ushort e_ovno;
    ushort e_res[4];
    ushort e_oemid;
    ushort e_oeminfo;
    ushort e_res2[10];
    bfd_vma e_lfanew;
    ulong dos_message[16];
    bfd_vma nt_signature;
};

typedef struct internal_filehdr internal_filehdr, *Pinternal_filehdr;

struct internal_filehdr {
    struct internal_extra_pe_filehdr pe;
    ushort f_magic;
    ushort f_nscns;
    long f_timdat;
    bfd_vma f_symptr;
    long f_nsyms;
    ushort f_opthdr;
    ushort f_flags;
    ushort f_target_id;
};

typedef struct internal_lineno internal_lineno, *Pinternal_lineno;

struct internal_lineno {
    union anon_union_4_2_48746dff_for_l_addr l_addr;
    ulong l_lnno;
};

typedef struct internal_reloc internal_reloc, *Pinternal_reloc;

struct internal_reloc {
    bfd_vma r_vaddr;
    long r_symndx;
    ushort r_type;
    uchar r_size;
    uchar r_extern;
    ulong r_offset;
};

typedef struct internal_scnhdr internal_scnhdr, *Pinternal_scnhdr;

struct internal_scnhdr {
    char s_name[8];
    bfd_vma s_paddr;
    bfd_vma s_vaddr;
    bfd_vma s_size;
    bfd_vma s_scnptr;
    bfd_vma s_relptr;
    bfd_vma s_lnnoptr;
    ulong s_nreloc;
    ulong s_nlnno;
    long s_flags;
    long s_align;
    uchar s_page;
};

typedef struct areltdata areltdata, *Pareltdata;

struct areltdata {
    char *arch_header;
    uint parsed_size;
    char *filename;
    file_ptr origin;
};

typedef struct bfd_in_memory bfd_in_memory, *Pbfd_in_memory;

struct bfd_in_memory {
    bfd_size_type size;
    bfd_byte *buffer;
};

typedef struct bfd_section_already_linked bfd_section_already_linked, *Pbfd_section_already_linked;

struct bfd_section_already_linked {
    struct bfd_section_already_linked *next;
    asection *sec;
};

typedef struct bfd_section_already_linked_hash_entry bfd_section_already_linked_hash_entry, *Pbfd_section_already_linked_hash_entry;

struct bfd_section_already_linked_hash_entry {
    struct bfd_hash_entry root;
    struct bfd_section_already_linked *entry;
};

typedef struct section_hash_entry section_hash_entry, *Psection_hash_entry;

struct section_hash_entry {
    struct bfd_hash_entry root;
    asection section;
};

typedef struct bfd_coff_backend_data bfd_coff_backend_data, *Pbfd_coff_backend_data;

typedef enum coff_symbol_classification {
    COFF_SYMBOL_GLOBAL=0,
    COFF_SYMBOL_COMMON=1,
    COFF_SYMBOL_UNDEFINED=2,
    COFF_SYMBOL_LOCAL=3,
    COFF_SYMBOL_PE_SECTION=4
} coff_symbol_classification;

typedef struct coff_final_link_info coff_final_link_info, *Pcoff_final_link_info;

typedef struct coff_link_section_info coff_link_section_info, *Pcoff_link_section_info;

typedef struct coff_debug_merge_hash_table coff_debug_merge_hash_table, *Pcoff_debug_merge_hash_table;

struct bfd_coff_backend_data {
    void (*_bfd_coff_swap_aux_in)(struct bfd *, void *, int, int, int, int, void *);
    void (*_bfd_coff_swap_sym_in)(struct bfd *, void *, void *);
    void (*_bfd_coff_swap_lineno_in)(struct bfd *, void *, void *);
    uint (*_bfd_coff_swap_aux_out)(struct bfd *, void *, int, int, int, int, void *);
    uint (*_bfd_coff_swap_sym_out)(struct bfd *, void *, void *);
    uint (*_bfd_coff_swap_lineno_out)(struct bfd *, void *, void *);
    uint (*_bfd_coff_swap_reloc_out)(struct bfd *, void *, void *);
    uint (*_bfd_coff_swap_filehdr_out)(struct bfd *, void *, void *);
    uint (*_bfd_coff_swap_aouthdr_out)(struct bfd *, void *, void *);
    uint (*_bfd_coff_swap_scnhdr_out)(struct bfd *, void *, void *);
    uint _bfd_filhsz;
    uint _bfd_aoutsz;
    uint _bfd_scnhsz;
    uint _bfd_symesz;
    uint _bfd_auxesz;
    uint _bfd_relsz;
    uint _bfd_linesz;
    uint _bfd_filnmlen;
    bfd_boolean _bfd_coff_long_filenames;
    bfd_boolean _bfd_coff_long_section_names;
    uint _bfd_coff_default_section_alignment_power;
    bfd_boolean _bfd_coff_force_symnames_in_strings;
    uint _bfd_coff_debug_string_prefix_length;
    void (*_bfd_coff_swap_filehdr_in)(struct bfd *, void *, void *);
    void (*_bfd_coff_swap_aouthdr_in)(struct bfd *, void *, void *);
    void (*_bfd_coff_swap_scnhdr_in)(struct bfd *, void *, void *);
    void (*_bfd_coff_swap_reloc_in)(struct bfd *, void *, void *);
    bfd_boolean (*_bfd_coff_bad_format_hook)(struct bfd *, void *);
    bfd_boolean (*_bfd_coff_set_arch_mach_hook)(struct bfd *, void *);
    void * (*_bfd_coff_mkobject_hook)(struct bfd *, void *, void *);
    bfd_boolean (*_bfd_styp_to_sec_flags_hook)(struct bfd *, void *, char *, asection *, flagword *);
    void (*_bfd_set_alignment_hook)(struct bfd *, asection *, void *);
    bfd_boolean (*_bfd_coff_slurp_symbol_table)(struct bfd *);
    bfd_boolean (*_bfd_coff_symname_in_debug)(struct bfd *, struct internal_syment *);
    bfd_boolean (*_bfd_coff_pointerize_aux_hook)(struct bfd *, combined_entry_type *, combined_entry_type *, uint, combined_entry_type *);
    bfd_boolean (*_bfd_coff_print_aux)(struct bfd *, FILE *, combined_entry_type *, combined_entry_type *, combined_entry_type *, uint);
    void (*_bfd_coff_reloc16_extra_cases)(struct bfd *, struct bfd_link_info *, struct bfd_link_order *, arelent *, bfd_byte *, uint *, uint *);
    int (*_bfd_coff_reloc16_estimate)(struct bfd *, asection *, arelent *, uint, struct bfd_link_info *);
    coff_symbol_classification (*_bfd_coff_classify_symbol)(struct bfd *, struct internal_syment *);
    bfd_boolean (*_bfd_coff_compute_section_file_positions)(struct bfd *);
    bfd_boolean (*_bfd_coff_start_final_link)(struct bfd *, struct bfd_link_info *);
    bfd_boolean (*_bfd_coff_relocate_section)(struct bfd *, struct bfd_link_info *, struct bfd *, asection *, bfd_byte *, struct internal_reloc *, struct internal_syment *, asection **);
    reloc_howto_struct * (*_bfd_coff_rtype_to_howto)(struct bfd *, asection *, struct internal_reloc *, struct coff_link_hash_entry *, struct internal_syment *, bfd_vma *);
    bfd_boolean (*_bfd_coff_adjust_symndx)(struct bfd *, struct bfd_link_info *, struct bfd *, asection *, struct internal_reloc *, bfd_boolean *);
    bfd_boolean (*_bfd_coff_link_add_one_symbol)(struct bfd_link_info *, struct bfd *, char *, flagword, asection *, bfd_vma, char *, bfd_boolean, bfd_boolean, struct bfd_link_hash_entry **);
    bfd_boolean (*_bfd_coff_link_output_has_begun)(struct bfd *, struct coff_final_link_info *);
    bfd_boolean (*_bfd_coff_final_link_postscript)(struct bfd *, struct coff_final_link_info *);
    bfd_boolean (*_bfd_coff_print_pdata)(struct bfd *, void *);
};

struct coff_debug_merge_hash_table {
    struct bfd_hash_table root;
};

struct coff_final_link_info {
    struct bfd_link_info *info;
    struct bfd *output_bfd;
    bfd_boolean failed;
    bfd_boolean global_to_static;
    struct bfd_strtab_hash *strtab;
    struct coff_link_section_info *section_info;
    long last_file_index;
    struct internal_syment last_file;
    long last_bf_index;
    union internal_auxent last_bf;
    struct coff_debug_merge_hash_table debug_merge;
    struct internal_syment *internal_syms;
    asection **sec_ptrs;
    long *sym_indices;
    bfd_byte *outsyms;
    bfd_byte *linenos;
    bfd_byte *contents;
    bfd_byte *external_relocs;
    struct internal_reloc *internal_relocs;
};

struct coff_link_section_info {
    struct internal_reloc *relocs;
    struct coff_link_hash_entry **rel_hashes;
};

typedef struct coff_section_tdata coff_section_tdata, *Pcoff_section_tdata;

struct coff_section_tdata {
    struct internal_reloc *relocs;
    bfd_boolean keep_relocs;
    bfd_byte *contents;
    bfd_boolean keep_contents;
    bfd_vma offset;
    uint i;
    char *function;
    struct coff_comdat_info *comdat;
    int line_base;
    void *stab_info;
    void *tdata;
};

typedef struct coff_symbol_struct coff_symbol_type;

typedef struct DWstruct DWstruct, *PDWstruct;

typedef int SItype;

struct DWstruct {
    SItype low;
    SItype high;
};

typedef union DWunion DWunion, *PDWunion;

typedef longlong DItype;

union DWunion {
    struct DWstruct s;
    DItype ll;
};

typedef struct archive_hash_entry archive_hash_entry, *Parchive_hash_entry;

typedef struct archive_list archive_list, *Parchive_list;

struct archive_list {
    struct archive_list *next;
    uint indx;
};

struct archive_hash_entry {
    struct bfd_hash_entry root;
    struct archive_list *defs;
};

typedef struct archive_hash_table archive_hash_table, *Parchive_hash_table;

struct archive_hash_table {
    struct bfd_hash_table table;
};

typedef enum link_action {
    FAIL=0,
    UND=1,
    WEAK=2,
    DEF=3,
    DEFW=4,
    COM=5,
    REF=6,
    CREF=7,
    CDEF=8,
    NOACT=9,
    BIG=10,
    MDEF=11,
    MIND=12,
    IND=13,
    CIND=14,
    SET=15,
    MWARN=16,
    WARN=17,
    CWARN=18,
    CYCLE=19,
    REFC=20,
    WARNC=21
} link_action;

typedef enum link_row {
    UNDEF_ROW=0,
    UNDEFW_ROW=1,
    DEF_ROW=2,
    DEFW_ROW=3,
    COMMON_ROW=4,
    INDR_ROW=5,
    WARN_ROW=6,
    SET_ROW=7
} link_row;

typedef struct list_info_struct list_info_type;

typedef struct formal_struct formal_struct, *Pformal_struct;

typedef struct formal_struct formal_entry;

typedef enum formal_type {
    FORMAL_OPTIONAL=0,
    FORMAL_REQUIRED=1,
    FORMAL_VARARG=2
} formal_type;

struct formal_struct {
    struct formal_struct *next;
    struct sb name;
    struct sb def;
    struct sb actual;
    int index;
    enum formal_type type;
};

typedef struct macro_struct macro_struct, *Pmacro_struct;

typedef struct macro_struct macro_entry;

struct macro_struct {
    struct sb sub;
    int formal_count;
    formal_entry *formals;
    struct hash_control *formal_hash;
    char *name;
    char *file;
    uint line;
};



typedef struct sec_merge_hash sec_merge_hash, *Psec_merge_hash;

typedef struct sec_merge_hash_entry sec_merge_hash_entry, *Psec_merge_hash_entry;

typedef struct sec_merge_sec_info sec_merge_sec_info, *Psec_merge_sec_info;

struct sec_merge_hash_entry {
    struct bfd_hash_entry root;
    uint len;
    uint alignment;
    union anon_union_4_2_c68fcebe_for_u u;
    struct sec_merge_sec_info *secinfo;
    struct sec_merge_hash_entry *next;
};

struct sec_merge_hash {
    struct bfd_hash_table table;
    bfd_size_type size;
    struct sec_merge_hash_entry *first;
    struct sec_merge_hash_entry *last;
    uint entsize;
    bfd_boolean strings;
};

struct sec_merge_sec_info {
    struct sec_merge_sec_info *next;
    asection *sec;
    void **psecinfo;
    struct sec_merge_hash *htab;
    struct sec_merge_hash_entry *first_str;
    uchar contents[1];
};

typedef struct sec_merge_info sec_merge_info, *Psec_merge_info;

struct sec_merge_info {
    struct sec_merge_info *next;
    struct sec_merge_sec_info *chain;
    struct sec_merge_hash *htab;
};

typedef struct group_list group_list, *Pgroup_list;

struct group_list {
    asection **head;
    uint *elt_count;
    uint num_group;
};

typedef struct section_stack section_stack, *Psection_stack;

struct section_stack {
    struct section_stack *next;
    segT seg;
    segT prev_seg;
    int subseg;
    int prev_subseg;
};

typedef struct format_ops format_ops, *Pformat_ops;

struct format_ops {
    int flavor;
    uint dfl_leading_underscore:1;
    uint emit_section_symbols:1;
    void (*begin)(void);
    void (*app_file)(char *, int);
    void (*frob_symbol)(symbolS *, int *);
    void (*frob_file)(void);
    void (*frob_file_before_adjust)(void);
    void (*frob_file_before_fix)(void);
    void (*frob_file_after_relocs)(void);
    bfd_vma (*s_get_size)(symbolS *);
    void (*s_set_size)(symbolS *, bfd_vma);
    bfd_vma (*s_get_align)(symbolS *);
    void (*s_set_align)(symbolS *, bfd_vma);
    int (*s_get_other)(symbolS *);
    void (*s_set_other)(symbolS *, int);
    int (*s_get_desc)(symbolS *);
    void (*s_set_desc)(symbolS *, int);
    int (*s_get_type)(symbolS *);
    void (*s_set_type)(symbolS *, int);
    void (*copy_symbol_attributes)(symbolS *, symbolS *);
    void (*generate_asm_lineno)(void);
    void (*process_stab)(segT, int, char *, int, int, int);
    int (*separate_stab_sections)(void);
    void (*init_stab_section)(segT);
    int (*sec_sym_ok_for_reloc)(asection *);
    void (*pop_insert)(void);
    void (*ecoff_set_ext)(symbolS *, struct ecoff_extr *);
    void (*read_begin_hook)(void);
    void (*symbol_new_hook)(symbolS *);
};

typedef struct objalloc_chunk objalloc_chunk, *Pobjalloc_chunk;

struct objalloc_chunk {
    struct objalloc_chunk *next;
    char *current_ptr;
};

typedef struct objalloc objalloc, *Pobjalloc;

struct objalloc {
    char *current_ptr;
    uint current_space;
    void *chunks;
};

typedef struct opncls opncls, *Popncls;

struct opncls {
    void *stream;
    file_ptr (*pread)(struct bfd *, void *, void *, file_ptr, file_ptr);
    int (*close)(struct bfd *, void *);
    int (*stat)(struct bfd *, void *, struct stat *);
    file_ptr where;
};

typedef enum linkonce_type {
    LINKONCE_UNSET=0,
    LINKONCE_DISCARD=1,
    LINKONCE_ONE_ONLY=2,
    LINKONCE_SAME_SIZE=3,
    LINKONCE_SAME_CONTENTS=4
} linkonce_type;

typedef struct debug_prefix_map debug_prefix_map, *Pdebug_prefix_map;

struct debug_prefix_map {
    char *old_prefix;
    char *new_prefix;
    size_t old_len;
    size_t new_len;
    struct debug_prefix_map *next;
};

typedef struct rusage rusage, *Prusage;

typedef struct timeval timeval, *Ptimeval;

struct rusage {
    struct timeval ru_utime;
    struct timeval ru_stime;
    long ru_maxrss;
    long ru_ixrss;
    long ru_idrss;
    long ru_isrss;
    long ru_minflt;
    long ru_majflt;
    long ru_nswap;
    long ru_inblock;
    long ru_oublock;
    long ru_msgsnd;
    long ru_msgrcv;
    long ru_nsignals;
    long ru_nvcsw;
    long ru_nivcsw;
};

typedef struct anon_struct_120_1_89918cff anon_struct_120_1_89918cff, *Panon_struct_120_1_89918cff;

typedef struct le sb_element;

struct anon_struct_120_1_89918cff {
    sb_element *size[30];
};

typedef struct saved_output_info saved_output_info, *Psaved_output_info;

struct saved_output_info {
    bfd_vma offset;
    asection *section;
};

typedef struct srec_data_struct tdata_type;

typedef enum __stab_debug_code {
    N_GSYM=32,
    N_FNAME=34,
    N_FUN=36,
    N_STSYM=38,
    N_LCSYM=40,
    N_MAIN=42,
    N_ROSYM=44,
    N_BNSYM=46,
    N_PC=48,
    N_NSYMS=50,
    N_NOMAP=52,
    N_OBJ=56,
    N_OPT=60,
    N_RSYM=64,
    N_M2C=66,
    N_SLINE=68,
    N_DSLINE=70,
    N_BROWS=72,
    N_BSLINE=72,
    N_DEFD=74,
    N_FLINE=76,
    N_ENSYM=78,
    N_EHDECL=80,
    N_MOD2=80,
    N_CATCH=84,
    N_SSYM=96,
    N_ENDM=98,
    N_SO=100,
    N_OSO=102,
    N_ALIAS=108,
    N_LSYM=128,
    N_BINCL=130,
    N_SOL=132,
    N_PSYM=160,
    N_EINCL=162,
    N_ENTRY=164,
    N_LBRAC=192,
    N_EXCL=194,
    N_SCOPE=196,
    N_PATCH=208,
    N_RBRAC=224,
    N_BCOMM=226,
    N_ECOMM=228,
    N_ECOML=232,
    N_WITH=234,
    N_NBTEXT=240,
    N_NBDATA=242,
    N_NBBSS=244,
    N_NBSTS=246,
    N_NBLCS=248,
    N_LENG=254,
    LAST_UNUSED_STAB_CODE=255
} __stab_debug_code;

typedef struct stab_excl_list stab_excl_list, *Pstab_excl_list;

struct stab_excl_list {
    struct stab_excl_list *next;
    bfd_size_type offset;
    bfd_vma val;
    int type;
};

typedef struct stab_link_includes_entry stab_link_includes_entry, *Pstab_link_includes_entry;

typedef struct stab_link_includes_totals stab_link_includes_totals, *Pstab_link_includes_totals;

struct stab_link_includes_entry {
    struct bfd_hash_entry root;
    struct stab_link_includes_totals *totals;
};

struct stab_link_includes_totals {
    struct stab_link_includes_totals *next;
    bfd_vma sum_chars;
    bfd_vma num_chars;
    char *symb;
};

typedef struct stab_section_info stab_section_info, *Pstab_section_info;

struct stab_section_info {
    struct stab_excl_list *excls;
    bfd_size_type *cumulative_skips;
    bfd_size_type stridxs[1];
};

typedef char *__gnuc_va_list;

typedef __gnuc_va_list va_list;

typedef union anon_union_4_2_94ee1f7e_for_u anon_union_4_2_94ee1f7e_for_u, *Panon_union_4_2_94ee1f7e_for_u;

union anon_union_4_2_94ee1f7e_for_u {
    fragS *lsy_frag;
    symbolS *lsy_sym;
};

typedef struct local_symbol local_symbol, *Plocal_symbol;

struct local_symbol {
    asymbol *lsy_marker;
    segT lsy_section;
    char *lsy_name;
    union anon_union_4_2_94ee1f7e_for_u u;
    valueT lsy_value;
};

typedef union anon_union_4_2_d5366d41_for_stabu anon_union_4_2_d5366d41_for_stabu, *Panon_union_4_2_d5366d41_for_stabu;

union anon_union_4_2_d5366d41_for_stabu {
    ulong stab_string_size;
    char *p;
};

typedef struct frchain frchain, *Pfrchain;

typedef struct fix fix, *Pfix;

typedef struct fix fixS;

struct fix {
    uint fx_pcrel:1;
    uint fx_im_disp:2;
    uint fx_tcbit:1;
    uint fx_tcbit2:1;
    uint fx_done:1;
    uint fx_no_overflow:1;
    uint fx_signed:1;
    char fx_pcrel_adjust;
    char fx_pcrel_adjust_for_branch_inside_instruction_sequence;
    uchar fx_size;
    fragS *fx_frag;
    long fx_where;
    symbolS *fx_addsy;
    symbolS *fx_subsy;
    valueT fx_offset;
    addressT fx_dot_value;
    struct fix *fx_next;
    bit_fixS *fx_bit_fixP;
    bfd_reloc_code_real_type fx_r_type;
    valueT fx_addnumber;
    char *fx_file;
    uint fx_line;
};

struct frchain {
    struct frag *frch_root;
    struct frag *frch_last;
    struct frchain *frch_next;
    subsegT frch_subseg;
    fixS *fix_root;
    fixS *fix_tail;
    struct obstack frch_obstack;
    fragS *frch_frag_now;
    struct frch_cfi_data *frch_cfi_data;
};

typedef struct frchain frchainS;

typedef struct segment_info_struct segment_info_struct, *Psegment_info_struct;

struct segment_info_struct {
    frchainS *frchainP;
    uint hadone:1;
    uint bss:1;
    int user_stuff;
    fixS *fix_root;
    fixS *fix_tail;
    symbolS *dot;
    struct lineno_list *lineno_list_head;
    struct lineno_list *lineno_list_tail;
    asection *bfd_section;
    symbolS *sym;
    union anon_union_4_2_d5366d41_for_stabu stabu;
};

typedef struct segment_info_struct segment_info_type;

typedef struct broken_word broken_word, *Pbroken_word;

struct broken_word {
    struct broken_word *next_broken_word;
    segT seg;
    subsegT subseg;
    fragS *frag;
    char *word_goes_here;
    fragS *dispfrag;
    symbolS *add;
    symbolS *sub;
    offsetT addnum;
    int added;
    struct broken_word *use_jump;
};

typedef struct indexentry indexentry, *Pindexentry;

struct indexentry {
    bfd_vma val;
    bfd_byte *stab;
    bfd_byte *str;
    char *directory_name;
    char *file_name;
    char *function_name;
};

typedef struct section_to_type section_to_type, *Psection_to_type;

struct section_to_type {
    char *section;
    char type;
};

typedef struct stab_find_info stab_find_info, *Pstab_find_info;

struct stab_find_info {
    asection *stabsec;
    asection *strsec;
    bfd_byte *stabs;
    bfd_byte *strs;
    struct indexentry *indextable;
    int indextablesize;
    struct indexentry *cached_indexentry;
    bfd_vma cached_offset;
    bfd_byte *cached_stab;
    char *cached_file_name;
    char *filename;
};

typedef struct targmatch targmatch, *Ptargmatch;

struct targmatch {
    char *triplet;
    struct bfd_target *vector;
};

typedef struct aeon_insn_type aeon_insn_type, *Paeon_insn_type;

struct aeon_insn_type {
    int type;
    void *dat;
};

typedef enum md_opts {
    option_eb=191,
    option_el=192,
    option_rlx=193,
    option_ebinst=194,
    option_stackop=195
} md_opts;


typedef struct tekhex_symbol_struct tekhex_symbol_type;

typedef __time_t time_t;

typedef struct tm tm, *Ptm;

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
    long tm_gmtoff;
    char *tm_zone;
};

typedef int __intptr_t;

typedef __intptr_t intptr_t;

typedef struct relax_seg_info relax_seg_info, *Prelax_seg_info;

struct relax_seg_info {
    int pass;
    int changed;
};

typedef struct anon_struct_16_4_25e22f6d_for_a anon_struct_16_4_25e22f6d_for_a, *Panon_struct_16_4_25e22f6d_for_a;

struct anon_struct_16_4_25e22f6d_for_a {
    symbolS *offset_sym;
    struct reloc_howto_struct *howto;
    symbolS *sym;
    bfd_vma addend;
};

typedef struct anon_struct_24_3_3d133d74_for_b anon_struct_24_3_3d133d74_for_b, *Panon_struct_24_3_3d133d74_for_b;

struct anon_struct_24_3_3d133d74_for_b {
    asection *sec;
    asymbol *s;
    arelent r;
};

typedef union anon_union_24_2_94730002_for_u anon_union_24_2_94730002_for_u, *Panon_union_24_2_94730002_for_u;

union anon_union_24_2_94730002_for_u {
    struct anon_struct_16_4_25e22f6d_for_a a;
    struct anon_struct_24_3_3d133d74_for_b b;
};

typedef struct reloc_list reloc_list, *Preloc_list;

struct reloc_list {
    struct reloc_list *next;
    union anon_union_24_2_94730002_for_u u;
    char *file;
    uint line;
};

typedef struct xatexit xatexit, *Pxatexit;

struct xatexit {
    struct xatexit *next;
    int ind;
    void (*fns[32])(void);
};

typedef uchar Byte;

typedef Byte Bytef;

typedef void *voidpf;

typedef uint uInt;

typedef voidpf (*alloc_func)(voidpf, uInt, uInt);

typedef void (*free_func)(voidpf, voidpf);

typedef struct internal_state internal_state, *Pinternal_state;

struct internal_state {
    int dummy;
};

typedef struct z_stream_s z_stream_s, *Pz_stream_s;

typedef struct z_stream_s z_stream;

typedef uint uLong;

struct z_stream_s {
    Bytef *next_in;
    uInt avail_in;
    uLong total_in;
    Bytef *next_out;
    uInt avail_out;
    uLong total_out;
    char *msg;
    struct internal_state *state;
    alloc_func zalloc;
    free_func zfree;
    voidpf opaque;
    int data_type;
    uLong adler;
    uLong reserved;
};

typedef sqword int64_t;

typedef char operator_rankT;

typedef int ptrdiff_t;

typedef ulonglong UDItype;

typedef qword uint64_t;

typedef uint USItype;

typedef struct Elf32_Dyn_x86 Elf32_Dyn_x86, *PElf32_Dyn_x86;

typedef enum Elf32_DynTag_x86 {
    DT_NULL=0,
    DT_NEEDED=1,
    DT_PLTRELSZ=2,
    DT_PLTGOT=3,
    DT_HASH=4,
    DT_STRTAB=5,
    DT_SYMTAB=6,
    DT_RELA=7,
    DT_RELASZ=8,
    DT_RELAENT=9,
    DT_STRSZ=10,
    DT_SYMENT=11,
    DT_INIT=12,
    DT_FINI=13,
    DT_SONAME=14,
    DT_RPATH=15,
    DT_SYMBOLIC=16,
    DT_REL=17,
    DT_RELSZ=18,
    DT_RELENT=19,
    DT_PLTREL=20,
    DT_DEBUG=21,
    DT_TEXTREL=22,
    DT_JMPREL=23,
    DT_BIND_NOW=24,
    DT_INIT_ARRAY=25,
    DT_FINI_ARRAY=26,
    DT_INIT_ARRAYSZ=27,
    DT_FINI_ARRAYSZ=28,
    DT_RUNPATH=29,
    DT_FLAGS=30,
    DT_PREINIT_ARRAY=32,
    DT_PREINIT_ARRAYSZ=33,
    DT_RELRSZ=35,
    DT_RELR=36,
    DT_RELRENT=37,
    DT_ANDROID_REL=1610612751,
    DT_ANDROID_RELSZ=1610612752,
    DT_ANDROID_RELA=1610612753,
    DT_ANDROID_RELASZ=1610612754,
    DT_ANDROID_RELR=1879040000,
    DT_ANDROID_RELRSZ=1879040001,
    DT_ANDROID_RELRENT=1879040003,
    DT_GNU_PRELINKED=1879047669,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_CHECKSUM=1879047672,
    DT_PLTPADSZ=1879047673,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_FEATURE_1=1879047676,
    DT_POSFLAG_1=1879047677,
    DT_SYMINSZ=1879047678,
    DT_SYMINENT=1879047679,
    DT_GNU_XHASH=1879047924,
    DT_GNU_HASH=1879047925,
    DT_TLSDESC_PLT=1879047926,
    DT_TLSDESC_GOT=1879047927,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_LIBLIST=1879047929,
    DT_CONFIG=1879047930,
    DT_DEPAUDIT=1879047931,
    DT_AUDIT=1879047932,
    DT_PLTPAD=1879047933,
    DT_MOVETAB=1879047934,
    DT_SYMINFO=1879047935,
    DT_VERSYM=1879048176,
    DT_RELACOUNT=1879048185,
    DT_RELCOUNT=1879048186,
    DT_FLAGS_1=1879048187,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_AUXILIARY=2147483645,
    DT_FILTER=2147483647
} Elf32_DynTag_x86;

struct Elf32_Dyn_x86 {
    enum Elf32_DynTag_x86 d_tag;
    dword d_val;
};

typedef enum Elf_ProgramHeaderType_x86 {
    PT_NULL=0,
    PT_LOAD=1,
    PT_DYNAMIC=2,
    PT_INTERP=3,
    PT_NOTE=4,
    PT_SHLIB=5,
    PT_PHDR=6,
    PT_TLS=7,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_STACK=1685382481,
    PT_GNU_RELRO=1685382482
} Elf_ProgramHeaderType_x86;

typedef enum Elf_SectionHeaderType_x86 {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191
} Elf_SectionHeaderType_x86;

struct Elf32_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_x86 sh_type;
    dword sh_flags;
    dword sh_addr;
    dword sh_offset;
    dword sh_size;
    dword sh_link;
    dword sh_info;
    dword sh_addralign;
    dword sh_entsize;
};


typedef struct NoteAbiTag NoteAbiTag, *PNoteAbiTag;

struct NoteAbiTag {
    dword namesz; /* Length of name field */
    dword descsz; /* Length of description field */
    dword type; /* Vendor specific type */
    char name[4]; /* Vendor name */
    dword abiType; /* 0 == Linux */
    dword requiredKernelVersion[3]; /* Major.minor.patch */
};



typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

struct evp_pkey_ctx_st {
};

typedef enum __rusage_who {
    RUSAGE_CHILDREN=-1,
    RUSAGE_SELF=0,
    RUSAGE_THREAD=1
} __rusage_who;

typedef enum __rusage_who __rusage_who_t;


typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; /* Exception Handler Frame Header Version */
    dwfenc eh_frame_pointer_encoding; /* Exception Handler Frame Pointer Encoding */
    dwfenc eh_frame_desc_entry_count_encoding; /* Encoding of # of Exception Handler FDEs */
    dwfenc eh_frame_table_encoding; /* Exception Handler Table Encoding */
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; /* Initial Location */
    dword data_loc; /* Data location */
};
