#include <iostream>
#include <string>
using namespace std;

string constructString(int n, int a, int b)
{
    string s;
    for (int i = 0; i < n; ++i)
    {
        char c = 'a' + (i % b);
        s += c;
    }
    return s;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        string s = constructString(n, a, b);
        cout << s << endl;
    }
    return 0;
}