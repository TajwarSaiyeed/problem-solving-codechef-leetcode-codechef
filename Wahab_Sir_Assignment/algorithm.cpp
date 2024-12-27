#include <iostream>
using namespace std;

class Solution
{
public:
    void display() {
        int n;
        cout << "Input n: ";
        cin >> n;

        while (true)
        {
            cout << n << " "; // Print n
            if (n == 1)
                break; // If n = 1, stop
            if (n % 2 != 0)
            { // If n is odd
                n = 3 * n + 1;
            }
            else
            { // If n is even
                n = n / 2;
            }
        }
    }
};


int main()
{   
    Solution s;
    s.display();
    return 0;
}
