// Function return with argument
#include <iostream>
using namespace std;

class Solution
{
public:
    float subtraction(int a, int b)
    {
        return a - b;
    }
};

int main()
{
    Solution sol;
    float result = sol.subtraction(9,6);
    cout << result << endl;
    return 0;
}