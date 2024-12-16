#include "rectangle.h"
#include <iostream>
using namespace std;

int main() {
    // Create a Rectangle object using the constructor
    Rectangle myRectangle(5.0, 3.0);

    // Display initial dimensions and area
    cout << "Initial Rectangle Dimensions:" << endl;
    cout << "Length: " << myRectangle.getLength() << endl;
    cout << "Width: " << myRectangle.getWidth() << endl;
    cout << "Area: " << myRectangle.getArea() << endl;

    // Modify dimensions
    myRectangle.setLength(10.0);
    myRectangle.setWidth(6.0);

    // Display updated dimensions and area
    cout << "\nUpdated Rectangle Dimensions:" << endl;
    cout << "Length: " << myRectangle.getLength() << endl;
    cout << "Width: " << myRectangle.getWidth() << endl;
    cout << "Area: " << myRectangle.getArea() << endl;

    return 0; // Destructor will automatically be called here
}
