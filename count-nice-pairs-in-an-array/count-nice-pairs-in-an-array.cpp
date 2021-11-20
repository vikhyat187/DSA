class Solution {
public:
    int rev(int n){
        int d=0,r;
        while(n){
            r=n%10;
            d=d*10+r;
            n/=10;
        }
        return d;
    }
    int countNicePairs(vector<int>& nums) {
        long count=0;
        unordered_map<int,long>mp;
        for(auto& num:nums){
            mp[num-rev(num)]++;
        }
        for(auto& pair:mp){
            count=(count+(pair.second*(pair.second-1))/2)%1000000007;
        }
        
        
        return count;
    }
};