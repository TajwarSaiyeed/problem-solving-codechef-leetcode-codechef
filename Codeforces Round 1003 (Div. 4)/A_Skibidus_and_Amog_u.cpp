/*
    Author: Tajwar Saiyeed
    Date: 2025-02-09 20:35:56
    File: A_Skibidus_and_Amog_u.cpp
*/
#include <bits/stdc++.h>
#define string std::string
#define cin std::cin    
#define cout std::cout

void solve()
{
    string word;
    cin >> word;

    string withoutTwo = word.substr(0, word.size() - 2);
    cout << withoutTwo + "i" << "\n";
}

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}


// Problem : 