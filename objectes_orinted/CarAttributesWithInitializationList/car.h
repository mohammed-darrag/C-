#pragma once
#include <string>
using namespace std;

class car {
private:
    string maker;
    int model;
    string color;

public:
    // Constructor with initialization list
    car(string m, int mo, string c);

    // Setters
    void setmaker(string m);
    void setmodel(int mo);
    void setcolor(string c);

    // Getters
    string getmaker();
    int getmodel();
    string getcolor();
};
