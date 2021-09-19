class Solution {
public:
    bool isPalindrome(string s) {
        char ch[s.size()+1];
        int j=0,i=0;
        for(int i=0;i<s.size();i++){
            if (s[i]>='a' && s[i]<='z')ch[j++]=s[i];
            else if (s[i] >='A' && s[i]<='Z')ch[j++]=s[i]+32;
            else if (s[i]>='0' && s[i]<='9')ch[j++]=s[i];
        }
        ch[j]='\0';
        int length=0;
        for (i=0;ch[i]!='\0';i++){
            length++;
          
        }
        i=0,j=length-1;
     while(i<j){
         if (ch[i]!=ch[j])return false;
         if (ch[i]==ch[j])i++,j--;
     }
        return true;
    }
};