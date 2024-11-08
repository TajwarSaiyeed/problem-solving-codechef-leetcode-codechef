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
        vi v(3);
        lp(i, 3)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        if (v[0] == 0 && v[1] == 3 && v[2] == 6)
        {
            cout << "Case " << tc << ": perfectus" << ln;
        }
        else if (v[0] == 2 && v[1] == 2 && v[2] == 2)
        {
            cout << "Case " << tc << ": perfectus" << ln;
        }
        else if (v[0] == 1 && v[1] == 1 && v[2] == 6)
        {
            cout << "Case " << tc << ": perfectus" << ln;
        }
        else if (v[0] == 3 && v[1] == 3 && v[2] == 3)
        {
            cout << "Case " << tc << ": perfectus" << ln;
        }
        else if (v[0] == 1 && v[1] == 3 && v[2] == 4)
        {
            cout << "Case " << tc << ": perfectus" << ln;
        }
        else if (v[0] == 1 && v[1] == 2 && v[2] == 4)
        {
            cout << "Case " << tc << ": perfectus" << ln;
        }
        else if (v[0] == 0 && v[1] == 4 && v[2] == 4)
        {
            cout << "Case " << tc << ": perfectus" << ln;
        }
        else
        {
            cout << "Case " << tc << ": invalidum" << ln;
        }
    }
}