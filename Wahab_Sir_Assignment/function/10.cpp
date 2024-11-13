// Function no argument and no return
#include <iostream>
using namespace std;

class Solution
{
public:
    void summation() {
        int a, b;
        cin >> a >> b;
        cout << a + b << endl;
    }
};

int main()
{
    Solution sol;
    sol.summation();
    return 0;
}