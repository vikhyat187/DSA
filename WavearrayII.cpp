#include<bits/stdc++.h>
using namespace std;
void wavearray(vector<int> & nums){
    //the ele in even position is greater than the odd position ones
    int temp;
    for (int i=0;i<nums.size()-1;i+=2){
        if (nums[i]<nums[i+1]){
            temp=nums[i];
            nums[i]=nums[i+1];
            nums[i+1]=temp;
        }
    }


    for (auto i:nums){
        cout<<i<<" ";
    }
}

int main(){
    vector<int>nums;
    int n,a;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a;
        nums.push_back(a);
    }
    wavearray(nums);
    return 0;
}
