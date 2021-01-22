//
// Created by Shvana on 21/01/2021.
//

//Preprocessor
//Everything that is defined using the #define directive is called a macro.

#define NUMBER 56
#include <iostream>

int main() {
    int P = NUMBER + 1;
    std::cout << P << std::endl;
    return 0;
}
