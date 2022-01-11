class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0,mid=0,length=nums.size();
        int high=length-1;
        while(mid<=high){
            if(nums[mid]==1)mid++;
            else if (nums[mid]==0)swap(nums[mid++],nums[low++]);
            else swap(nums[mid],nums[high--]);
        }
    }
};