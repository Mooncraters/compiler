cmake_minimum_required(VERSION 3.17)
project(compiler)

set(CMAKE_CXX_STANDARD 11)

include_directories(./)
aux_source_directory(. DIR_SRCS)
add_executable(compiler ${DIR_SRCS})


set(CMAKE_INSTALL_PREFIX ./out)
install(TARGETS compiler
        RUNTIME DESTINATION bin)
install(FILES PascalProgram.pas DESTINATION bin)
