#ifndef BRAINFUCK_DECREMENTPOINTERNODE_H
#define BRAINFUCK_DECREMENTPOINTERNODE_H


#include "Node.h"

class DecrementPointerNode : public Node {
public:
    void visit(Memory memory) override;
};


#endif //BRAINFUCK_DECREMENTPOINTERNODE_H
