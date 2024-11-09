#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 998244353;

ll mod_exp(ll base, ll exp, ll mod)
{
    ll result = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

ll solve_for_large_n(int n, int m, int k)
{
    if (m == 1)
        return mod_exp(k, n, MOD); // For a 1xN grid, each cell can be any color

    // Total number of ways to color for small m, considering modular constraints
    ll total_ways = mod_exp(k, n * m, MOD);

    // The inclusion-exclusion principle applied using combinatorial techniques
    // Note: Specific DP or combinatorial logic to avoid invalid adjacency can be implemented here
    ll invalid_ways = 0;

    for (int i = 1; i <= k; i++)
    {
        ll ways = mod_exp(i, n * m, MOD);
        if ((k - i) % 2 == 0)
        {
            invalid_ways = (invalid_ways + ways) % MOD;
        }
        else
        {
            invalid_ways = (invalid_ways - ways + MOD) % MOD;
        }
    }

    // Calculate the valid configurations by subtracting invalid configurations
    ll valid_ways = (total_ways - invalid_ways + MOD) % MOD;
    return valid_ways;
}

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    cout << solve_for_large_n(n, m, k) << '\n';
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
