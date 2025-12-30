class Solution {
public:
    int dp[201][201];
    int n, m;
    int ans(int i, int j, vector<vector<int>>& grid) {
        if (i == n - 1 && j == m - 1) {
            return grid[i][j];
        }
        if (dp[i][j] != -1) {
            return dp[i][j];
        }
        int a = INT_MAX;
        if (i + 1 < n) {
            a = min(a, grid[i][j] + ans(i+1, j, grid));
        }
        if (j + 1 < m) {
            a = min(a, grid[i][j] + ans(i, j+1, grid));
        }

        return dp[i][j] = a;
    }
    int minPathSum(vector<vector<int>>& grid) {
        n = grid.size(), m = grid[0].size();
        memset(dp, -1, sizeof(dp));
        return ans(0,0,grid);
    }
};