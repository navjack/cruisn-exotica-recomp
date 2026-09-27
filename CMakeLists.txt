cmake_minimum_required(VERSION 3.20)
project(cruisn_exotica LANGUAGES C CXX OBJC OBJCXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CRUISN_COMMON_ROOT "" CACHE PATH "Shared Cruis'n workspace root")
if (NOT CRUISN_COMMON_ROOT)
    get_filename_component(CRUISN_COMMON_ROOT
        "${CMAKE_CURRENT_SOURCE_DIR}/../.." ABSOLUTE)
endif()
include("${CRUISN_COMMON_ROOT}/native/CruisnNative.cmake")
cruisn_add_native_app(
    GAME_ID cruisn_exotica
    ROM_HASH 3e67964e5f3d117f
    INTERNAL_NAME "CruisnExotica"
    DISPLAY_NAME "Cruis'n Exotica"
    WINDOW_TITLE "Cruis'n Exotica: Recompiled"
    PROGRAM_ID CruisnExoticaRecompiled
    PROGRAM_NAME "Cruis'n Exotica: Recompiled"
    SAVE_TYPE Eep4k)
