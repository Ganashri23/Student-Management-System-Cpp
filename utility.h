#ifndef UTILITY_H
#define UTILITY_H

#include <iostream>

using namespace std;

namespace Utility
{
    template <typename T>
    void displayValue(T value)
    {
        cout << "Value : " << value << endl;
    }
}

#endif