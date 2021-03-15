#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int n,int x){
    int i=0;

    while(i < n){
        if (arr[i] == x){
            return i;
        }

        i+=abs(arr[i]-x);

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
    cout<<search(a,n,x)<<" ";


    return 0;
}