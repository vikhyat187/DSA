class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>res;
        int max,i,j;
        for (i=0;i<nums.size();i++){
            if (nums[i]==target){res.push_back(i);break;}
        }
        for (j=0;j<nums.size();j++){
            if (nums[j] == target)max=j;
        }
        if (i==nums.size() and j== nums.size()){res.push_back(-1);res.push_back(-1);}
        else res.push_back(max);
        return res;
    }
};