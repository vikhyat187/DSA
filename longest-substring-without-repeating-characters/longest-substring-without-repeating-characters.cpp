class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
       int output=0;
        for (int i =0;i<s.size();i++){
            unordered_set<char>set;
            int j=i;
            for(;j<s.size();j++){
                if (set.count(s[j]))break;
                else{
                    set.insert(s[j]);
                }
            }
            if (output<j-i){
                output=j-i;
            }
        }
        return output;
    }
};