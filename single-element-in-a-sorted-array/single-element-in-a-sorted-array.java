class Solution {
    public int singleNonDuplicate(int[] nums) {
        int low =0,high= nums.length-1;
        if (nums.length==1)return nums[0];
        while(low<high){
            int mid = low + (high-low)/2;
            if (mid %2==0 && nums[mid+1] == nums[mid] || (mid%2==1 && nums[mid] == nums[mid-1])){
                //the single ele is on the right
                low = mid+1;
            }
            else high= mid;
        }
        return nums[low];
    }
}