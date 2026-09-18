#include "Person.h"

Person::Person()
{
    name = "Unknown";
}

Person::Person(string n)
{
    name = n;
}

Person::~Person()
{
    cout << "Person Destructor called" << endl;
}