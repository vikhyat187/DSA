class Solution {
    public int majorityElement(int[] nums) {
        Map<Integer, Integer> map = new HashMap<Integer,Integer>();
        
        for (int i=0; i<nums.length; i++){
            if(!map.containsKey(nums[i]))map.put(nums[i],1);
            else{
                int val = map.get(nums[i]);
                map.put(nums[i], val+1);
            }
        }
        
        Map.Entry<Integer,Integer> majourity_entry = null;
        for (Map.Entry<Integer,Integer> entry : map.entrySet()){
            if(majourity_entry == null || entry.getValue() > majourity_entry.getValue())  {
                majourity_entry = entry;
            }
        }
        return majourity_entry.getKey();
    }
}