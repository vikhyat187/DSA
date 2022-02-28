class Solution {
    public List<String> summaryRanges(int[] nums) {
        List<String> list = new ArrayList<String>();
        int left,right;
        
        if(nums.length == 1){
            list.add(nums[0] + "");
            return list;
        }
        
        for (int i = 0; i < nums.length; i++){
            left = i;
            right = i;
            
            while(i + 1< nums.length  && nums[i] + 1 == nums[i + 1]){
                right++;
                i++;
            }
            
            if (left == right){
                list.add(nums[i] + "");
            }
            else {
                list.add(nums[left] + "->"+ nums[right]);
            }
        }
        return list;
    }
}