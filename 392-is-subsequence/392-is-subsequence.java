class Solution {
    public boolean isSubsequence(String s, String t) {
        if(s.length() == 0)return true;
        int s_ptr =0, t_ptr =0;
        
        while(s_ptr < s.length() && t_ptr < t.length()){
            if(s.charAt(s_ptr) == t.charAt(t_ptr)){
                s_ptr++;
                
            }
            t_ptr++;
            if(s_ptr == s.length())return true;
        }
        return false;
    }
}