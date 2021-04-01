#include<bits/stdc++.h>
using namespace std;

// check if the each char is mapped to the same char 
// len is same 
// only one to one mapping allowed
bool isIsomorphic(string s,string t){
    int n= s.size();
    map <char ,char>mp;
    set<char>x;
    for (int i=0;i<n;i++){
        if (mp.count(s[i])==0 && x.count(t[i])==0){
            // checking both values in string 1 and string 2 are not present
            mp[s[i]] = t[i];
            x.insert(t[i]);
        }
        // check if the value is mapped to other value
        else if (mp.count(s[i]) == 0 && x.count(t[i])!=0){
            // which means the value is mapped to someother value
            return false;
        }
        else if (mp[s[i]]!=t[i]){
            // checking if the value in string 1 is mapped to multiple values
            return false;
        }

    }
    return true;
}