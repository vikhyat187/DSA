#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int n,int x,int k){
    int i=0;

    while(i < n){
        if (arr[i] == x){
            return i;
        }

        i+=max(1,abs(arr[i]-x)/k);

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
    int x;
    cin>>x;
    int k;
    cin>>k;
    cout<<search(a,n,x,k)<<" ";


    return 0;
}