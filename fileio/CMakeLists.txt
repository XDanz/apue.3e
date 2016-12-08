cmake_minimum_required(VERSION 3.3)
project(fileio)

include_directories(../include)

add_executable(fileflags fileflags.c)
add_executable(hole hole.c)
add_executable(mycat1 mycat.c)
add_executable(seek seek.c)
#add_executable(setfl setfl.c)

target_link_libraries(fileflags apue)
target_link_libraries(hole apue)
target_link_libraries(mycat1 apue)
target_link_libraries(seek apue)
#target_link_libraries(setfl apue)
