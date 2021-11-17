#ifndef BRAINFUCK_NODE_H
#define BRAINFUCK_NODE_H

#include "Memory.h"

class Node {
public:
    virtual void visit(Memory *memory) = 0;
};


#endif //BRAINFUCK_NODE_H
