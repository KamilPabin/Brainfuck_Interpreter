#include "DecrementPointerNode.h"

void DecrementPointerNode::visit(Memory *memory) {
    memory->movePointerBackward();
}
