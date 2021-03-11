#include<bits/stdc++.h>
using namespace std;
bool check (string s){
    int i=0;
    char top;
    stack <char>st;
    for (i;i<s.length();i++){
        if (s[i]=='(')st.push(')');
        else if (s[i] == '[') st.push(']');
        else if (s[i] == '{') st.push('}');
        else if(st.empty() || st.top()!=s[i])return false;
        else st.pop();
    }
    return st.empty();
}


int main(){
    string seq;
    cin>>seq;
    cout<<check(seq);

    return 0;
}