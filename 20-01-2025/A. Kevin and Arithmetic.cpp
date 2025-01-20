#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<ll> ev, od;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x % 2 == 0)
            ev.push_back(x);
        else
            od.push_back(x);
    }   

    vector<ll> srt = ev;
    for (ll x : od)
        srt.push_back(x);

    ll s = 0;
    int ans = 0;

    for (auto num : srt)
    {
        s += num;
        if ((s & 1) == 0)   
        {
            ans++;
            while ((s & 1) == 0)
                s >>= 1;
        }
    }

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
