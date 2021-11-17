#ifndef BRAINFUCK_INCREMENTPOINTERNODE_H
#define BRAINFUCK_INCREMENTPOINTERNODE_H


#include "Node.h"

class IncrementPointerNode : public Node {
public:
    void visit(Memory *memory) override;
};


#endif //BRAINFUCK_INCREMENTPOINTERNODE_H
