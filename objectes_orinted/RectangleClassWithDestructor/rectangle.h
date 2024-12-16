#pragma once
#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    // Constructor with initialization list
    Rectangle(float len, float wid);

    // Destructor
    ~Rectangle();

    // Setter and Getter for length
    void setLength(float len);
    float getLength();

    // Setter and Getter for width
    void setWidth(float wid);
    float getWidth();

    // Method to calculate the area
    float getArea();
};
