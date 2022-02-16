class Solution {
    public int maxProfit(int[] prices) {
        int N= prices.length - 1;
        int profit=0;
        int i = 0,buy = 0,sell = 0;
        
        while(i < N){ 
            while(i < N && prices[i + 1] <= prices[i])i++;
            buy = prices[i];
            
            while(i < N && prices[i + 1] > prices[i])i++;
            sell = prices[i];
            
            profit += sell - buy;
        }
        return profit;
    }
}