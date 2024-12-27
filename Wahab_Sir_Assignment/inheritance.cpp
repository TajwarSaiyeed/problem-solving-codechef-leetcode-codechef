#include <iostream>
using namespace std;

class Teacher
{
public:
    Teacher()
    {
        cout << "Hello Students, I am a teacher" << endl;
    }
    string university_name = "BGC";
};

class Math_Teacher : public Teacher
{
public:
    Math_Teacher()
    {
        cout << "I am a Math Teacher" << endl;
    }
    string main_subject = "Math";
    string name = "Mr. Ali";
};


int main()
{
    Math_Teacher teacher;
    cout << "University Name: " << teacher.university_name << endl;
    cout << "Name: " << teacher.name << endl;
    cout << "Main Subject: " << teacher.main_subject << endl;
    return 0;
}