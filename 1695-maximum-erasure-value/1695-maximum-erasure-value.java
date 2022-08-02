class Solution {
    public int maximumUniqueSubarray(int[] nums) {
        int left =0, right =0, currSum =0, maxSum = 0;
        
        Set<Integer> set = new HashSet<>();
        while(right < nums.length){
            while(!set.add(nums[right])){
                currSum -= nums[left];
                set.remove(nums[left++]);
            }
            currSum += nums[right];
            set.add(nums[right++]);
            maxSum = Math.max(maxSum, currSum);
        }
        return maxSum;
    }
}