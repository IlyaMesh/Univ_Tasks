//
// Created by ilya on 22.02.2020.
//

#include <clocale>

char * mystrchr (const char * str, int character){
    int i = 0;
    while (str[i] && str[i] != character) ++i;
    return character == str[i] ? (char*)str + i : NULL;
}

