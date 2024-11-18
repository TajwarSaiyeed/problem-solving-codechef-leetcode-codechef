#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    void display()
    {
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> v = {a, b, c};
        sort(v.begin(), v.end());
        cout << v[0] << endl
             << v[1] << endl
             << v[2] << endl
             << endl;
        cout << a << endl
             << b << endl
             << c << endl;
    }
};

int main()
{
    Solution sol;
    sol.display();
    return 0;
}