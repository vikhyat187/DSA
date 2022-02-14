class Solution {
    public int uniquePaths(int m, int n) {
        int dp[][];
        dp = new int[m][n];
        
        dp[0][0] = 1;
        for (int rows =0; rows < m;rows++){
            for (int cols=0; cols < n; cols++){
                if (rows > 0){
                    dp[rows][cols] +=dp[rows-1][cols];
                }
                if(cols > 0){
                    dp[rows][cols] +=dp[rows][cols-1];
                             
                }
            }
        }
        return dp[m-1][n-1];
    }
}