
car.cpp

#include "car.h"
#include <iostream>



void car::setmaker(string m)
{
    maker = m;
}

string car::getmaker()
{
    return maker;
}

void car::setmodel(int mo)
{
    model = mo;
}

int car::getmodel()
{
    return model;
}

void car::setcolor(string c)
{
    color = c;
}

string car::getcolor()
{
    return color;
}

car::car():maker("porsh"),model(2020),color("yello")
{
}

car::car(string m, int mo, string c):maker(m),model(mo),color(c)
{
}

car::~car()
{
    cout << "the object life time is ended ";

}