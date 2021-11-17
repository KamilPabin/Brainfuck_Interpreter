#ifndef BRAINFUCK_BODYNODE_H
#define BRAINFUCK_BODYNODE_H

#include <list>
#include "Node.h"

class BodyNode : Node {
private:
    std::list<Node *> nodes;

public:
    void visit(Memory memory) override;

    void addNode(Node *node);
};


#endif //BRAINFUCK_BODYNODE_H
