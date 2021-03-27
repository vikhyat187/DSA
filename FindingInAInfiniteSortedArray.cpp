#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int a[],int low , int high, int key){
        int mid;
        while(low <= high){
              mid = low + (high - low)/2;
        if (a[mid] == key){
            return mid;

        }
        else if (a[mid] > key){
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return -1;
}
int binarySearchHelper(int a[],int k,int n){

    int low =0,high=1;
    int val= a[0];
    while(val<=k){
        low = high;
        high = high * 2;
        val = a[high];
    }
    return BinarySearch(a,low,high,k);
}


int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++){
    cin>>a[i];
    }
    int k;
    cin>>k;
    cout<<binarySearchHelper(a,k,n)<<endl;

    return 0;
}