cmake_minimum_required(VERSION 3.20)
project(brainfuck)

set(CMAKE_CXX_STANDARD 14)

add_executable(brainfuck main.cpp Memory.cpp Memory.h Node.h RootNode.cpp RootNode.h DisplayNode.cpp DisplayNode.h)
