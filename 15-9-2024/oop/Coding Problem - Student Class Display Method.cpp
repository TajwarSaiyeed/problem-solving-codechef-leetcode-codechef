/*
    Author: Tajwar Saiyeed
    Date: 2024-09-15 14:21:44
    File: Coding Problem - Student Class Display Method.cpp
*/

#include <iostream>

using namespace std;

class Student
{

public:
    string name;
    int age;

    void display()
    {
        cout << name << " " << age << endl;
    }
};

int main()
{
    Student s;
    cin >> s.name >> s.age;
    s.display();

    return 0;
}

// Problem : https://www.codechef.com/learn/course/college-oops-cpp/CPOPCPP01/problems/OPCPP03