class Solution {
    public int lengthOfLongestSubstring(String s) {
        int left = 0, right = 0;
        int maxLen = 0, len = s.length();
        Map<Character, Integer> map = new HashMap<>();
        while( right < len){
            Character c = s.charAt(right);
            if(map.containsKey(c)){
                maxLen = Math.max(maxLen, right - left);
                left = Math.max(left, map.get(c) + 1);
                
            }
            map.put(c, right++);
        }
        return Math.max(maxLen, right - left);
    }
}