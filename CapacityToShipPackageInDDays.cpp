#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int D) {
        int left,right;
        for (auto w:weights){
            left = max(left, w);
            right+= w;

        }
        while(left < right){
            int mid = left  + (right - left )/2;
            int days =1 ,curr= 0;
            for (auto w:weights){
                if (curr + w> mid){
                    days++;
                    curr= 0;
                }
                curr+=w;
            }
            if (days >D){left = mid + 1;}//here the no of days are not sufficient
            else right = mid;
        }
        return left;
    }
};