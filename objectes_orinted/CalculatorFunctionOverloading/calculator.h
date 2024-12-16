#pragma once
#include <iostream>
#include <string>
using namespace std;

class calculator {
public:
    // Integer addition (2 numbers)
    int add(int num1, int num2);

    // Integer addition (3 numbers)
    int add(int num1, int num2, int num3);

    // Float addition
    float add(float num1, float num2);

    // String concatenation
    string add(string a, string b);
};
