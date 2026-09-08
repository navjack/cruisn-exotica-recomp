cmake_minimum_required(VERSION 3.20)
project(cruisn_exotica LANGUAGES C CXX OBJC OBJCXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
include("${CMAKE_CURRENT_SOURCE_DIR}/../../native/CruisnNative.cmake")
cruisn_add_native_app(
    GAME_ID cruisn_exotica
    ROM_HASH 3e67964e5f3d117f
    INTERNAL_NAME "CRUIS'N EXOTICA"
    DISPLAY_NAME "Cruis'n Exotica"
    WINDOW_TITLE "Cruis'n Exotica - Recompiled")
