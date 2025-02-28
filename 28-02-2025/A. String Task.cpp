    /*
        Author: Tajwar Saiyeed
        Date: 2025-02-28 19:48:24
        File: A. String Task.cpp
    */
    #include <bits/stdc++.h>
    using namespace std;
    #define nl '\n'

    void solve()
    {
        string s, result = ".";
        cin >> s;
        for (char &x : s)
        {
            if (tolower(x) != 'a' and tolower(x) != 'o' and tolower(x) != 'y' and tolower(x) != 'e' and tolower(x) != 'u' and tolower(x) != 'i')
            {
                result += tolower(x);
                result += ".";
            }
        }

        cout << result.substr(0, result.size() - 1) << nl;
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

    // Problem : http://codeforces.com/problemset/problem/118/A