/*
    Author: Tajwar Saiyeed
    Date: 2024-09-24 22:06:31
    File: tell-me-the-greater-between-two-value.cpp
*/

#include <iostream>

using namespace std;

class Solution
{
public:
    void solve();
};

void Solution::solve()
{
    int a, b;
    cin >> a >> b;
    if (a > b)
        cout << "a is greater than b";
    else if (a < b)
        cout << "a is less than b";
    else
        cout << "a is equal to b";
    cout << endl;
}

int main()
{
    Solution sol;
    sol.solve();
    return 0;
}