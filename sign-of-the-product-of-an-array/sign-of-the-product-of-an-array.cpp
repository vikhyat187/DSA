class Solution {
public:
    int arraySign(vector<int>& nums) {
        // base case check for 0
        for (int i =0;i<nums.size();i++){ if (nums[i] ==0 ) return 0;}
        
        //check for no of neg values
        int countNeg=0;
        for (int i =0;i<nums.size();i++){
            if (nums[i] <0 )countNeg++;
        }
        if (countNeg%2 == 0)return 1;
        return -1;
    }
};