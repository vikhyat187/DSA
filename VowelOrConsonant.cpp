#include<bits/stdc++.h>
using namespace std;
string VowelOrConsonant(char i){
    if (i=='a'||i=='e'||i=='o'||i=='u'||i=='i'){
        return "vowel";
    }
    else return "consonant";
}
int main(){
    char c;
    cin>>c;
    if (c>='a' && c<='z' || c>='A' && c<='Z'){

    cout<<VowelOrConsonant(c);
    }
    else 
    cout<<"Enter a valid char";



    return 0;
}