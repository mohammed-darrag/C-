#include "counter.h"

// Default constructor
Counter::Counter() : count(0) {}

// Parameterized constructor
Counter::Counter(int c) : count(c) {}

// Getter for count
int Counter::get_count() {
    return count;
}

// Prefix increment operator
Counter Counter::operator++() {
    ++count; // Increment count
    return Counter(count); // Return updated object
}

// Postfix increment operator
Counter Counter::operator++(int) {
    Counter temp = *this; // Store current state
    count++;              // Increment count
    return temp;          // Return original state
}
