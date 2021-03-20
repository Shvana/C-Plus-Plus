//
// Created by Shvana on 19/03/2021.
//
#include <iostream>

namespace my_code {
    void foo (){
        std::cout << "foo() called in the namespace" << std::endl;
    }
}
using namespace my_code;
int main() {
    my_code::foo(); // Calls the "foo" function in the "mycode" namespace
    foo(); // implies mycode::foo();
}