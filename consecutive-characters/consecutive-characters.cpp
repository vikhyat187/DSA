class Solution {
public:
    int maxPower(string s) {
        int count=1;
        
        int max_count=1;
        for (int i=1;i<s.length();i++){
            if(s[i-1] == s[i])count++;
            else count=1;
            max_count=max(max_count,count);
            
        }
        return max_count;
    }
};