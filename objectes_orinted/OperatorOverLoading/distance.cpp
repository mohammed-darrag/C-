#include "distance.h"
#include <iostream>
using namespace std;

// Default constructor
Distance::Distance() : feet(0), inches(0) {}

// Parameterized constructor
Distance::Distance(int f, int i) : feet(f), inches(i) {}

// Overload + operator
Distance Distance::operator+(Distance d2) {
    int f = feet + d2.feet;
    int i = inches + d2.inches;

    // Normalize inches (convert to feet if inches >= 12)
    if (i >= 12) {
        f += i / 12;
        i %= 12;
    }

    return Distance(f, i);
}

// Overload - operator
Distance Distance::operator-(Distance d2) {
    int f = feet - d2.feet;
    int i = inches - d2.inches;

    // Normalize inches (handle negative inches)
    if (i < 0) {
        f -= 1;
        i += 12;
    }

    return Distance(f, i);
}

// Print method
void Distance::print() {
    cout << "Feet = " << feet << "\tInches = " << inches << "\n";
}
