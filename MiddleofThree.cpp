#include<bits/stdc++.h>
using namespace std;
int middle(int a,int b,int c){
    int mx=max(max(a,b),c);
    int mn= min(min(a,b),c);
    return a^b^c^mn^mx;
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    cout<<middle(a,b,c);



    return 0;
}