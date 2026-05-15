
# Copyright 2026 NXP
#
# SPDX-License-Identifier: BSD-3-Clause

mcux_add_configuration(
    CC "-DSDK_DEBUGCONSOLE=1"
    CX "-DSDK_DEBUGCONSOLE=1"
)


mcux_add_source(
    SOURCES frdmmcxa156/board.c
            frdmmcxa156/board.h
)

mcux_add_include(
    INCLUDES frdmmcxa156
)

mcux_add_source(
    SOURCES frdmmcxa156/clock_config.c
            frdmmcxa156/clock_config.h
)

mcux_add_include(
    INCLUDES frdmmcxa156
)

mcux_add_source(
    SOURCES master/pin_mux.c
            master/pin_mux.h
)

mcux_add_include(
    INCLUDES master
)

mcux_add_source(
    SOURCES master/app.h
            master/hardware_init.c
)

mcux_add_include(
    INCLUDES master
)
