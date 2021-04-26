#include<bits/stdc++.h>
using namespace std;

int LargestUnique(int arr[],int n){
    if (n == 0){
        return -1;
    }
    if (n == 1){
        return arr[0];
    }
    int last = n - 1 ;
    // checking the last one
    if (arr[last] != arr[last-1]){return arr[last];}

    int currEle,prevEle,nextEle;
    // checking the middle part 
    for (int loop = last -1 ;loop>0;loop--){
        //It should not be >=0 because we are comparing the current element with next and prev so it will be out of boundary
        currEle = arr[loop];
        nextEle = arr[loop + 1];
        prevEle = arr[loop - 1];
        if (currEle != nextEle && currEle != prevEle){
            return currEle;
        }
    }
    // Now we've checked all the elements and we have not found the unique element
    if (arr[0] != arr[1])return arr[0];
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<LargestUnique(arr,n)<<endl;

}