#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<char> st;
    string s;
    getline(cin, s);
    for (char ch : s)
        if (ch >= 'a' and ch <= 'z')
            st.insert(ch);

    cout << st.size() << endl;
    return 0;
}