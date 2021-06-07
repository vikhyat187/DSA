class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int a[nums.size()],prevsum=0;
        for (int i=0;i<nums.size();i++){
            a[i] =nums[i] + prevsum;
            prevsum = a[i];
        }
        //check for pivot index
        int leftSum=0,rightSum=0;
        for (int i=0;i<nums.size();i++){
            if (i-1>=0){
                leftSum=a[i-1];
            }
            rightSum= a[nums.size()-1] - a[i];
            if (leftSum == rightSum){
                return i;
            }
        }
        return -1;
    }
};