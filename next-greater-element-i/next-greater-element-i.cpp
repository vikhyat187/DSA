class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       int n1=nums1.size();
        vector<int>res(n1,-1);
        if(nums1.size()==0)return res;
        bool flag=false;
        int n2=nums2.size();
        for (int i=0;i<n1;i++){
            flag=false;
            for (int j=0;j<n2;j++){
                if(nums1[i]==nums2[j]){
                   flag=true; 
                }
                if(nums1[i]<nums2[j] && flag){
                    res[i]=nums2[j];
                    break;
                }
            }
        }
        return res;
    }
};

//dry run

// [4,1,2] [1,3,4,2]
// [-1,]