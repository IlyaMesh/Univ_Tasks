#include <iostream>
#include <string>
#include "mystrchr.h"

using namespace std;

int main() {
    char* inputString = new char[128];
    char symbol;
    cout << "Input string \n";
    scanf("%s",inputString);
    cout << "Input symbol that u wanna find \n";
    cin >> symbol;
    cout << mystrchr(inputString,symbol);
    return 0;
}
