class Solution {
    private int maxProfit(int[] prices,int d,int transactions_left, int dp[][]){
        
        if(transactions_left == 0 || d == prices.length)
            return 0;
        
        
        if(dp[d][transactions_left] != -1){ return dp[d][transactions_left];}
        
        int ans1 = 0, ans2 = 0;
        
        //here is choice 1 not buy or sell
        ans1 = maxProfit(prices, d + 1,transactions_left, dp);
        
        boolean buy = (transactions_left % 2 == 0);
        
        if (buy == true){
            ans2 = -prices[d]  + maxProfit(prices, d + 1,transactions_left - 1, dp);
        }
        else{
              ans2 = prices[d]  + maxProfit(prices, d + 1,transactions_left - 1, dp);

        }
        return dp[d][transactions_left] = Math.max(ans1 , ans2);
    }
    
    
    public int maxProfit(int[] prices) {
        int dp[][];
        
        dp = new int[prices.length][5];
        
        for (int i=0; i< prices.length; i++){
            for (int j=0;j < 5; j++){
                dp[i][j] = -1;
            }
        }
        
        
        
        return maxProfit(prices, 0, 4, dp);
    }
}