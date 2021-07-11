class Solution {
public:
    int countPalindromicSubsequence(string s) {
        vector<int>f(26,0);
        int n =s.size(),ans=0;
        int first,last;
        for (int i=0;i<n;i++){
            f[s[i]-'a']++;
        }
        for (int i=0;i<26;i++){
            if (f[i]<=1){
                continue;//if the freq is 1 or below it cannot be the first and last char
            }
            first =-1,last =-1;
            for (int j=0;j<n;j++){
                if ((s[j] - 'a')==i){first=j;break;}//it shows that first is char a. so mark first occurance at that pos
                
            }
            for (int j=n-1;j>=0;j--){
                if ((s[j] - 'a')==i){last=j;break;}
                
            }
            // inorder to have unique elements stored use unordered_set
            unordered_set<int>st;
            for (int k=first+1;k<last;k++){
                st.insert((s[k]-'a'));
            }
            ans+=st.size();
        }
        return ans;
    }
};