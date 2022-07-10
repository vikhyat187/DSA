class Solution {
public:
    string decodeString(string s) {
        cout<<s.size();
        int pos =0;
        return helper(pos, s);
    }
    string helper(int& pos, string s){
        int num = 0;
       
        string word= "";
        
        for (;pos < s.size(); pos++){
            char ch = s[pos];
            
            if (ch == '['){
                string currword = helper(++pos,s);
                for (;num > 0; num--){
                    word += currword;
                }
            }
            else if (ch >= '0' && ch <= '9'){
                num = num * 10 + ch -'0';
            }
            else if (ch == ']'){
                return word;
            }
            //else only char
            else {
                word += ch;
            }
        }
        return word;
    }
};