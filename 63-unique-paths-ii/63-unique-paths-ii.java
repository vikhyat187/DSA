class Solution {
    public int uniquePathsWithObstacles(int[][] obstacleGrid) {
        if(obstacleGrid[0][0] == 1)return 0;//can't move any where as first one is a obstacle
        
        int rows = obstacleGrid.length,cols = obstacleGrid[0].length;
        
        int dp[][] = new int[rows][cols];
        dp[0][0] =1;
        for (int i=1;i<cols; i++){
            //first row
            if(obstacleGrid[0][i] != 1){
                dp[0][i] = dp[0][i-1];
            }
            else {
                dp[0][i] =0;
            }
            
        }
        
        for (int i=1; i< rows; i++){
            //first column
              if(obstacleGrid[i][0] != 1){
                dp[i][0] = dp[i-1][0];
            }
            else {
                dp[i][0] =0;
            }
            
            
        }
        for (int i=1;i<rows; i++){
            for (int j=1; j<cols; j++){
                if(obstacleGrid[i][j] != 1){
                    dp[i][j] = dp[i-1][j] + dp[i][j-1];
                }
                else dp[i][j] =0;
            }
        }
        return dp[rows - 1][cols -1 ];
        
    }
}