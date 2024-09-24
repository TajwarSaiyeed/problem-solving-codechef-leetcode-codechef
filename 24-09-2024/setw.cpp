/*
    Author: Tajwar Saiyeed
    Date: 2024-09-24 22:35:26
    File: setw.cpp
*/

#include <iostream>
#include <iomanip> // setw()

using namespace std;

class Manip
{
public:
    void setWidth();
};

void Manip::setWidth()
{
    cout << setw(10) << "Hello" << endl;
    cout << setw(10) << "World" << endl;
}

int main()
{
    Manip m;
    m.setWidth();
    return 0;
}