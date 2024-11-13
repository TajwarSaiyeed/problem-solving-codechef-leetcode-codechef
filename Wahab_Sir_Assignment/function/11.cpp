// Function no argument and no return
#include <iostream>
using namespace std;

class Solution
{
public:
    void subtraction() {
        int a, b;
        cin >> a >> b;
        cout << a - b << endl;
    }
};

int main()
{
    Solution sol;
    sol.subtraction();
    return 0;
}