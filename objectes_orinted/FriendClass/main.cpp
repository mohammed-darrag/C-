
#include <iostream>
using namespace std;

class person {
private:
    string name;
    string gender;
    float age;

public:
    // Default constructor
    person() : name(""), gender(""), age(0) 
    {
    }

    // Parameterized constructor
    person(string n, string g, float a) : name(n), gender(g), age(a) 
    {
    }

    // Setter for name
    void set_name(string n) {
        name = n;
    }

    // Getter for name
    string get_name() {
        return name;
    }

    // Friend class to access private members
    friend class printclass;
};

class printclass {
public:
    // Print function to display person details
    void print(const person& p) {
        cout << "The basic data of the person:" << endl;
        cout << "Name: " << p.name << ", Age: " << p.age << ", Gender: " << p.gender << endl;
    }
};

int main() {
    // Creating a person object using the parameterized constructor
    person x("Ahmed", "Male", 5);
    printclass pc;

    // Using printclass to print person details
    pc.print(x);

    return 0;
}


****************************************************************************************************************
	