#include "DecrementNode.h"

void DecrementNode::visit(Memory *memory) {
    memory->decrement();
}
