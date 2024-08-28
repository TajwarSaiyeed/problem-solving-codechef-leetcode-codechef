#include <iostream>

using namespace std;

class Welcome
{
public:
    void display();
};

void Welcome::display()
{
    cout << "Hello world" << endl;
}

int main()
{
    Welcome obj;
    obj.display();
}