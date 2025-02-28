    /*
        Author: Tajwar Saiyeed
        Date: 2025-02-28 20:29:24
        File: A. Young Physicist.cpp
    */
    #include <bits/stdc++.h>
    using namespace std;
    #define yes cout << "YES" << '\n'
    #define no cout << "NO" << '\n'
    #define nl '\n'

    void solve()
    {
        int n;
        cin >> n;
        int x = 0, y = 0, z = 0;
        while (n--)
        {
            int a, b, c;
            cin >> a >> b >> c;
            x += a;
            y += b;
            z += c;
        }
        if (x == 0 and y == 0 and z == 0)
            yes;
        else
            no;
    }

    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(NULL);

        int tc = 1;
        // cin >> tc;

        while (tc--)
        {
            solve();
        }

        return 0;
    }

    // Problem : https://codeforces.com/problemset/problem/69/A