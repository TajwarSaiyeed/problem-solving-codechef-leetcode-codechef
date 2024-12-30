/*
    Author: Tajwar Saiyeed
    Date: 2024-12-30 22:11:27
    File: A. Remove Duplicates.cpp
*/

#include <bits/stdc++.h>
using namespace std;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int main()
{
    fastio int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<int, int> mp;
    vector<int> ans;
    for (int i = n - 1; i >= 0; i--)
    {
        if (mp[a[i]] == 0)
        {
            ans.push_back(a[i]);
            mp[a[i]] = 1;
        }
    }

    cout << ans.size() << endl;
    for (int i = ans.size() - 1; i >= 0; i--)
        cout << ans[i] << " ";

    return 0;
}