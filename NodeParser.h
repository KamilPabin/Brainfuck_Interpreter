#ifndef BRAINFUCK_NODEPARSER_H
#define BRAINFUCK_NODEPARSER_H


#include "BodyNode.h"
#include "DisplayNode.h"
#include "ReadValueNode.h"
#include "IncrementPointerNode.h"
#include "DecrementPointerNode.h"
#include "IncrementNode.h"
#include "DecrementNode.h"
#include "WhileLoopNode.h"

#include <string>

class NodeParser {
public:
    BodyNode *parseCode(std::string *code) const;

private:
    Node *parseNode(const std::string *code, unsigned long *currentSymbolIndex) const;

    std::string findLoopBody(const std::string *code, const unsigned long *currentSymbolIndex) const;
};


#endif //BRAINFUCK_NODEPARSER_H
