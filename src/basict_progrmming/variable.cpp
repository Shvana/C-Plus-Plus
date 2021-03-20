//
// Created by Shvana on 19/03/2021.
//
#include <iostream>
using namespace std;

int main() {
    int uninitializedInt;
    int initializedInt{ 7 };

    cout << "{} is a random value" << uninitializedInt << endl;
    cout << "{} was assigned an initial value "<< initializedInt <<endl;
}