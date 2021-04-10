#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> set;
        int n = candyType.size();
        for (auto i : candyType) set.insert(i);
        if (set.size()>= n/2)return n/2;
        else return set.size();
            
    }
};