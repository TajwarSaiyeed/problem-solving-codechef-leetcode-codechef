#include <iostream>
#include <cmath>

using namespace std;

class Solution
{
public:
    void qua();
};

void Solution::qua()
{
    int a, b, c;
    cin >> a >> b >> c;
    int x = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
    int y = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;
    cout << x << ' ' << y << endl;
}

int main()
{
    Solution myQua;
    myQua.qua();
    return 0;
}