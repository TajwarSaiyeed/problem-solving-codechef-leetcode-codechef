#include <iostream>

using namespace std;

class Sol
{

public:
    int m, n;
    Sol(void)
    {
        this->m = 0;
        this->n = 0;
    }

    Sol(int m, int n)
    {
        this->m = m;
        this->n = n;
    }

    void display() {
        cout << "m " << m << " n " << n << endl;
    }
};

int main()
{
    Sol s1;
    Sol s2(10, 20);
    cout << s2.m << " " << s2.n << endl;
    return 0;
}
