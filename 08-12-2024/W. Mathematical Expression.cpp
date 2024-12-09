/*
    Author: Tajwar Saiyeed
    Date: 2024-08-29 14:28:33
    File: W. Mathematical Expression.cpp
*/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void solution()
    {

        int a, b, c;
        char s, q;
        cin >> a >> s >> b >> q >> c;

        switch (s)
        {
        case '+':
            if (a + b == c)
                cout << "Yes" << '\n';
            else
                cout << a + b << '\n';
            break;
        case '-':
            if (a - b == c)
                cout << "Yes" << '\n';
            else
                cout << a - b << '\n';
            break;
        case '*':
            if (a * b == c)
                cout << "Yes" << '\n';
            else
                cout << a * b << '\n';
            break;
        }
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Solution sol;
    sol.solution();

    return 0;
}