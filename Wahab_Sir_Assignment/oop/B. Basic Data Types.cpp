#include <iostream>
using namespace std;

class Solution
{
public:
    void display()
    {
        int a;
        long long b;
        char c;
        float d;
        double e;
        cin >> a >> b >> c >> d >> e;
        cout << a << endl
             << b << endl
             << c << endl
             << d << endl
             << e << endl;
    }
};

int main()
{
    Solution sol;
    sol.display();
    return 0;
}