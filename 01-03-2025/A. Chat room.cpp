#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'

void solve()
{
    string s;
    cin >> s;

    string h = "hello";
    int j = 0;

    for (char ch : s)
    {
        if (ch == h[j])
        {
            j++;
        }
        if (j == h.size())
        {
            yes;
            return;
        }
    }

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
