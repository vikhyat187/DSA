class Solution {
    int dp[];
    public int rob(int[] nums) {
        dp=new int[nums.length];
        for (int i=0;i<nums.length;i++){
            dp[i]=-1;
        }
        return rob(nums,nums.length-1);
    }
    private int rob(int[] nums,int i){
        if (i<0){return 0;}
        if (dp[i]!=-1)return dp[i];
        dp[i]=Math.max(rob(nums,i-2)+nums[i],rob(nums,i-1));
        return dp[i];
    }
}