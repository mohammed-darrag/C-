#include "calculator.h"

// Integer addition with two parameters
int calculator::add(int num1, int num2) {
    return num1 + num2;
}

// Integer addition with three parameters
int calculator::add(int num1, int num2, int num3) {
    return num1 + num2 + num3;
}

// Float addition
float calculator::add(float num1, float num2) {
    return num1 + num2;
}

// String concatenation
string calculator::add(string a, string b) {
    return a + " " + b;
}
