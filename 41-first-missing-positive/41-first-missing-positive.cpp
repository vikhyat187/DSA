class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i=1;
        sort(nums.begin(),nums.end());
        for (auto num:nums){
            if(num > 0 and num == i)i++;
        }
        return i;
    }
};
/*
 [1,2,0]
 [0,1,2]
        3
[3,4,-1,1]
[-1,1,3,4]
        
  
 */