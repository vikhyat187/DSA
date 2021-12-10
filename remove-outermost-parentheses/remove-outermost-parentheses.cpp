class Solution {
public:
    string removeOuterParentheses(string s) {
        int stk=0;
        string ans="";
        for (auto ch:s){
            if(ch=='('){
                if(stk>0){
                    ans+='(';
                }
                stk++;
            }
            else{
                if(stk>1){
                    ans+=')';
                }
                stk--;
            }
        }
        return ans;
    }
};