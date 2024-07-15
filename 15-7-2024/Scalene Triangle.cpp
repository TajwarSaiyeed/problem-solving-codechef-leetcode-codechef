/*
    Author: Tajwar Saiyeed
    Date: 2024-07-15 08:21:42
    File: Scalene Triangle.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        set<int> st;
        st.insert(a);
        st.insert(b);
        st.insert(c);
        cout << (st.size() == 3 ? "YES" : "NO") << "\n";
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-math/BASICMATH/problems/SCALENE