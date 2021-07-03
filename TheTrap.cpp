#include<bits/stdc++.h>
using namespace std;
int sumofDigits(int n){
    int r,sum=0;
    while(n){
        r= n%10;
        sum+=r;
        n=n/10;
    }
    return sum;
}


int main() {
	// Write your code here
    int l,d,x;
    cin>>l>>d>>x;
    int low = l;
    int high = d;
    bool lowflag= false,highflag= false;
    while(low<high){
        if (sumofDigits(low) == x){
            lowflag =true;
        }
        if (sumofDigits(high) == x){
 			highflag=true;       
        }
        if (lowflag==false)low++;
        if (highflag == false)high--;
        if (lowflag && highflag) break;
    }
    cout<<low<<endl<<high<<endl;
}