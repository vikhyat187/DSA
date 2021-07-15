class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int count=0;
        if (nums.size()<3)return count;
        
        sort(nums.begin(),nums.end());
        
        // 3 pointer based approach similar to 3sum
        for(int k=nums.size()-1;k>1;k--){
            for (int j=k-1,i=0;i<j;){
                if (nums[i] + nums[j] > nums[k]){
                    count+=j-i;
                    j--;
                }else i++;
            }
        }
        return count;
        
    }
};