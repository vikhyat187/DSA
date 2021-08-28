class Solution {
public:
    int minStartValue(vector<int>& nums) {
       int sum=0,ans=0;
        for (int i=0;i<nums.size();i++){
            sum+=nums[i];
            ans=min(ans,sum);
        }
        return 1-ans;
    }
};