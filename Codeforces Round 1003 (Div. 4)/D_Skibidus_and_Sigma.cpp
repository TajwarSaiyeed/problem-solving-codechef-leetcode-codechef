
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

using pll = pair<long long, long long>;

class Compare
{
public:
    bool operator()(const pll &a, const pll &b)
    {
        return a.first > b.first;
    }
};

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<pll> arrays(n);

    for (int i = 0; i < n; i++)
    {
        long long tot = 0, score = 0;
        for (int j = 0; j < m; j++)
        {
            long long x;
            cin >> x;
            tot += x;
            score += tot;
        }
        arrays[i] = {tot, score};
    }

    sort(arrays.begin(), arrays.end(), Compare());

    long long ans = 0, cumul = 0;
    for (int i = 0; i < n; i++)
    {
        ans += arrays[i].second + m * cumul;
        cumul += arrays[i].first;
    }

    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}


// Problem : 