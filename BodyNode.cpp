#include "BodyNode.h"

void BodyNode::visit(Memory *memory) {
    for (const auto &node: nodes) {
        node->visit(memory);
    }
}

void BodyNode::addNode(Node *node) {
    if (node != nullptr) {
        this->nodes.push_back(node);
    }
}
