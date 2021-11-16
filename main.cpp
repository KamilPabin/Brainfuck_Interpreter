#include <iostream>
#include <string>

using namespace std;

char memory[30000] = {0};
char *pointer = memory;

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
                pointer++;
                parsedCodeIndex++;
                break;
            case '<':
                pointer--;
                parsedCodeIndex++;
                break;
            case '+':
                (*pointer)++;
                parsedCodeIndex++;
                break;
            case '-':
                (*pointer)--;
                parsedCodeIndex++;
                break;
            case '.':
                cout << *pointer;
                parsedCodeIndex++;
                break;
            case ',':
                cin >> *pointer;
                parsedCodeIndex++;
                break;
            case '[':
                int closingLoopBracketOffsetFromOpeningBracket = findClosingLoopBracketOffset(code, parsedCodeIndex);
                string subCode = code.substr(parsedCodeIndex + 1, closingLoopBracketOffsetFromOpeningBracket - 1);
                while (*pointer != 0) {
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
