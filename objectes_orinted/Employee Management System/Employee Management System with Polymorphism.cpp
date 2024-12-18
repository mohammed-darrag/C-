#include <iostream>
using namespace std;

class employee
{
protected: 
    string name;
    int emp_id;
    float salary;

public:
    employee() : name("unknown"), emp_id(0), salary(0.0) // Default constructor
    {
    }

    employee(string n, int id, float s) // Parameterized constructor
    {
        name = n;
        emp_id = id;
        salary = s;
    }

    virtual float get_total_salary() = 0; // Pure virtual function
    virtual void print() // Virtual function
    {
        cout << "name = " << name << ", emp_id = " << emp_id << ", salary = " << salary << endl;
    }
};

class sales : public employee
{
private:
    float gross_sales;
    float commision_rate;

public:
    sales(string n, int id, float s, float gs, float cr) : employee(n, id, s)
    {
        gross_sales = gs;
        commision_rate = cr;
    }

    float get_total_salary()
    {
        return salary + gross_sales * commision_rate;
    }

    void print()
    {
        employee::print();
        cout << "commision_rate = " << commision_rate << ", gross_sales = " << gross_sales << endl;
    }
};

class engineer : public employee
{
private:
    string speciality;
    int experience;
    int overtime_hours;
    float overtime_hours_rate;

public:
    engineer(string n, int id, float s, string sp, int e, int oh, float ohr) : employee(n, id, s)
    {
        speciality = sp;
        experience = e;
        overtime_hours = oh;
        overtime_hours_rate = ohr;
    }

    float get_total_salary()
    {
        return salary + (overtime_hours * overtime_hours_rate);
    }

    void print()
    {
        employee::print();
        cout << "speciality = " << speciality << ", experience = " << experience
             << ", overtime_hours = " << overtime_hours << ", overtime_hours_rate = " << overtime_hours_rate << endl;
    }
};

int main()
{
    employee* emp_ptr;
    sales s1("MARKUS", 120, 5000, 100000, 0.10);
    engineer e1("FABIAN", 150, 7000, "software_engineer", 5, 10, 50);

    emp_ptr = &s1;
    cout << "Total Salary: " << emp_ptr->get_total_salary() << endl;
    emp_ptr->print();

    emp_ptr = &e1;
    cout << "Total Salary: " << emp_ptr->get_total_salary() << endl;
    emp_ptr->print();

    return 0;
}
