#include <iostream>
using namespace std;

class Solution
{
public:
    void display()
    {
        int N;
        cin >> N;
        for (int i = 1; i <= N; i++)
        {
            if (i % 5 == 0)
                cout << i << " ";
        }
    }
};

int main()
{
    Solution sol;
    sol.display();
    return 0;
}