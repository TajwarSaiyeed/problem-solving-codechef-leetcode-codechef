/*
    Author: Tajwar Saiyeed
    Date: 2024-08-28 12:41:11
    File: even_odd.cpp
*/

#include <iostream>

using namespace std;

class EvenOdd
{
public:
    void even_odd(int number);
};

void EvenOdd::even_odd(int number)
{
    cout << ((number % 2 == 0) ? "even" : "odd") << endl;
}

int main()
{
    EvenOdd ev;
    ev.even_odd(9);
}