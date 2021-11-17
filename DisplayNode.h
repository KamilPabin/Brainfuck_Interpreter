#ifndef BRAINFUCK_DISPLAYNODE_H
#define BRAINFUCK_DISPLAYNODE_H

#include "Node.h"
#include <iostream>


class DisplayNode : public Node {
public:
    void visit(Memory memory) override;
};


#endif //BRAINFUCK_DISPLAYNODE_H
