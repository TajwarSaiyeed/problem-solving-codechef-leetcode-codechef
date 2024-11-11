#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;

    int x = 0, y = 0;

    for (int i = 0; i < 10000; i++)
    {
        char ch = s[i % n];
        if (ch == 'N')
        {
            y++;
        }
        else if (ch == 'S')
        {
            y--;
        }
        else if (ch == 'E')
        {
            x++;
        }
        else
        {
            x--;
        }

        if (x == a && y == b)
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

    int tc;
    cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}
