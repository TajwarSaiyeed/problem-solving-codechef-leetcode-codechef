#include <bits/stdc++.h>

using namespace std;

int solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> x(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    int score = 0;
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        if (x[left] + x[right] == k)
        {
            score++;
            left++;
            right--;
        }
        else if (x[left] + x[right] > k)
        {
            right--;
        }
        else
        {
            left++;
        }
    }

    return score;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << endl;
    }
    return 0;
}