class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>res;
        
        int size= nums.size(),i;
        k=k%size;
        for ( i=size-k;i<size;i++){
            res.push_back(nums[i]);
        }
        for (i=0;i<size-k;i++){
            res.push_back(nums[i]);
        }
        for ( i=0;i<res.size();i++){
            nums[i]= res[i];
        }
    }
};