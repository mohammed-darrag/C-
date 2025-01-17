#include "rectangle.h"

int main() {
    Rectangle rect;

    // Initialize dimensions using setters
    rect.setLength(5.0);
    rect.setWidth(3.0);

    // Output initial dimensions and area
    cout << "Initial dimensions:\n";
    cout << "Length: " << rect.getLength() << "\n";
    cout << "Width: " << rect.getWidth() << "\n";
    cout << "Area: " << rect.getArea() << "\n\n";

    // Modify dimensions
    rect.setLength(7.0);
    rect.setWidth(4.0);

    // Output updated dimensions and area
    cout << "Updated dimensions:\n";
    cout << "Length: " << rect.getLength() << "\n";
    cout << "Width: " << rect.getWidth() << "\n";
    cout << "Area: " << rect.getArea() << "\n";

    return 0;
}
