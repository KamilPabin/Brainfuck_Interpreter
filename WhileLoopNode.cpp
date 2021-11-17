#include "WhileLoopNode.h"

void WhileLoopNode::visit(Memory *memory) {
    while (memory->readValue() != 0) {
        this->body->visit(memory);
    }
}

WhileLoopNode::WhileLoopNode(BodyNode *body) {
    this->body = body;
}
