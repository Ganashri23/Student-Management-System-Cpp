#ifndef GRADUATESTUDENT_H
#define GRADUATESTUDENT_H

#include "Student.h"

class GraduateStudent : public Student
{
    private:
        string project;

    public:
        GraduateStudent();

        GraduateStudent(int r, string n, float m, string p);

        ~GraduateStudent();

        void display() override;
};

#endif