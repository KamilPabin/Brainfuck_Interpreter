#include "Memory.h"

void Memory::decrement() {
    (*this->head)--;
}

void Memory::increment() {
    (*this->head)++;
}

void Memory::putValue(char value) {
    (*this->head) = value;
}

char Memory::readValue() {
    return *(this->head);
}

void Memory::movePointerBackward() {
    this->head--;
}

void Memory::movePointerForward() {
    this->head++;
}
