cmake_minimum_required(VERSION 3.3)
project(apue.3e C)

find_package(Threads REQUIRED)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

#-------------------
# set common include folder for module
#-------------------


add_subdirectory(lib)
add_subdirectory(intro)
#add_subdirectory(intro)
#add_subdirectory(advio)
#add_executable(byteorder intro/byteorder.c)

#nclude_directories(lib)

#add_library(foo STATIC IMPORTED)
#set_property(TARGET foo PROPERTY IMPORTED_LOCATION libunp.a)

