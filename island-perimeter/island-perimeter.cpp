class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int res=0;
        int row,col;
        int r=grid.size(),c=grid[0].size();
        for (row =0;row<r;row++){
            for (col =0;col<c;col++){
                if (grid[row][col] ==1 ){
                    res += (row ==0 || grid[row-1][col] ==0)?1:0;
                    res += (col ==0 || grid[row][col-1] ==0)?1:0;
                    res += (col ==c-1 || grid[row][col+1] ==0)?1:0;
                    res += (row ==r-1 || grid[row+1][col] ==0)?1:0;
                }
            }
        }
        return res;
    }
};
/*
0 1 




col 0
^
|
0 1 0 0 ->row 0
1 1 1 0
0 1 0 0
1 1 0 0 


*/