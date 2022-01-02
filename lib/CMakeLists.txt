cmake_minimum_required(VERSION 3.22)
message("hello from Lib")

# message(STATUS " From Lib :CMAKE SOURCE DIR ${CMAKE_SOURCE_DIR}")
# message(STATUS " From Lib : CMAKE_CURRENT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}")

# message(STATUS " From Lib :CMAKE_BINARY_DIR  ${CMAKE_BINARY_DIR}")
# message(STATUS " From Lib : CMAKE_CURRENT_BINARY_DIR ${CMAKE_CURRENT_BINARY_DIR}")

add_library(wifi_lib STATIC
    Wifi.cpp
    Wifi.hpp)

