#include <iostream>
#include <string>
#include<string.h>
#include "mystrchr.h"

using namespace std;

int main() {
    char *inputString = new char[128];
    char symbol;
    while (true) {
        cout << "Enter q to quit \n"<<"-------------- \n"<< "Enter the string \n";
        scanf("%s", inputString);
        if (!strcmp(inputString,"q")) {
            cout << "Quit";
            return 0;
        }
        cout << "Enter symbol that you wanna find \n";
        cin >> symbol;
        char *result = mystrchr(inputString, symbol);
        result == NULL ? cout << "Symbol wasn't found\n" : cout <<"Answer: "<<result<<'\n';
    }
}
