#include <iostream>

#include "Student.h"
#include "GraduateStudent.h"
#include "Utility.h"

using namespace std;

int main()
{
    cout << "===== STUDENT MANAGEMENT SYSTEM =====" << endl;

    cout << "\n--- Default Constructor ---" << endl;

    Student s1;
    s1.display();


    cout << "\n--- Parameterized Constructor ---" << endl;

    Student s2(101, "Ganashri", 85.5);
    s2.display();


    cout << "\n--- Copy Constructor ---" << endl;

    Student s3(s2);
    s3.display();


    cout << "\n--- Graduate Student ---" << endl;

    GraduateStudent g1(102, "Rahul", 90.5,
                       "Embedded Systems");

    g1.display();


    cout << "\n--- Polymorphism ---" << endl;

    Person *ptr;

    ptr = new GraduateStudent(103, "Anu", 92.5,
                              "C++ Project");

    ptr->display();

    delete ptr;


    cout << "\n--- Template Function ---" << endl;

    Utility::displayValue(100);
    Utility::displayValue(85.5);
    Utility::displayValue("C++");


    cout << "\n--- Program End ---" << endl;

    return 0;
}