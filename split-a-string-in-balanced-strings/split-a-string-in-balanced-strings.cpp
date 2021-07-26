class Solution {
public:
    int balancedStringSplit(string s) {
        int charBalance=0,count=0;
        for (auto ch:s){
            if (ch == 'L')charBalance++;
            else charBalance--;
            if (charBalance == 0)count++;
        }
        return count;
    }
};