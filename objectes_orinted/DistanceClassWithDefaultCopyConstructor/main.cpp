#include <iostream>
#include "distance.h"
using namespace std;

int main() {
    // Default constructor
    Distance d1;

    // Parameterized constructor
    Distance d2(5, 4.3);

    // Default copy constructor: Copies values of d2 into d3
    Distance d3(d2);
    cout << "After copying d2 to d3:\n";
    d3.print();

    // Modify d3 using setter
    d3.setDistance(12, 4.98);

    // Default copy constructor: Copies d3 into d4
    Distance d4 = d3;
    cout << "After copying d3 to d4:\n";
    d4.print();

    return 0;
}
