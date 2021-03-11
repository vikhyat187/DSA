#include<bits/stdc++.h>
using namespace std;
int SplitPossible(string s){
    int count=0,zeros=0,ones=0,last=-1;
    for (int i=0;s[i]!='\0';i++){
        if (s[i]=='0'){
            if(last==1) zeros=0;
            zeros++;
            last=0;
        }
        else{
            if (last==0) ones=0;//here we reset the value if the value changes from 1 to 0
            ones++;
            last=1;
        }
        if( (last==1 && zeros>=ones)||(last==0 && ones>=zeros))count++;

    } 
    return count;

}

int main(){
    string s;
    cin>>s;
    cout<<SplitPossible(s);
    return 0;
}