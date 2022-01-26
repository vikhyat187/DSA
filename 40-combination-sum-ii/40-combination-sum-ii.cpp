class Solution {
public:
    
        void backtrack(vector<vector<int>>&finalRes,vector<int>&currRes,vector<int>&nums,int target,int start){
        if(target < 0)return;
        
        else{
            if(target == 0){
                finalRes.push_back(currRes);
            }
            else {
                for (int i=start; i < nums.size(); i++ ){
                    if(i > start and nums[i] == nums[i-1])continue;
                        currRes.push_back(nums[i]);
                        backtrack(finalRes,currRes,nums,target-nums[i],i+1);
                        currRes.pop_back();
                }
            }
        }
    }
    
    
   vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
         vector<int> currRes;
        vector<vector<int>> finalRes;
        sort(candidates.begin(),candidates.end());
        backtrack(finalRes,currRes,candidates,target,0);
        return finalRes;
    }
};