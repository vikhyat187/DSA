class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if (nums.size()<2)return {};
        int low=0,high=nums.size()-1;
        
        while(low<high){
            if (nums[low] + nums[high] == target){return {low+1,high+1};}
            else if (nums[low] + nums[high] > target)high--;
            else low++;
        }
        return {};
    }
};