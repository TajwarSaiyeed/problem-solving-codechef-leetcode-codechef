#include <iostream>

using namespace std;

class Solution
{

public:
    void sol()
    {
        int m, n;
        cin >> m >> n;
        int matrix1[m][n], matrix2[m][n], result[m][n];
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
                result[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Solution s;
    s.sol();
    return 0;
}