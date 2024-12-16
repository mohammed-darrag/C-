#include <iostream>
#include "calculator.h"
using namespace std;

int main() {
    calculator cal;

    // Test integer addition (two arguments)
    cout << "This is version 1: " << cal.add(5, 3) << "\n";

    // Test integer addition (three arguments)
    cout << "This is version 2: " << cal.add(5, 3, 5) << "\n";

    // Test float addition
    cout << "This is version 3: " << cal.add(4.2f, 3.7f) << "\n";

    // Test string addition (concatenation)
    cout << "This is version 4: " << cal.add("Object", "Oriented") << "\n";

    return 0;
}
