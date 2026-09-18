#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

class Student : public Person
{
    private:
        int roll;
        float marks;

    public:
        Student();

        Student(int r, string n, float m);

        Student(const Student &s);

        ~Student();

        void display() override;

        void setData(int r, string n, float m);

        int getRoll();
        string getName();
        float getMarks();
};

#endif