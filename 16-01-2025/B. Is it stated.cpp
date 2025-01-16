#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    string s;
    cin>>s;

    regex pattern("it");

    if (regex_search(s, pattern)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    fast;
    int tc;
    cin>>tc; 
    while(tc--) {
        solve();
    }

    return 0;
}
