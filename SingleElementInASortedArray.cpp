#include<bits/stdc++.h>
using namespace std;
// leetcode

int singleNonDuplicate(vector<int> & nums){
    int low = 0,high = nums.size()-1;
    
    int mid;
    while(low <= high){
        mid = low + (high - low)/2;
        if (mid % 2==1) mid--;//check if it is even index to check for a pair

        if (nums[mid] != nums[mid + 1])high = mid;//if the even index is not matching a pair then missing element is on the left side
        else low = mid + 2;
    }
    return nums[low];

}


