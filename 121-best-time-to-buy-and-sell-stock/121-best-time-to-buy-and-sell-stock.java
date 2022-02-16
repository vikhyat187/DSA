class Solution {
    public int maxProfit(int[] prices) {
        int lowest_so_far =Integer.MAX_VALUE;
        int overall_profit=0;
        int profit_that_day=0;
        
        for (int i=0 ; i<prices.length ; i++){
            if(prices[i] < lowest_so_far){
                lowest_so_far = prices[i];
            }
            profit_that_day  = prices[i] - lowest_so_far;
            if(overall_profit < profit_that_day){
                overall_profit = profit_that_day;
            }
        }
        return overall_profit;
    }
}