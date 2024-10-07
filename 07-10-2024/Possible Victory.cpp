#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, o, c;
    cin >> r >> o >> c;
    if (c + ((20 - o) * 36) > r)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}

// Problem :  https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/T20MCH