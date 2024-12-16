#include "rectangle.h"

// Constructor using initialization list
Rectangle::Rectangle(float len, float wid) : length(len), width(wid) {
    cout << "Rectangle created with dimensions " << length << " x " << width << endl;
}

// Destructor
Rectangle::~Rectangle() {
    cout << "Rectangle with dimensions " << length << " x " << width << " is being destroyed." << endl;
}

// Setter for length
void Rectangle::setLength(float len) {
    if (len >= 0)
        length = len;
    else
        cout << "Error: Length must be non-negative.\n";
}

// Getter for length
float Rectangle::getLength() {
    return length;
}

// Setter for width
void Rectangle::setWidth(float wid) {
    if (wid >= 0)
        width = wid;
    else
        cout << "Error: Width must be non-negative.\n";
}

// Getter for width
float Rectangle::getWidth() {
    return width;
}

// Method to calculate area
float Rectangle::getArea() {
    return length * width;
}
