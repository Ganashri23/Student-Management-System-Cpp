#include "Student.h"

Student::Student()
{
    roll = 0;
    name = "Unknown";
    marks = 0;
}

Student::Student(int r, string n, float m) : Person(n)
{
    roll = r;
    marks = m;
}

Student::Student(const Student &s) : Person(s.name)
{
    roll = s.roll;
    marks = s.marks;
}

Student::~Student()
{
    cout << "Student Destructor called for Roll No: "
         << roll << endl;
}

void Student::setData(int r, string n, float m)
{
    roll = r;
    name = n;
    marks = m;
}

int Student::getRoll()
{
    return roll;
}

string Student::getName()
{
    return name;
}

float Student::getMarks()
{
    return marks;
}

void Student::display()
{
    cout << "Roll No : " << roll << endl;
    cout << "Name    : " << name << endl;
    cout << "Marks   : " << marks << endl;
}