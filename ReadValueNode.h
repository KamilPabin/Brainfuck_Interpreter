#ifndef BRAINFUCK_READVALUENODE_H
#define BRAINFUCK_READVALUENODE_H


#include "Node.h"
#include "iostream"

class ReadValueNode : public Node {
public:
    void visit(Memory *memory) override;
};


#endif //BRAINFUCK_READVALUENODE_H
