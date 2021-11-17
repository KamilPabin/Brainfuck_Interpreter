#ifndef BRAINFUCK_DECREMENTNODE_H
#define BRAINFUCK_DECREMENTNODE_H


#include "Node.h"

class DecrementNode : public Node {

public:
    void visit(Memory *memory) override;
};


#endif //BRAINFUCK_DECREMENTNODE_H
