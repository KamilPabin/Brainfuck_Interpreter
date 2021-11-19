# Brainfuck Interpreter

This is a simple program that allow you to run brainfuck code from command line.  
Interpreter works by reading file provided in command line argument, building AST (Abstract Syntax Tree), then
traversing tree nodes which results in code execution.

## Requirements
Brainfuck interpreter requires `C++14` or above, `CMake 3.20` or above and `Make`.

## What is brainfuck

Brainfuck is esoteric language created by Urban Müller in 1993. Despite its minimalistic syntax having only 8 command,
its Turing Complete which means brainfuck in theory is able to achieve the same results as other more verbose languages
like Python or C++. Brainfuck is based upon simple machine, which consist of byte array of size at least 30k, pointer 
pointing to the first element of the array at the start of the program, and the program itself to navigate through and modify memory.  
Language contains following 8 commands:  
| Command | Purpose | 
|---|---| 
| > | Increments current pointer |
| < | Decrements current pointer |
| + | Increments value at current pointer |
| - | Decrements value at current pointer |
| . | Outputs value at current pointer |
| , | Reads value and stores at current pointer |
| \[ | If value at current pointer is nonzero moves forward, otherwise jumps to corresponding \[ command |
| \] | If value at current pointer is nonzero jumps to corresponding \] command, moves forward otherwise |

For more information please use Wikipedia for [Brainfuck](https://en.wikipedia.org/wiki/Brainfuck).  
You can look [here](http://brainfuck.org/) for example source codes.
## How to build
To build Brainfuck interpreter start by calling `cmake .`, which will generate Makefile, then call `make` to build binary. 

## How to use
To run Brainfuck interpreter call `./brainfuck <codeFilePath>`.  
If supplied program doesn't stop, interpreter won't detect such  case and process has to be killed manually.