#include <iostream>

using namespace std;

class Calc
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }
};

// class Calc
// {
// public:
//     int sum(int a, int b);
// };

// int Calc::sum(int a, int b)
// {
//     return a + b;
// }

int main()
{
    int a, b;
    cin >> a >> b;
    Calc MyCalc;
    int sum = MyCalc.sum(a, b);
    cout << sum << endl;
}
