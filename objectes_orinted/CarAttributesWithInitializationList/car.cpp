#include "car.h"
#include <iostream>

// Constructor using initialization list
car::car(string m, int mo, string c) : maker(m), model(mo), color(c) {}

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
