
# Copyright 2026 NXP
#
# SPDX-License-Identifier: BSD-3-Clause

mcux_set_variable(gcc_wireless_linker_file connectivity.ld)

mcux_set_variable(gcc_wireless_linker_file_ble connectivity_ble.ld)

mcux_set_variable(gcc_wireless_linker_file_ble_loc connectivity_ble_loc.ld)

mcux_set_variable(iar_wireless_linker_file connectivity.icf)

mcux_set_variable(iar_wireless_linker_file_ble connectivity_ble.icf)

mcux_add_cmakelists(${SdkRootDirPath}/middleware/wireless/bluetooth/application/common OPTIONAL)

mcux_add_configuration(
    CC "-DSDK_DEBUGCONSOLE=1"
    CX "-DSDK_DEBUGCONSOLE=1"
)


mcux_add_source(
    SOURCES frdmmcxw72/board.c
            frdmmcxw72/board.h
)

mcux_add_include(
    INCLUDES frdmmcxw72
)

mcux_add_source(
    SOURCES frdmmcxw72/clock_config.c
            frdmmcxw72/clock_config.h
)

mcux_add_include(
    INCLUDES frdmmcxw72
)

mcux_add_source(
    SOURCES master/pin_mux.c
            master/pin_mux.h
)

mcux_add_include(
    INCLUDES master
)

mcux_add_source(
    SOURCES cm33_core0/app.h
            cm33_core0/hardware_init.c
)

mcux_add_include(
    INCLUDES cm33_core0
)
