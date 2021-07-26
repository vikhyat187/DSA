class Solution {
public:
    int maximum69Number (int num) {
        string res= to_string(num);
        for (auto &ch : res){
            if (ch == '6'){
                ch= '9';
                break;
                
            }
        }
        return stoi(res);
    }
};