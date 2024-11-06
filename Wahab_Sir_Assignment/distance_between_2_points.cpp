#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    float distance()
    {
        int x1, x2, y1, y2;
        cin >> x1 >> x2 >> y1 >> y2;
        float d;
        d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        return d;
    }
};

int main()
{
    Solution obj;
    float d = obj.distance();
    cout << "The distance between the two points is: " << d << endl;
    return 0;
}