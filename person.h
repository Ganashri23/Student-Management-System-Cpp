#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;

class Person
{
    protected:
        string name;

    public:
        Person();
        Person(string n);

        virtual void display() = 0;

        virtual ~Person();
};

#endif