#ifndef BRAINFUCK_INCREMENTNODE_H
#define BRAINFUCK_INCREMENTNODE_H


#include "Node.h"

class IncrementNode : public Node {
public:
    void visit(Memory *memory) override;
};


#endif //BRAINFUCK_INCREMENTNODE_H
