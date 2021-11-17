#include <iostream>
#include <string>
#include "Memory.h"

using namespace std;

Memory memory;

void runCode(const string &code);

int findClosingLoopBracketOffset(const string &code, int position);

int main() {
    string code = "++++++++++[>+++++++>++++++++++>+++>+<<<<-]>++.>+.+++++++..+++.>++.<<+++++++++++++++.>.+++.------.--------.>+.>.";
    runCode(code);
    return 0;
}

void runCode(const string &code) {
    int parsedCodeIndex = 0;
    while (code.length() != parsedCodeIndex) {
        switch (code[parsedCodeIndex]) {
            case '>':
                memory.movePointerForward();
                parsedCodeIndex++;
                break;
            case '<':
                memory.movePointerBackward();
                parsedCodeIndex++;
                break;
            case '+':
                memory.increment();
                parsedCodeIndex++;
                break;
            case '-':
                memory.decrement();
                parsedCodeIndex++;
                break;
            case '.':
                cout << memory.readValue();
                parsedCodeIndex++;
                break;
            case ',':
                char val;
                cin >> val;
                memory.putValue(val);
                parsedCodeIndex++;
                break;
            case '[':
                int closingLoopBracketOffsetFromOpeningBracket = findClosingLoopBracketOffset(code, parsedCodeIndex);
                string subCode = code.substr(parsedCodeIndex + 1, closingLoopBracketOffsetFromOpeningBracket - 1);
                while (memory.readValue() != 0) {
                    runCode(subCode);
                }
                parsedCodeIndex += closingLoopBracketOffsetFromOpeningBracket + 1;
                break;
        }
    }
}

int findClosingLoopBracketOffset(const string &code, int position) {
    int a = 1;
    int numberOfSteps = 1;
    while (a != 0) {
        if (code[position + numberOfSteps] == '[') a++;
        if (code[position + numberOfSteps] == ']') a--;
        numberOfSteps++;
    }
    return numberOfSteps - 1;
}
