cmake_minimum_required(VERSION 3.3)
project(intro)

include_directories(include)
add_executable(hello hello.c)
add_executable(getcputc getcputc.c)
add_executable(ls1 ls1.c)
add_executable(mycat mycat.c)
add_executable(shell1 shell1.c)
add_executable(shell2 shell2.c)
add_executable(testerror testerror.c)
#add_executable(daytimetcpcli1 daytimetcpcli1.c)

target_link_libraries(hello apue)
target_link_libraries(ls1 apue)
target_link_libraries(mycat apue)
target_link_libraries(shell1 apue)
target_link_libraries(shell2 apue)
target_link_libraries(getcputc apue)
target_link_libraries(testerror apue)
#[[
set (intro_EXECUTABLES daytimetcpcli
        daytimetcpcli1
        byteorder
        daytimetcpcli2
        )
# byte order
set(intro_byteorder_SOURCES byteorder.c)
# Daytime client
set(intro_daytimetcpcli_SOURCES daytimetcpcli.c)

# Daytime client1
set(intro_daytimetcpcli1_SOURCES daytimetcpcli1.c)

set(intro_daytimetcpcli2_SOURCES daytimetcpcli2.c)

 #For each executable in the list...
foreach(exe ${intro_EXECUTABLES})
    # declare the target...
    add_executable( ${exe} ${intro_${exe}_SOURCES} )
        target_link_libraries(${exe} unp)

    # ...and do whatever additional configuration you need

endforeach()]]
#target_link_libraries(da unp)
