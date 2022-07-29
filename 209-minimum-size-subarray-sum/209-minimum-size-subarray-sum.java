class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int minAns = 1000000000;
        
        int size = nums.length, sum = 0;
       
        int left = 0, right = 0;
        
        while(right < size){
            sum += nums[right];
            
            if(sum >= target){
                while(sum >= target){
                    sum -= nums[left];
                    left++;
                }
                minAns = Math.min(minAns, right - left + 2);
            }
            right++;
        }
        return (minAns == 1000000000)? 0 : minAns ;
    }
}