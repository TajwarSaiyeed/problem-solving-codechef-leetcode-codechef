#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long ll;

class Solution {
    public:
        void solve()
        {
            double x;
            cin >> x;
            if (x >= 0 && x <= 25)
                cout << "Interval [0,25]" << nl;
            else if (x > 25 && x <= 50)
                cout << "Interval (25,50]" << nl;
            else if (x > 50 && x <= 75)
                cout << "Interval (50,75]" << nl;
            else if (x > 75 && x <= 100)
                cout << "Interval (75,100]" << nl;
            else
                cout << "Out of Intervals" << nl;
        }   
};

int main()
{
    Solution sol;
    sol.solve();
    return 0;
}


// Problem : 