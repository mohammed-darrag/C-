#include "distance.h"
#include <iostream>
using namespace std;

// Default constructor
Distance::Distance() : feet(0), inches(0.0) {
}

// Parameterized constructor
Distance::Distance(int ft, float in) : feet(ft), inches(in) {
}

// Destructor
Distance::~Distance() {
}

// Setter function
void Distance::setDistance(int ft, float in) {
    feet = ft;
    inches = in;
}

// Add two Distance objects and return the result
Distance Distance::add_distance(Distance d2) {
    Distance result;
    result.feet = feet + d2.feet;
    result.inches = inches + d2.inches;

    // Normalize inches if >= 12
    if (result.inches >= 12) {
        result.feet += static_cast<int>(result.inches) / 12;
        result.inches = static_cast<int>(result.inches) % 12;
    }

    return result;
}

// Print method
void Distance::print() {
    cout << "Feet = " << feet << "\t" << "Inches = " << inches << "\n";
}
