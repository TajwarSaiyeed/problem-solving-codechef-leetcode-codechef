/*
    Author: Tajwar Saiyeed
    Date: 2024-07-31 17:46:28
    File: Mahasena.cpp
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int even = 0;
    int odd = 0;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
            even++;
        else
            odd++;
    }
    if (even > odd)
        cout << "READY FOR BATTLE" << "\n";
    else
        cout << "NOT READY" << "\n";

    return 0;
}

// Problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AMR15A