#include <iostream>
#include "distance.h"
using namespace std;

int main() {
    // Create two Distance objects
    Distance d1(5, 11);
    Distance d2(3, 4);

    // Use overloaded + operator
    Distance d3 = d1 + d2;

    // Use overloaded - operator
    Distance d4 = d1 - d2;

    // Display results
    cout << "Result of d1 + d2:" << endl;
    d3.print();

    cout << "Result of d1 - d2:" << endl;
    d4.print();

    return 0;
}
