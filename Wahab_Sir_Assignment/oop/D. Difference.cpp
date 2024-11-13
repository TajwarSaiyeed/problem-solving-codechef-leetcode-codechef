#include <iostream>
using namespace std;

typedef long long ll;

class Solution
{
public:
    void display()
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll z = (a * b) - (c * d);
        cout << "Difference = " << z << endl;
    }
};

int main()
{
    Solution sol;
    sol.display();
    return 0;
}