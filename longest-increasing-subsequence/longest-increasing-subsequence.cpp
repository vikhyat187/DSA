class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int dp[nums.size()+1],max_ans=INT_MIN;
        for (int i=0;i<nums.size()+1;i++)dp[i]=1;
       
        for (int i=1;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if (nums[i]>nums[j]){
                   dp[i] = max(dp[i],dp[j]+1);
                }
            }
        }
        for (int i=0;i<nums.size()+1;i++){
            cout<<dp[i]<<" ";
            max_ans= max_ans>dp[i]?max_ans:dp[i];
        }
        cout<<endl;
        return max_ans;
    }
};