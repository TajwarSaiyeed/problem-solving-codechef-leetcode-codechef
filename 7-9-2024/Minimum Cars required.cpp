/*
    Author: Tajwar Saiyeed
    Date: 2024-09-07 15:28:29
    File: Minimum Cars required.cpp
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc, n;
    cin >> tc;
    while (tc--)
    {
        cin >> n;
        if (n <= 4)
            cout << 1 << endl;
        else
        {
            int need = n / 4;
            if (n % 4 != 0)
                need += 1;
            cout << need << '\n';
        }
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINCARS