#include<bits/stdc++.h>
using namespace std;
bool possibleToMakeTriangle(vector<int> &arr)
{
    //  Write your code here
    int len= arr.size()-1;
    sort (arr.begin(),arr.end());
    for (int i=len-1;i>0;i--){
        if (arr[i] + arr[i+1]> arr[i-1] && arr[i] + arr[i-1]> arr[i+1] && arr[i-1] + arr[i+1]> arr[i] ){
            return true;
        }
    }
    return false;

}