#include "NodeParser.h"

BodyNode *NodeParser::readTree(std::string *code) {
    auto *rootNode = new BodyNode();
    int parsedCodeIndex = 0;
    while (code->length() != parsedCodeIndex) {
        Node *node = readNode(code, &parsedCodeIndex);
        rootNode->addNode(node);
    }
    return rootNode;
}

Node *NodeParser::readNode(const std::string *code, int *parsedCodeIndex) const {
    switch ((*code)[*parsedCodeIndex]) {
        case '>':
            (*parsedCodeIndex)++;
            return new IncrementPointerNode();
        case '<':
            (*parsedCodeIndex)++;
            return new DecrementPointerNode();
        case '+':
            (*parsedCodeIndex)++;
            return new IncrementNode();
        case '-':
            (*parsedCodeIndex)++;
            return new DecrementNode();
        case '.':
            (*parsedCodeIndex)++;
            return new DisplayNode();
        case ',':
            (*parsedCodeIndex)++;
            return new ReadValueNode();
        case '[':
            break;
    }
}