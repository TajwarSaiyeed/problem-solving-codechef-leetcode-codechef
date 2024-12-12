#include <bits/stdc++.h>

using namespace std;

bool is2x2BlockAvailable(const vector<string> &grid, int i, int j)
{
    // Check if a 2x2 block starting at (i, j) is all 'O'
    return grid[i][j] == 'O' && grid[i][j + 1] == 'O' && grid[i + 1][j] == 'O' && grid[i + 1][j + 1] == 'O';
}

int main()
{
    int T;
    cin >> T;
    for (int t = 1; t <= T; ++t)
    {
        int N;
        cin >> N;
        vector<string> grid(3);

        // Read the grid
        for (int i = 0; i < 3; ++i)
        {
            cin >> grid[i];
        }

        int possibleMoves = 0;

        // Check all possible 2x2 blocks
        for (int i = 0; i < 2; ++i)
        {
            for (int j = 0; j < N - 1; ++j)
            {
                if (is2x2BlockAvailable(grid, i, j))
                {
                    possibleMoves++;
                    // Mark cells to avoid counting overlapping blocks
                    grid[i][j] = grid[i][j + 1] = grid[i + 1][j] = grid[i + 1][j + 1] = 'X';
                }
            }
        }

        // Determine the winner based on the number of possible moves
        cout << "Case " << t << ": " << (possibleMoves % 2 == 1 ? "Jhinuk" : "Grandma") << endl;
    }
    return 0;
}
