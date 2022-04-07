class Solution {
    public int[] sortedSquares(int[] nums) {
        int j = 0,max =0;
        
        for(int i =0;i< nums.length; i++){     
            nums[i] = Math.abs(nums[i]);//changed -ve to +ve
            max = Math.max(max,nums[i]);
        }
        
        int [] tempArr = new int[max + 1];
        Arrays.fill(tempArr,0);
        
        for (int i=0;i < nums.length;i++) {
            tempArr[nums[i]]++;//now it got the freq of ele both -ve and +ve
        }
        
        for (int i=0;i <= max ;i++){
            while(tempArr[i] != 0)
            {
                nums[j++] = i* i;
                tempArr[i]--;
            }
            
        }
        return nums;
    }
}