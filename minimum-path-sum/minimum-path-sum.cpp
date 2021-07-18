class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int height= grid.size()-1;
        int width= grid[0].size()-1;
        vector<vector<int>>dp(height+1,vector<int>(width+1,-1));
        return getMinPath(grid,height,width,dp);
    }
  int getMinPath(vector <vector <int>> &grid, int i, int j, vector <vector<int>> &dp) {
        if (i == 0 && j == 0) {
            return grid[i][j];
        }
        if (dp[i][j] != -1) {
            return dp[i][j];
        }
        
        int m = INT_MAX;
        if (j > 0) {
            m = grid[i][j] + getMinPath(grid, i, j - 1, dp);
        }
        if (i > 0) {
            int s = grid[i][j] + getMinPath(grid, i - 1, j, dp);
            m = min(m, s);
        }
        
        dp[i][j] = m;
        return dp[i][j];
    }
};