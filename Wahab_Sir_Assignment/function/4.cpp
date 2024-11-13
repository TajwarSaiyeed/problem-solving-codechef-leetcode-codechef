// Function return with argument
#include <iostream>
using namespace std;

class Solution
{
public:
    float summation(int a, int b)
    {
        return a + b;
    }
};

int main()
{
    Solution sol;
    float result = sol.summation(5, 6);
    cout << result << endl;
    return 0;
}