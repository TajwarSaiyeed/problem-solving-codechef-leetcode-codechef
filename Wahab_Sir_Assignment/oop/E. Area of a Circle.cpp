#include <iostream>
#include <iomanip>
using namespace std;

#define PI 3.141592653
#define dt(n) fixed << setprecision(n)

class Solution
{
public:
    void display()
    {
        double r;
        cin >> r;
        cout << dt(9) << PI * r * r << endl;
    }
};

int main()
{
    Solution sol;
    sol.display();
    return 0;
}