class Solution {
public:
    int findMin(vector<int>& nums) {
        int low,mid,high;
        low=0;
        high= nums.size()-1;
        if (nums[low] <= nums[high])return nums[low];//already sorted
        while(low <= high){
            mid = low + (high- low)/2;
            if (mid-1>=0 and nums[mid-1] > nums[mid] )return nums[mid];
            if (mid+1 <= nums.size()-1 and nums[mid] > nums[mid + 1])return nums[mid +1];
            if (nums[mid] > nums[0]){
                low = mid + 1;
            }
            else high = mid-1;
        }
        return -1;
    }
};