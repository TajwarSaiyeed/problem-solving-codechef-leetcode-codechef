#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long ll;

class Solution
{
public:
    int arr[31];

    Solution()
    {
        for (int i = 0; i < 31; i++)
        {
            arr[i] = -1;
        }
        arr[1] = 1;
        arr[2] = 1;
    }

    int fib(int n)
    {
        if (n == 1 || n == 2)
        {
            return 1;
        }

        if (arr[n] != -1)
        {
            return arr[n];
        }
        return arr[n] = fib(n - 1) + fib(n - 2);
    }
};

void solve()
{
    Solution s1;
    int n;
    cin >> n;
    cout << s1.fib(n) << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    // cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}
