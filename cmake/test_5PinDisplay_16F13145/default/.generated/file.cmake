# The following variables contains the files used by the different stages of the build process.
set(test_5PinDisplay_16F13145_default_default_XC8_FILE_TYPE_assemble)
set_source_files_properties(${test_5PinDisplay_16F13145_default_default_XC8_FILE_TYPE_assemble} PROPERTIES LANGUAGE ASM)

# For assembly files, add "." to the include path for each file so that .include with a relative path works
foreach(source_file ${test_5PinDisplay_16F13145_default_default_XC8_FILE_TYPE_assemble})
        set_source_files_properties(${source_file} PROPERTIES INCLUDE_DIRECTORIES "$<PATH:NORMAL_PATH,$<PATH:REMOVE_FILENAME,${source_file}>>")
endforeach()

set(test_5PinDisplay_16F13145_default_default_XC8_FILE_TYPE_assemblePreprocess)
set_source_files_properties(${test_5PinDisplay_16F13145_default_default_XC8_FILE_TYPE_assemblePreprocess} PROPERTIES LANGUAGE ASM)

# For assembly files, add "." to the include path for each file so that .include with a relative path works
foreach(source_file ${test_5PinDisplay_16F13145_default_default_XC8_FILE_TYPE_assemblePreprocess})
        set_source_files_properties(${source_file} PROPERTIES INCLUDE_DIRECTORIES "$<PATH:NORMAL_PATH,$<PATH:REMOVE_FILENAME,${source_file}>>")
endforeach()

set(test_5PinDisplay_16F13145_default_default_XC8_FILE_TYPE_compile
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../My_MCC_Config/mcc/config_16F13145.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../My_MCC_Config/mcc/main.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../My_MCC_Config/mcc/mcc_generated_files/adc/src/adc.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../My_MCC_Config/mcc/mcc_generated_files/system/src/clock.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../My_MCC_Config/mcc/mcc_generated_files/system/src/config_bits.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../My_MCC_Config/mcc/mcc_generated_files/system/src/interrupt.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../My_MCC_Config/mcc/mcc_generated_files/system/src/pins.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../My_MCC_Config/mcc/mcc_generated_files/system/src/system.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../My_MCC_Config/mcc/mcc_generated_files/timer/src/tmr0.c")
set_source_files_properties(${test_5PinDisplay_16F13145_default_default_XC8_FILE_TYPE_compile} PROPERTIES LANGUAGE C)
set(test_5PinDisplay_16F13145_default_default_XC8_FILE_TYPE_link)
set(test_5PinDisplay_16F13145_default_image_name "default.elf")
set(test_5PinDisplay_16F13145_default_image_base_name "default")

# The output directory of the final image.
set(test_5PinDisplay_16F13145_default_output_dir "${CMAKE_CURRENT_SOURCE_DIR}/../../../out/test_5PinDisplay_16F13145")

# The full path to the final image.
set(test_5PinDisplay_16F13145_default_full_path_to_image ${test_5PinDisplay_16F13145_default_output_dir}/${test_5PinDisplay_16F13145_default_image_name})
