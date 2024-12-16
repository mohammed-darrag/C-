#include <iostream>
#include "student.h"
using namespace std;

int main() {
    // Create a student object using the parameterized constructor
    student s1("Ahmed", "Male", 15, 3, 3.5, "IS");

    // Call the display method (function overriding)
    s1.display();

    return 0;
}
