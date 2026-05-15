
# Copyright 2026 NXP
#
# SPDX-License-Identifier: BSD-3-Clause

cmake_minimum_required(VERSION 3.22.0)

cmake_path(APPEND conf_file_path ${CMAKE_CURRENT_LIST_DIR} ${board} prj.conf)
set(CONF_FILE ${conf_file_path} ${CONF_FILE})
include(${SdkRootDirPath}/cmake/extension/mcux.cmake)

project(cmsis_lpc_i2c_int_b2b_transfer_master LANGUAGES C CXX ASM PROJECT_BOARD_PORT_PATH ${board_root}/${board}/cmsis_driver_examples/i2c/int_b2b_transfer/master)


include(${board}/board_files.cmake)
include(${SdkRootDirPath}/CMakeLists.txt)

add_compile_definitions(RW612=1)

mcux_add_source(
    SOURCES ../Common/main.c
            master/RTE_Device.h
            ../Common/oled_b_click.h
            ../Common/oled_b_click.c
            ../Common/icons.c
)

mcux_add_include(
    INCLUDES master
    ../Common
)
mcux_convert_binary(BINARY ${APPLICATION_BINARY_DIR}/${MCUX_SDK_PROJECT_NAME}.bin)

mcux_add_include(INCLUDES .)
