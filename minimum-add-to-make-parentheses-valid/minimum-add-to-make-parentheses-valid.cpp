class Solution {
public:
    int minAddToMakeValid(string S) {
        int close =0;
        stack<int> st;
        for (int i=0;i<=S.size();i++){
            if (S[i] == '(') {
                st.push(S[i]);
            }
            else{
                if (S[i] == ')'){
                    if (st.empty()){
                        close++;
                    }
                    else{
                        st.pop();
                    }
                }
            }
        }
        return st.size() + close;
    }
};