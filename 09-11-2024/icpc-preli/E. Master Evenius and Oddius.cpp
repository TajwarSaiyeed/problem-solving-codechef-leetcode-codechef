#include <bits/stdc++.h>
#define mod 1e9 + 7
#define lp(i, n) for (int i = 0; i < n; i++)
#define Str string
#define mci map<char, int>
#define msi map<Str, int>
#define mss map<Str, Str>
#define mii map<int, int>
#define umci unordered_map<char, int>
#define umsi unordered_map<Str, int>
#define umss unordered_map<Str, Str>
#define umii unordered_map<int, int>
#define vi vector<int>
#define pii pair<int, int>
#define vpii vector<pii>
#define lli long long int
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ln '\n'
using namespace std;

int main()
{
    optimize();
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        long long int n;
        int p;
        cin >> n >> p;
        n = n / 2;
        int fl = n % 2;
        if (p == 1)
        {
            if (fl)
                cout << "Case " << tc << ": Oddius" << ln;
            else
                cout << "Case " << tc << ": Evenius" << ln;
        }

        else
        {
            if (!fl)
                cout << "Case " << tc << ": Evenius" << ln;
            else
                cout << "Case " << tc << ": Oddius" << ln;
        }
    }
}