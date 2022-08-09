class Solution {
    public int[] nextGreaterElements(int[] nums) {
        int len = nums.length;
        int[] res = new int[len];
        Stack<Integer> stack = new Stack<>(); 
        
        for (int i = 0; i < len; i++) res[i] = -1;
        
        for (int i = 0; i < 2; i++){
            for (int j = 0; j < len; j++){
                while(!stack.isEmpty() && nums[stack.peek()] < nums[j]){
                    res[stack.peek()] = nums[j];
                    stack.pop();
                }
                stack.push(j);
            }
        }
        return res;
    }
}