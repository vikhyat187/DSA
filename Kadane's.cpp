#include<bits/stdc++.h>
using namespace std;
int Maxsum(int a[],int n){
    int maxSumSofar=INT_MIN;
    int currentSum=0;
    for (int i=0;i<n;i++){
        currentSum = max(a[i],currentSum+a[i]);
        maxSumSofar = max (maxSumSofar,currentSum);
    }
    return maxSumSofar;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++){
    cin>>a[i];
    }
    cout<<Maxsum(a,n)<<endl;


    return 0;
}