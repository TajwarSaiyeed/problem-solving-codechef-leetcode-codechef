#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    
    if(n == 0) {
        if(k == m) cout << string(m, '1') << "\n";
        else cout << "-1" << "\n";
        return;
    }
    if(m == 0) {
        if(k == n) cout << string(n, '0') << "\n";
        else cout << "-1" << "\n";
        return;
    }
    
    if(n >= m) {
        int d = n - m;
        if(k < d || k > n) {
            cout << "-1" << "\n";
            return;
        }
        string res;
        res.append(k, '0');
        int zeros_remaining = n - k;
        int ones_remaining = m;
        while(zeros_remaining > 0) {
            if(ones_remaining == 0) break;
            res.push_back('1');
            ones_remaining--;
            res.push_back('0');
            zeros_remaining--;
        }
        res.append(ones_remaining, '1');
        cout << res << "\n";
    }
    else {
        int d = m - n;
        if(k < d || k > m) {
            cout << "-1" << "\n";
            return;
        }
        string res;
        res.append(k, '1');
        int ones_remaining = m - k;
        int zeros_remaining = n;
        while(ones_remaining > 0) {
            if(zeros_remaining == 0) break;
            res.push_back('0');
            zeros_remaining--;
            res.push_back('1');
            ones_remaining--;
        }
        res.append(zeros_remaining, '0');
        cout << res << "\n";
    }
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