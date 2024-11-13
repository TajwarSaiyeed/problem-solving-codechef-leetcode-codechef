#include <iostream>
using namespace std;

#define ll long long

class Solution
{
public:
    void display()
    {
        ll x, y;
        cin >> x >> y;

        cout << x << " + " << y << " = " << x + y << endl;
        cout << x << " * " << y << " = " << x * y << endl;
        cout << x << " - " << y << " = " << x - y << endl;
    }
};

int main()
{
    Solution sol;
    sol.display();
    return 0;
}