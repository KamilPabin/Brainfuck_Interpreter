#include <string>
#include "Memory.h"
#include "NodeParser.h"
#include <fstream>

using namespace std;

string readCode(char *string);


int main(int argc, char *argv[]) {
    if (argc == 1) {
        cerr << "Please specify path to your program";
        return 2;
    }
    if (argc > 2) {
        cerr << "Path to only one file is supported";
        return 1;
    }
    string code = readCode(argv[1]);
    auto *memory = new Memory();
    auto *nodeParser = new NodeParser();
    BodyNode *node = nodeParser->parseCode(&code);
    node->visit(memory);
    return 0;
}

string readCode(char *fileName) {
    string code;
    string line;
    ifstream file(fileName);
    while (getline(file, line)) {
        code = code.append(line);
    }
    return code;
}

