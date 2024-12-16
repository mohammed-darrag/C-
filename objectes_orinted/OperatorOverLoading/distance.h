#pragma once
#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    // Constructors
    Distance();
    Distance(int f, int i);

    // Operator Overloading
    Distance operator+(Distance d2); // Overload +
    Distance operator-(Distance d2); // Overload -

    // Print method
    void print();
};
