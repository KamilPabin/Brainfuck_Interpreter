#include "NodeParser.h"

BodyNode *NodeParser::parseCode(std::string *code) const {
    auto *rootNode = new BodyNode();
    unsigned long parsedCodeIndex = 0;
    while (code->length() != parsedCodeIndex) {
        Node *node = parseNode(code, &parsedCodeIndex);
        rootNode->addNode(node);
    }
    return rootNode;
}

Node *NodeParser::parseNode(const std::string *code, unsigned long *currentSymbolIndex) const {
    switch ((*code)[*currentSymbolIndex]) {
        case '>':
            (*currentSymbolIndex)++;
            return new IncrementPointerNode();
        case '<':
            (*currentSymbolIndex)++;
            return new DecrementPointerNode();
        case '+':
            (*currentSymbolIndex)++;
            return new IncrementNode();
        case '-':
            (*currentSymbolIndex)++;
            return new DecrementNode();
        case '.':
            (*currentSymbolIndex)++;
            return new DisplayNode();
        case ',':
            (*currentSymbolIndex)++;
            return new ReadValueNode();
        case '[': {
            std::string loopSubCode = findLoopBody(code, currentSymbolIndex);
            (*currentSymbolIndex) += loopSubCode.length() + 2;
            return new WhileLoopNode(parseCode(&loopSubCode));
        }
        case ']':
            throw std::invalid_argument(
                    "Syntax error: Unexpected closing bracket at position: " + std::to_string(*currentSymbolIndex + 1));
        default:
            (*currentSymbolIndex)++;
            break;
    }
    return nullptr;
}

std::string NodeParser::findLoopBody(const std::string *code, const unsigned long *currentSymbolIndex) const {
    int numberOfUnclosedLoops = 0;
    int readSymbols = 0;
    do {
        if ((*code)[*currentSymbolIndex + readSymbols] == '[') numberOfUnclosedLoops++;
        if ((*code)[*currentSymbolIndex + readSymbols] == ']') numberOfUnclosedLoops--;
        readSymbols++;
        if (readSymbols + *currentSymbolIndex > code->length()) {
            throw std::invalid_argument(
                    "Syntax error: unclosed bracket at position: " + std::to_string(*currentSymbolIndex + 1));
        }
    } while (numberOfUnclosedLoops != 0);
    return code->substr(*currentSymbolIndex + 1, readSymbols - 2);
}
