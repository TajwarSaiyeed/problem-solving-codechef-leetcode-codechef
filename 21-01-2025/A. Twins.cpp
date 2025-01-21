/*
    Author: Tajwar Saiyeed
    Date: 2025-01-21 21:07:05
    File: A. Twins.cpp
*/
#include <bits/stdc++.h>
using namespace std;

#define nl '\n'


void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    int total_sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        total_sum += arr[i];
    }
    sort(arr.begin(), arr.end(), greater<int>());

    int sum = 0, count = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        count++;
        if (sum > total_sum - sum)
        {
            break;
        }
    }

    cout << count << nl;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}


// Problem : 