class Solution {
public:
    string longestPalindrome(string s) {
        string res;
        int len=s.length();
        
        for (int start=0;start<len;start++){
            string s1=expandLR(s,start,start);
            string s2=expandLR(s,start,start+1);
            if(s1.length()>res.length())res=s1;
            if(s2.length()>res.length())res=s2;
            
        }
        return res;
    }
    string expandLR(string s,int start,int end){
        while(start>=0 and end < s.length() and s[start]==s[end]){
            start--;
            end++;
        }
        return s.substr(start+1,end-start-1);
    }
};