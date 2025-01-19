#include <bits/stdc++.h>
using namespace std;

bool can_play(const vector<vector<int>> &cows, const vector<int> &order)
{
    int n = cows.size();
    int m = cows[0].size();

    vector<int> card_indices(n, 0);
    int last_card = -1;

    for (int round = 0; round < m; ++round)
    {
        for (int cow_index : order)
        {
            while (card_indices[cow_index] < m && cows[cow_index][card_indices[cow_index]] <= last_card)
            {
                card_indices[cow_index]++;
            }
            if (card_indices[cow_index] == m)
            {
                return false;
            }
            last_card = cows[cow_index][card_indices[cow_index]];
            card_indices[cow_index]++;
        }
    }
    return true;
}

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> cows(n, vector<int>(m));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> cows[i][j];
        }
        sort(cows[i].begin(), cows[i].end());
    }

    vector<int> order(n);
    iota(order.begin(), order.end(), 0);
    sort(order.begin(), order.end(), [&](int x, int y)
         { return cows[x][0] < cows[y][0]; });

    if (can_play(cows, order))
    {
        for (int i = 0; i < n; ++i)
        {
            cout << order[i] + 1 << (i == n - 1 ? "" : " ");
        }
        cout << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
