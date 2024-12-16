#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class car {
private:
    string maker;  // Car manufacturer
    int model;     // Car model year
    string color;  // Car color

public:
    // Setter for maker
    void setmaker(string m);

    // Getter for maker
    string getmaker();

    // Setter for model
    void setmodel(int m);

    // Getter for model
    int getmodel();

    // Setter for color
    void setcolor(string c);

    // Getter for color
    string getcolor();
};

#endif
