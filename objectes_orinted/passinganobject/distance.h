#pragma once
#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    Distance();                    // Default constructor
    Distance(int ft, float in);    // Parameterized constructor
    ~Distance();                   // Destructor

    void setDistance(int ft, float in);         // Setter
    Distance add_distance(Distance d2);         // Method to add two Distance objects
    void print();                               // Print method
};
