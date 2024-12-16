#pragma once
#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    // Setter for length
    void setLength(float len) {
        if (len >= 0)
            length = len;
        else
            cout << "Error: Length must be non-negative.\n";
    }

    // Getter for length
    float getLength() {
        return length;
    }

    // Setter for width
    void setWidth(float wid) {
        if (wid >= 0)
            width = wid;
        else
            cout << "Error: Width must be non-negative.\n";
    }

    // Getter for width
    float getWidth() {
        return width;
    }

    // Method to calculate area
    float getArea() {
        return length * width;
    }
};
