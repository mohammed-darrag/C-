#include <iostream>
#include <string>
using namespace std;

// Employee Class
class Employee {
private:
    string name;
    string job;
    float salary;

public:
    Employee(string n = "Unknown", string j = "Unknown", float s = 0.0)
        : name(n), job(j), salary(s) {}

    void set_name(string n) { name = n; }
    void set_job(string j) { job = j; }
    void set_salary(float s) { salary = s; }

    string get_name() { return name; }

    void display() {
        cout << "Employee Name: " << name << endl;
        cout << "Job: " << job << endl;
        cout << "Salary: $" << salary << endl;
    }
};

// Student Class
class Student {
private:
    string name; // Conflicts with Employee's name
    string department;
    string research_interest;

public:
    Student(string n = "Unknown", string d = "Unknown", string ri = "Unknown")
        : name(n), department(d), research_interest(ri) {}

    void set_name(string n) { name = n; }
    void set_department(string d) { department = d; }
    void set_research_interest(string ri) { research_interest = ri; }

    string get_name() { return name; }

    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Research Interest: " << research_interest << endl;
    }
};

// WorkingStudent Class (Derived from Employee and Student)
class WorkingStudent : public Employee, public Student {
public:
    WorkingStudent(string empName, string job, float salary,
                   string stuName, string department, string research_interest)
        : Employee(empName, job, salary), Student(stuName, department, research_interest) {}

    void set_name(string empName, string stuName) {
        Employee::set_name(empName); // Call Employee's set_name()
        Student::set_name(stuName);  // Call Student's set_name()
    }

    void display() {
        cout << "Working Student Details:" << endl;
        Employee::display(); // Call Employee's display()
        Student::display();  // Call Student's display()
    }
};

// Main Function
int main() {
    // Create a WorkingStudent object
    WorkingStudent ws("John Employee", "Software Engineer", 50000,
                      "John Student", "Computer Science", "AI");

    // Display details
    ws.display();

    // Update names separately
    ws.set_name("Jane Employee", "Jane Student");

    // Display updated details
    cout << "\nUpdated Working Student Details:" << endl;
    ws.display();

    return 0;
}
