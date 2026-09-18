#include "GraduateStudent.h"

GraduateStudent::GraduateStudent()
{
    project = "Not Assigned";
}

GraduateStudent::GraduateStudent(int r, string n, float m, string p)
    : Student(r, n, m)
{
    project = p;
}

GraduateStudent::~GraduateStudent()
{
    cout << "GraduateStudent Destructor called" << endl;
}

void GraduateStudent::display()
{
    cout << "Roll No : " << getRoll() << endl;
    cout << "Name    : " << getName() << endl;
    cout << "Marks   : " << getMarks() << endl;
    cout << "Project : " << project << endl;
}