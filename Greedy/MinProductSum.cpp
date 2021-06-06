#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
    public: 
    int minProductSum(vector<int>&nums1,vector<int>&nums2){
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end(),greater<int>());
        return  innerProduct(nums1,nums2);
    }
    private:
    int innerProduct(const vector<int> &nums1,const vector<int> &nums2){
        int res=0;
        for(int i=0;i<nums1.size();i++){
            res += nums1[i] * nums2[i];
        }
        return res;
    }
};
int main(){
    int t,i=1;
    cin>>t;
    while(i<=t){
    vector<int> first,second;
        int n,ele;
        cin>>n;
        for (int i=0;i<n;i++){
            cin>>ele;
            first.push_back(ele);
        }
        for (int i=0;i<n;i++){
            cin>>ele;
            second.push_back(ele);
        }
    Solution obj;
    cout<<"Case #"<<i++<<": "<<obj.minProductSum(first,second)<<endl;
    }

    return 0;
}