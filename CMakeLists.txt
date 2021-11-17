cmake_minimum_required(VERSION 3.20)
project(brainfuck)

set(CMAKE_CXX_STANDARD 14)

add_executable(brainfuck main.cpp Memory.cpp Memory.h Node.h RootNode.cpp RootNode.h DisplayNode.cpp DisplayNode.h NodeParser.cpp NodeParser.h IncrementNode.cpp IncrementNode.h DecrementNode.cpp DecrementNode.h IncrementPointerNode.cpp IncrementPointerNode.h DecrementPointerNode.cpp DecrementPointerNode.h ReadValueNode.cpp ReadValueNode.h)
