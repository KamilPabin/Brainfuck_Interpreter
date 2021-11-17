#include <string>
#include "Memory.h"
#include "NodeParser.h"

using namespace std;

int main() {
    string code = "++++++++++[>+++++++>++++++++++>+++>+<<<<-]>++.>+.+++++++..+++.>++.<<+++++++++++++++.>.+++.------.--------.>+.>.";
    auto *memory = new Memory();
    auto *nodeParser = new NodeParser();
    BodyNode *node = nodeParser->parseCode(&code);
    node->visit(memory);
    return 0;
}

