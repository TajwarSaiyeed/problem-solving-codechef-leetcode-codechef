// function return with no argument
#include <iostream>
using namespace std;

class Solution
{
public:
    void swap()
    {
        int a = 10, b = 20;
        cout << "Before Swap: " << a << " " << b << endl;
        int temp = a;
        a = b;
        b = temp;
        cout << "After Swap: " << a << " " << b << endl;
    }
};

int main()
{
    Solution sol;
    sol.swap();
    return 0;
}

