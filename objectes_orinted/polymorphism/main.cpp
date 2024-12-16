
#include <iostream>
#include <string>
using namespace std;

// Base class
class Shape 
{
protected:
    string color;
public:
    Shape(string c) : color(c)
    {
    
    }

    virtual int area() 
    {
        cout << "Parent class area: " << endl;
        return 0;
    }

    virtual void draw()
    {
        cout << "Draw Parent Shape in " << color << " color" << endl;
    }

    virtual void erase() 
    {
        cout << "Erase The Parent Shape" << endl;
    }

    
};

// Derived class: Circle
class Circle : public Shape 
{
private:
    int radius;
public:
    Circle(int r, string c) : Shape(c), radius(r)
    {
    
    }

    int area() 
    {
        cout << "Circle area: " << 3.14 * (radius * radius) << endl;
        return (3.14 * radius * radius);
    }

    void draw() 
    {
        cout << "Draw Circle in " << color << " color" << endl;
    }

    void erase() 
    {
        cout << "The Circle Erased" << endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    int length, width;
public:
    Rectangle(int l, int w, string c) : Shape(c), length(l), width(w) {}

    int area() 
    {
        cout << "Rectangle area: " << length * width << endl;
        return (length * width);
    }

    void draw() 
    {
        cout << "Draw Rectangle in " << color << " color" << endl;
    }

    void erase() 
	{
        cout << "The Rectangle Erased" << endl;
    }
};



// Main function
int main()
{
    Shape* shape_ptr;  // Base class pointer
    Rectangle rec(10, 7, "Red");
    Circle c(5, "Yellow");

    // Point to Rectangle object
    shape_ptr = &rec;
    shape_ptr->area();
    shape_ptr->draw();

    // Point to Circle object
    shape_ptr = &c;
    shape_ptr->area();
    shape_ptr->draw();

   

    return 0;
}

.