#pragma once
#include "person.h"
#include <string>

class student : public person {
private:
    int level;
    float GPA;
    string depart;

public:
    // Parameterized Constructor
    student(string n, string g, float a, int l, float gp, string d) : person(n, g, a) {
        level = l;
        GPA = gp;
        depart = d;
    }

    // Setters
    void set_level(int l) { level = l; }
    void set_gpa(float g) { GPA = g; }
    void set_depart(string d) { depart = d; }

    // Getters
    string get_depart() { return depart; }

    // Overridden Display Method
    void display() override {
        person::display(); // Call base class display
        cout << "Student's Additional Data:" << endl;
        cout << "Level: " << level << ", GPA: " << GPA << ", Department: " << depart << endl;
    }
};
