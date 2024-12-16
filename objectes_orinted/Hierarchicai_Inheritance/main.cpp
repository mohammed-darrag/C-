#include <iostream>
#include "postgraduatedstudent.h"
using namespace std;

int main() {
    // Create a postgraduate student object using the parameterized constructor
    postgraduatedstudent pgStudent("Sara", "female", 25, 2, 3.9, "Computer Science", "Artificial Intelligence");
    pgStudent.display();

    // Modify postgraduate student's attributes
    pgStudent.set_name("Mona");
    pgStudent.set_age(26);
    pgStudent.set_gender("female");
    pgStudent.set_level(3);
    pgStudent.set_gpa(4.0);
    pgStudent.set_depart("Data Science");
    pgStudent.set_research_interest("Machine Learning");

    // Display the updated postgraduate student data
    cout << "\nUpdated Postgraduate Student Data:" << endl;
    pgStudent.display();

    return 0;
}
