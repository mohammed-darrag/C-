#include "counter.h"
#include <iostream>
using namespace std;

int main() {
    Counter c1(4);  // Initialize counter with 4
    Counter c2(5);  // Initialize counter with 5

    // Prefix increment
    Counter c3 = ++c1;
    cout << "c3.get_count(): " << c3.get_count() << endl; // Expected: 5

    // Postfix increment
    Counter c4 = c2++;
    cout << "c4.get_count(): " << c4.get_count() << endl; // Expected: 5
    cout << "c2.get_count() after postfix increment: " << c2.get_count() << endl; // Expected: 6

    return 0;
}
