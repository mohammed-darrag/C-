#pragma once

class Counter {
private:
    int count;

public:
    // Constructors
    Counter();
    Counter(int c);

    // Getter
    int get_count();

    // Overloaded operators
    Counter operator++();    // Prefix increment
    Counter operator++(int); // Postfix increment
};
