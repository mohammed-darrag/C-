#pragma once
#include <string>
using namespace std;

class car {
private:
    string maker;
    int model;
    string color;
    static int counter; // Static variable to count car objects

public:
    // Setter and Getter for maker
    void setmaker(string m);
    string getmaker();

    // Setter and Getter for model
    void setmodel(int mo);
    int getmodel();

    // Setter and Getter for color
    void setcolor(string c);
    string getcolor();

    // Method to return the object counter
    int car_counter();

    // Constructors and Destructor
    car();
    car(string m, int mo, string c);
    ~car();
};
