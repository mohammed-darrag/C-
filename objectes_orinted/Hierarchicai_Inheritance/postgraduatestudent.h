#pragma once
#include "student.h"

class postgraduatedstudent : public student {
private:
    string research_interest;

public:
    // Default Constructor
    postgraduatedstudent() : student(), research_interest("unknown") {}

    // Parameterized Constructor
    postgraduatedstudent(string n, string g, float a, int l, float gp, string d, string ra)
        : student(n, g, a, l, gp, d), research_interest(ra) {}

    // Setter for research interest
    void set_research_interest(string rarea) { research_interest = rarea; }

    // Getter for research interest
    string get_research_interest() { return research_interest; }

    // Overridden Display method
    virtual void display() override {
        student::display(); // Call student display method
        cout << "Research Interest: " << research_interest << endl;
    }
};
