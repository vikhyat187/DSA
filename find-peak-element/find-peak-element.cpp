class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left,right,n=nums.size();
        for (int i=0;i<nums.size();i++){
            if (i==0){
                right=i+1;
                while(right<n){
                    if (nums[i] < nums[right]){break;}
                    right++;
                }
                if (right == n)return i;
            }
             if (i== n-1){
                      left=i-1;
                while(left>=0){
                    if (nums[i] < nums[left]){break;}
                    left--;
                }
                if (left == -1)return i;
            }
            else {
                left = i-1,right = i+1;
                // while(left >=0 or right <= n-1){
                //     if (nums[i] < nums[left] || nums[i] < nums[right])break;
                //     right++;
                //     left--;
                // }
                while(left >=0){
                    if (nums[i]< nums[left])break;
                    left--;
                }
                while(right <=n-1){
                    if (nums[i]< nums[right])break;
                    right++;
                }
                if(left ==-1 and right ==n)return i;
            }
        }
        return -1;
    }
};