class Solution {
public:
    int strStr(string haystack, string needle) {
        int i,j,m=haystack.length(),n= needle.length();
        // if (haystack=="" && needle="")return 0;
        for (i=0;i<=m-n;i++){
            j=0;
            for (;j<n;j++){
                if (haystack[i+j] != needle[j])break;
            }
            if (j== n)return i;
        }
        return -1;
    }
};