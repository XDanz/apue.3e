cmake_minimum_required(VERSION 3.3)
project(stdio)

include_directories(../lib/include)

add_executable(buf buf.c)

add_executable(fgetsfputs fgetsfputs.c)

add_executable(getcharbug getcharbug.c)

add_executable(memstr memstr.c)

add_executable(mkstemp mkstemp.c)

add_executable(tempfiles tempfiles.c)


target_link_libraries(buf apue)

target_link_libraries(fgetsfputs apue)

target_link_libraries(getcharbug apue)

target_link_libraries(memstr apue)

target_link_libraries(mkstemp apue)

target_link_libraries(tempfiles apue)