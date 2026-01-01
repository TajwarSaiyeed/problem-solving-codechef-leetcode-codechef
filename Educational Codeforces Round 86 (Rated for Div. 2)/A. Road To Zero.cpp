#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll x, y, a, b;
    cin >> x >> y >> a >> b;

    if (x == 0 && y == 0) {
        cout << 0 << "\n";
        return;
    }

    ll ans = min(min(x, y) * b + abs(x - y) * a, (x + y) * a);
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

// https://codeforces.com/problemset/problem/1342/A