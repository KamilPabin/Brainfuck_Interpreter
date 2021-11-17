#include "ReadValueNode.h"

void ReadValueNode::visit(Memory *memory) {
    char value;
    std::cin >> value;
    memory->putValue(value);
}
