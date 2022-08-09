class Solution {
    public int[] nextGreaterElements(int[] nums) {
        int len = nums.length;
        int[] res = new int[len];
        
        for (int i = 0; i < len; i++){
            res[i] = -1;
            for (int j = 1; j < len; j++){
                if(nums[(i + j) % len] > nums[i]){
                    res[i] = nums[(i + j) % len];
                    break;
                }
            }
        }
        return res;
    }
}