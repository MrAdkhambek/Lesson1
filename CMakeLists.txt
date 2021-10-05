cmake_minimum_required(VERSION 3.19)
project(ModernCpp)
set(CMAKE_CXX_STANDARD 20)

add_subdirectory("libs/googletest")
include_directories(libs/googletest/googletest/include)

#Enable ASM provided by NASM
enable_language(ASM_NASM)

if(APPLE)
    #Add leading underscore when building macho64 object files
    string(APPEND CMAKE_ASM_NASM_FLAGS "--prefix _")
endif(APPLE)

add_executable(ModernCpp src/main.asm src/main.cpp)

target_link_libraries(ModernCpp gtest gtest_main)
