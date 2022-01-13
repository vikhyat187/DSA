class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int>set;
        for (auto num:nums){
            if(num > 0)set.insert(num);
        }
        int i=1;
        while(true){
            if(set.find(i)!=set.end())i++;
            else break;
            
        }
        return i;
    }
};

/*
[7,8,9,11,12]

set[7,8,9,11,12]


*/