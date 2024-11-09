// // /*
// //     Author: Tajwar Saiyeed
// //     Date: 2024-11-09 17:55:59
// //     File: D. Red Apple, Green Apple.cpp

// //     CPU: 3.00s

// // Memory: 2048MB

// // You have
// //  boxes, each box has one red apple and one green apple. Each of the apples have a specific weight. You want to pick exactly
// //  apples, so you select
// //  boxes randomly. From each of the selected boxes, you either pick the red apple or the green apple with the same probability. After selecting the apples you sum up their weights.

// // For each
// //  from
// //  to
// // , find the expected total apple weights when picking exactly
// //  apples. We can express the expected value as


// // , answer the value of
// // .

// // Input Description
// // The first line contains an integer
// // . The second line contains
// //  integers denoting the weights of the red apples of each box. The third line contains
// //  integers denoting the weights of the green apples of each box. The weights are positive integers and at most
// // .

// // Output Description
// // Print
// //  space separated integers in a single line, where the
// //  integer represents the answer for
// // .

// // Samples
// // Input

// // 10
// // 3 1 5 3 1 3 5 4 2 2
// // 3 3 1 2 2 5 3 5 1 5
// // Output

// // 848507703 698771053 549034403 399297753 249561103 99824453 948332156 798595506 648858856 499122206
// // Note
// // Please don't print any extra traling spaces after the output and ensure the line ends with a newline character.
// // */
// // #include <bits/stdc++.h>
// // #include <ext/pb_ds/assoc_container.hpp>
// // #include <ext/pb_ds/tree_policy.hpp>
// // using namespace __gnu_pbds;
// // using namespace std;
// // template <typename T>
// // using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// // #define yes cout << "YES" << '\n'
// // #define no cout << "NO" << '\n'
// // #define p1 cout << '1'
// // #define p0 cout << '0'
// // #define nl '\n'
// // #define vll vector<ll>
// // #define vi vector<int>
// // #define vs vector<string>
// // #define dt(n) fixed << setprecision(n)
// // typedef long long ll;

// // void solve()
// // {
// //     int n;
// //     cin >> n;
// //     vector<int> red(n), green(n);
// //     for (int i = 0; i < n; i++)
// //     {
// //         cin >> red[i];
// //     }
// //     for (int i = 0; i < n; i++)
// //     {
// //         cin >> green[i];
// //     }

// //     vector<ll> redSum(n + 1), greenSum(n + 1);
// //     for (int i = 1; i <= n; i++)
// //     {
// //         redSum[i] = redSum[i - 1] + red[i - 1];
// //         greenSum[i] = greenSum[i - 1] + green[i - 1];
// //     }

// //     vector<ll> dp(n + 1);
// //     for (int i = 1; i <= n; i++)
// //     {
// //         dp[i] = dp[i - 1] + redSum[i] * greenSum[i];
// //     }

// //     for (int i = 1; i <= n; i++)
// //     {
// //         cout << dp[i] << " ";
// //     }
// //     cout << nl;
// // }

// // int main()
// // {
// //     ios::sync_with_stdio(false);
// //     cin.tie(NULL);

// //     int tc = 1;
// //     cin >> tc;

// //     while (tc--)
// //     {
// //         solve();
// //     }

// //     return 0;
// // }


// // // Problem :

// #include <bits/stdc++.h>
// #define mod 1e9 + 7
// #define lp(i, n) for (int i = 0; i < n; i++)
// #define Str string
// #define mci map<char, int>
// #define msi map<Str, int>
// #define mss map<Str, Str>
// #define mii map<int, int>
// #define umci unordered_map<char, int>
// #define umsi unordered_map<Str, int>
// #define umss unordered_map<Str, Str>
// #define umii unordered_map<int, int>
// #define vi vector<int>
// #define pii pair<int, int>
// #define vpii vector<pii>
// #define lli long long int
// #define optimize()                \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// #define ln '\n'
// using namespace std;
// const int MOD = 998244353;

// int main()
// {
//     int n;
//     cin >> n;

//     vi rw(n), gw(n);
//     vector<double> ew(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> rw[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cin >> gw[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         ew[i] = (rw[i] + gw[i]) / 2.0;
//     }

//     sort(ew.begin(), ew.end(), greater<double>());

//     int inv2 = 1;
//     int power = MOD - 2;
//     while (power > 0)
//     {
//         if (power % 2 == 1)
//         {
//             inv2 = (inv2 * 2) % MOD;
//         }
//         power /= 2;
//         if (power > 0)
//         {
//             inv2 = (inv2 * inv2) % MOD;
//         }
//     }

//     vi result(n);
//     double tsum = 0;

//     for (int k = 1; k <= n; k++)
//     {
//         tsum += ew[k - 1];
//         tsum = fmod(tsum, MOD);
//         int ans = (static_cast<long long>(tsum) * inv2) % MOD;
//         result[k - 1] = ans;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << result[i] << " ";

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 998244353;

void solve() {
    int n;
    cin >> n;
    vector<int> red(n), green(n);
    for (int i = 0; i < n; i++) {
        cin >> red[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> green[i];
    }

    vector<ll> expected_weights(n);
    for (int i = 0; i < n; i++) {
        expected_weights[i] = (red[i] + green[i]) / 2;
    }

    vector<ll> prefix_sum(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        prefix_sum[i] = (prefix_sum[i - 1] + expected_weights[i - 1]) % MOD;
    }

    for (int k = 1; k <= n; k++) {
        ll expected_total_weight = (prefix_sum[k] * k) % MOD;
        cout << expected_total_weight << " ";
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--) {
        solve();
    }

    return 0;
}
//     }
//     cout << endl;

//     return 0;
// }

