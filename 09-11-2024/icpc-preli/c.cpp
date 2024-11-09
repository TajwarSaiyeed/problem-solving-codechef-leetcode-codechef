#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define vpii vector<pair<int, int>>
typedef long long ll;


void solve(int c)
{
    int N;
    ll K;
    cin >> N >> K;
    vector<pair<int, int>> flowerbeds(N);
    for (int i = 0; i < N; i++)
    {
        cin >> flowerbeds[i].first >> flowerbeds[i].second;
    }

    ll totalWaterings = 0;
    for (int i = 0; i < N; i++)
    {
        ll X = flowerbeds[i].first;
        ll Y = flowerbeds[i].second;
        totalWaterings += K / X;
    }

    cout << "Case " << c << ": " << totalWaterings << endl;
}

void solve (int c) {
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ll x = v[i].first;
        ans += k/x;
    }
    cout << "Case " << c << ": " << ans << nl;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc =1;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        solve(i);
    }

    return 0;
}
