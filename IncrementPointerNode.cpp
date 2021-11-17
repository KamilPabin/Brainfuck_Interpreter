#include "IncrementPointerNode.h"

void IncrementPointerNode::visit(Memory memory) {
    memory.movePointerForward();
}
