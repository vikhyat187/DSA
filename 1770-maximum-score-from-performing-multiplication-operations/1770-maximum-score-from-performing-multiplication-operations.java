class Solution {
    int dp[][];
    public int ans(int nums[],int []multipliers, int l,int r,int i){
        if(i >= multipliers.length)return 0;
        
        if(dp[l][i] != -1)return dp[l][i];
        int first = multipliers[i]* nums[l] + ans(nums,multipliers, l+1,r,i+1);
        int second = multipliers[i] * nums[r] + ans(nums,multipliers,l,r-1,i+1);
        
        return dp[l][i] = Math.max(first,second);
    }
    public int maximumScore(int[] nums, int[] multipliers) {
        int len = multipliers.length;
        dp = new int[len][len + 1];
        for (int i=0;i<len;i++){
            for (int j=0;j<len+1;j++){
                dp[i][j] = -1;
            }
        }
        return ans(nums,multipliers,0,nums.length-1, 0);
    }
}