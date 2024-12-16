#include "distance.h"
#include <iostream>
using namespace std;

// Default constructor
Distance::Distance() : feet(0), inches(0.0) {
    cout << "Default constructor called\n";
}

// Parameterized constructor
Distance::Distance(int ft, float in) : feet(ft), inches(in) {
    cout << "Parameterized constructor called\n";
}

// Destructor
Distance::~Distance() {
    cout << "Destructor called\n";
}

// Setter function
void Distance::setDistance(int ft, float in) {
    feet = ft;
    inches = in;
}

// Print method
void Distance::print() {
    cout << "Feet = " << feet << "\tInches = " << inches << "\n";
}
