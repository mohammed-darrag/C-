#include <iostream>
#include "distance.h"
using namespace std;

int main() {
    // Create two Distance objects
    Distance obj1(5, 3.5);
    Distance obj2(7, 9.8);

    // Add the two Distance objects
    Distance final = obj1.add_distance(obj2);

    // Display the result
    cout << "The sum of distances is:\n";
    final.print();

    return 0;
}
