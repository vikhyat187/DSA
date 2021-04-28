#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
//TLE
    int minOperations(int n) {
        int arr[n], avg=0;
        for (int i=0;i<n;i++){
            arr[i] = 2*i +1;
            avg+=arr[i];

        }  
        int start,end,count=0;
        avg /=n;
        start =0,end =n-1;      
        while(start<=end){
            while(arr[start]!= avg && arr[end] != avg){
                count++;
                arr[start]++;
                arr[end]--;
            }
            start++;
            end--;
        }
        cout<<count<<endl;
        return count;
    }
};