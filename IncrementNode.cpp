#include "IncrementNode.h"

void IncrementNode::visit(Memory memory) {
    memory.increment();
}
