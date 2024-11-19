#include <iostream>
using namespace std;

class Solution
{
public:
    void display()
    {
        int r, c;
        cin >> r >> c;
        int matrix1[r][c], matrix2[r][c], result[r][c];
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                cin >> matrix1[i][j];

        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                cin >> matrix2[i][j];

        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                result[i][j] = matrix1[i][j] + matrix2[i][j];

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
                cout << result[i][j] << " ";
            cout << endl;
        }
    }
};

int main()
{
    Solution sol;
    sol.display();
}