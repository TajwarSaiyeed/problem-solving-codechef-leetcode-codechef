#include <iostream>
using namespace std;

class Solution
{
public:
    void display()
    {
        int m, n;
        cin >> m >> n;
        int matrix1[m][n], matrix2[m][n], sum[m][n];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> matrix1[i][j];
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> matrix2[i][j];
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                sum[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << sum[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Solution sol;
    sol.display();
    return 0;
}