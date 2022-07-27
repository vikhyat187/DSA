class Solution {
    
    public boolean checkEqual(int[] s1Hash, int[] s2Hash){
        for (int i =0 ;i< 26;i++){
            if(s1Hash[i] != s2Hash[i])return false;
        }
        return true;
    }
    
    public boolean checkInclusion(String s1, String s2) {
        int s1Len = s1.length(), s2Len = s2.length();
        int[] s1Hash = new int[26];
        int[] s2Hash = new int[26];
        
        for (int i =0; i < 26; i++){
            s1Hash[i] = 0;
            s2Hash[i] = 0;
        }
        
        if(s1Len > s2Len)return false;
        
        int left =0, right =0;
        while(right < s1Len){
            s1Hash[s1.charAt(right) - 'a']++;
            s2Hash[s2.charAt(right) - 'a']++;
            right++;
        }
        
       right--;
        //now our window is ready 
        while(right < s2Len){
            if(checkEqual(s1Hash,s2Hash) == true)return true;
            right++;
            if(right != s2Len)
                s2Hash[s2.charAt(right) -'a']++;
            s2Hash[s2.charAt(left) - 'a']--;
            left++;
        } 
        return false;
    }
}