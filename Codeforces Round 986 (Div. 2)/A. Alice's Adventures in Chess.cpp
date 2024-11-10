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
    set<pair<int, int>> visited;
    visited.insert({x, y});

    for (char move : s)
    {
        if (move == 'N')
            y++;
        else if (move == 'S')
            y--;
        else if (move == 'E')
            x++;
        else if (move == 'W')
            x--;

        visited.insert({x, y});
    }
    if (visited.count({a, b}))
    {
        yes;
        return;
    }

    int dx = x, dy = y;

    if (dx == 0 && dy == 0)
    {
        no;
        return;
    }

    for (auto [cx, cy] : visited)
    {
        int tx = a - cx, ty = b - cy;

        bool can_reach = false;
        if (dx == 0 && tx == 0)
            can_reach = (dy != 0 && ty % dy == 0 && ty / dy >= 0);
        else if (dy == 0 && ty == 0)
            can_reach = (dx != 0 && tx % dx == 0 && tx / dx >= 0);
        else if (dx != 0 && dy != 0)
            can_reach = (tx % dx == 0 && ty % dy == 0 && tx / dx == ty / dy && tx / dx >= 0);

        if (can_reach)
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
