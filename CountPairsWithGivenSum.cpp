#include<bits/stdc++.h>
using namespace std;
int getPairsCount(int arr[] ,int n,int target){
    sort (arr,arr+n);
    int i=0,j=n-1;
    int ans=0;
    int sum;
    while(i<j){
        sum=arr[i]+arr[j];
        if (sum>target)j--;
        else if (sum<target)i++;
        else{
            i++;
            j--;
            ans++;
            while(i<j && arr[i] == arr[i-1])i++;
            while(i<j && arr[j] == arr[j + 1])j--;
        }
    }
    return ans;
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
    cout<<getPairsCount(a,n,target);

    return 0;
}