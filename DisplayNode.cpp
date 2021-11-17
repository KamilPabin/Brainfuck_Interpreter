#include "DisplayNode.h"

void DisplayNode::visit(Memory *memory) {
    std::cout << memory->readValue();
}
