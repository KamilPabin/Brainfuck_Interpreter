#ifndef BRAINFUCK_MEMORY_H
#define BRAINFUCK_MEMORY_H


class Memory {
private:
    char memory[30000] = {0};
    char *head = memory;

public:
    void movePointerForward();

    void movePointerBackward();

    char readValue();

    void putValue(char value);

    void increment();

    void decrement();
};


#endif //BRAINFUCK_MEMORY_H
