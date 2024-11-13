// Function with argument and no return
#include <iostream>
using namespace std;

class Solution
{
public:
    void subtraction(int a, int b, int c)
    {
        cout << a - b - c << endl;
    }
};

int main()
{
    Solution sol;
    sol.subtraction(6, 4, 3);
    return 0;
}