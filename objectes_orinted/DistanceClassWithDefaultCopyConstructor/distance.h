#pragma once
#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    Distance();               // Default constructor
    Distance(int ft, float in); // Parameterized constructor
    ~Distance();              // Destructor

    void setDistance(int ft, float in); // Setter
    void print();             // Print method
};
