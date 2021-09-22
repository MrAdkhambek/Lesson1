cmake_minimum_required(VERSION 3.19)
project(ModernCpp)
set(CMAKE_CXX_STANDARD 20)

#Enable ASM provided by NASM
enable_language(ASM_NASM)

if(APPLE)
    #Add leading underscore when building macho64 object files
    string(APPEND CMAKE_ASM_NASM_FLAGS "--prefix _")
endif(APPLE)

add_executable(ModernCpp main.asm main.cpp)