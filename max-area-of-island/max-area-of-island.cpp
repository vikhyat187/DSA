class Solution {
public:
    int area(int row,int col,vector<vector<int>> & grid){
        if(row >=0 and row < grid.size() and col >=0 and col < grid[0].size() and grid[row][col] == 1){
            grid[row][col] =0;
            return 1+area(row+1,col,grid) + area(row-1,col,grid) + area(row,col+1,grid) + area(row,col-1,grid);
        }
        return 0;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans=0;
        for (int row =0;row<grid.size();row++){
            for (int col =0;col<grid[0].size();col++){
                ans = max(ans,area(row,col,grid));
            }
        }
        return ans;
    }
};