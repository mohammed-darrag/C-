#pragma once
#include <string>
#include <iostream>
using namespace std;

class person {
private:
    string name;
    string gender;
    float age;

public:
    // Default Constructor
    person() : name("unknown"), gender("unknown"), age(0) {}

    // Parameterized Constructor
    person(string n, string g, float a) : name(n), gender(g), age(a) {}

    // Setters
    void set_name(string n) { name = n; }
    void set_gender(string g) { gender = g; }
    void set_age(float a) { age = a; }

    // Getters
    string get_name() { return name; }
    string get_gender() { return gender; }
    float get_age() { return age; }

    // Virtual Display Method
    virtual void display() {
        cout << "Person's Basic Data:" << endl;
        cout << "Name: " << name << ", Age: " << age << ", Gender: " << gender << endl;
    }
};
