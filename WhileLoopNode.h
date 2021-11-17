#ifndef BRAINFUCK_WHILELOOPNODE_H
#define BRAINFUCK_WHILELOOPNODE_H


#include "Node.h"
#include "BodyNode.h"

class WhileLoopNode : public Node {
public:
    void visit(Memory *memory) override;

    WhileLoopNode(BodyNode *body);

private:
    BodyNode *body;
};


#endif //BRAINFUCK_WHILELOOPNODE_H
