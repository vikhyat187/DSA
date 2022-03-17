class Solution {
public:
   int recur(string s,int start,int end){
        int ans=0,bal=0;
        cout<<start<< " "<<end<<endl;
        for (int k=start;k<end;k++){
            bal+=s[k]=='('?+1:-1;
            if (bal==0){
                if (k-start==1)ans+=1;
                else ans+=2*recur(s,start+1,k);
                start=k+1;
            }
        }
        return ans;
    }
    int scoreOfParentheses(string s) {
        return recur(s,0,s.length());
    }
};