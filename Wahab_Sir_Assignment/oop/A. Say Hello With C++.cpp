#include <iostream>
using namespace std;

class Solution
{
public:
    void display()
    {
        string s;
        cin >> s;
        cout << "Hello, " << s << endl;
    }
};

int main()
{
    Solution sol;
    sol.display();
    return 0;
}