#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long ll;

class Solution
{
public:
    void solve()
    {
        int a, b;
        cin >> a >> b;
        cout << (a > b ? a : b) << " is larger " << nl;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Solution sol;
    sol.solve();
    return 0;
}