class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        
        sort(target.begin(),target.end());
        sort(arr.begin(),arr.end());
        for (int i=0,j=0;i<target.size() and j<arr.size();i++,j++){
            if (target[i] != arr[j])return false;
        }
        return true;
    }
};