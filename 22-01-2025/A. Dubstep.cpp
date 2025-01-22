#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;
    regex pattern("WUB");
    string newString = regex_replace(s, pattern, " ");
    stringstream ss;
    ss << newString;
    string word;
    while (ss >> word)
    {
        cout << word << " ";
    }
}