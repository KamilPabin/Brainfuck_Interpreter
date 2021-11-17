#ifndef BRAINFUCK_NODEPARSER_H
#define BRAINFUCK_NODEPARSER_H


#include "BodyNode.h"
#include "DisplayNode.h"
#include "ReadValueNode.h"
#include "IncrementPointerNode.h"
#include "DecrementPointerNode.h"
#include "IncrementNode.h"
#include "DecrementNode.h"

#include <string>

class NodeParser {
public:
    BodyNode *readTree(std::string *code);

private:
    Node *readNode(const std::string *code, int *parsedCodeIndex) const;
};


#endif //BRAINFUCK_NODEPARSER_H
