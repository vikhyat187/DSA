#include<bits/stdc++.h>
using namespace std;
int binarySearch(int a[],int n,int target){
    int low=0;
    int high=n-1;
    while(low <= high){

    int mid = low +(high - low)/2;
    // check if the mid is itself the target value if so return directly
    if (a[mid] == target){
        return mid;
    }
    //check if the mid is in the first part 
    else if (a[low]<=a[mid]){
        if (a[low] <= target && a[mid] >= target){high = mid-1;}
        // here we are checking if the target lies in the first area
        else low = mid + 1;
        
    }
    else{
        if (a[mid] <= target && a[high] >= target){
            low = mid + 1;
        }
        else high = mid -1;
    }

    }
    return -1;

}
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int target;
    cin>>target;

    cout<<binarySearch(a,n,target);


//code goes here
return 0;
}