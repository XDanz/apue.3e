cmake_minimum_required(VERSION 3.5.1)
project(apuelib C CXX)

FILE(GLOB inFiles "src/*.c")
include_directories(include)
SET(LIB_SRC ${inFiles})

add_library(apue STATIC
        ${LIB_SRC})

target_include_directories(apue PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
        PRIVATE src)
#message(STATUS "CMAKE_INSTALL_LIBDIR:${CMAKE_INSTALL_LIBDIR}" )
#get_cmake_property(_variableNames VARIABLES)
#foreach (_variableName ${_variableNames})
#    message(STATUS "${_variableName}=${${_variableName}}")
#endforeach()
#"message(STATUS "CMAKE_CURRENT_SOURCE_DIR:${CMAKE_CURRENT_SOURCE_DIR}" )
install(TARGETS apue
        ARCHIVE  DESTINATION apue
        LIBRARY  DESTINATION apue
        RUNTIME  DESTINATION apue)  # This is for Windows
install(DIRECTORY include/ DESTINATION apue/include)
#install(TARGETS apue ARCHIVE DESTINATION /usr/lib/apue)
#install(DIRECTORY include DESTINATION /usr/local/apue)
#install(EXPORT apue DESTINATION share/apue/cmake)



