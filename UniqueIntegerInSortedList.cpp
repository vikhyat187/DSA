#include<bits/stdc++.h>
using namespace std;
int NoOfUniqueEle(vector<int> & nums){
    unordered_set<int> s;
    for (int i=0;i<nums.size();i++){
        s.insert(nums[i]);
    }
    return s.size();
}

int main(){
    vector<int>nums;
    int n,a;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a;
        nums.push_back(a);
    }
    cout<<NoOfUniqueEle(nums);
    return 0;
}
