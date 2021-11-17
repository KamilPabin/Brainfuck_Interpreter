#include "RootNode.h"

void RootNode::visit(Memory memory) {
    for (const auto &node: nodes) {
        node->visit(memory);
    }
}

void RootNode::addNode(Node *node) {
    this->nodes.push_back(node);
}
