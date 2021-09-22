class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_len=0;
        int left=0,right=0;
        vector<int>map(256,-1);
        int len=s.size();
        while(right<len){
            if(map[s[right]]!=-1){
                left=max(left,map[s[right]]+1);
            }
            max_len=max(max_len,right-left+1);
            map[s[right]]=right;
            right++;
        }
        return max_len;
    }
};