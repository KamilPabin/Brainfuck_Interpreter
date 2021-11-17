#ifndef BRAINFUCK_ROOTNODE_H
#define BRAINFUCK_ROOTNODE_H

#include <list>
#include "Node.h"

class RootNode : Node {
private:
    std::list<Node *> nodes;

public:
    void visit(Memory memory) override;

    void addNode(Node *node);
};


#endif //BRAINFUCK_ROOTNODE_H
