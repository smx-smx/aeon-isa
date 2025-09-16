project(aeon-extract C)
add_library(extract SHARED extract.c)
target_compile_definitions(extract PRIVATE _GNU_SOURCE)

