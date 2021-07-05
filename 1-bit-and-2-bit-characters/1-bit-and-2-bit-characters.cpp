class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int ones=0;
        for (int i =bits.size()-2;i>=0 and bits[i]!=0;i--){
            ones++;
        }
        if (ones%2>0)return false;
        return true;
    }
};