cmake_minimum_required(VERSION 3.3)
project(apuelib)
FILE(GLOB inFiles RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}"
        "${CMAKE_CURRENT_SOURCE_DIR}/*")
include_directories(../include)
SET(LIB_SRC ${inFiles})
add_library(apue STATIC ${LIB_SRC})

