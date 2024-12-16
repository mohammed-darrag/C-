#include "car.h"
#include <iostream>
using namespace std;

// Initialize the static counter
int car::counter = 0;

// Setter for maker
void car::setmaker(string m) {
    maker = m;
}

// Getter for maker
string car::getmaker() {
    return maker;
}

// Setter for model
void car::setmodel(int mo) {
    model = mo;
}

// Getter for model
int car::getmodel() {
    return model;
}

// Setter for color
void car::setcolor(string c) {
    color = c;
}

// Getter for color
string car::getcolor() {
    return color;
}

// Method to return the current value of the counter
int car::car_counter() {
    return counter;
}

// Default constructor
car::car() : maker("Porsh"), model(2020), color("Yellow") {
    counter++;
}

// Parameterized constructor
car::car(string m, int mo, string c) : maker(m), model(mo), color(c) {
    counter++;
}

// Destructor
car::~car() {
    cout << "The object lifetime has ended.\n";
    counter--;
}
