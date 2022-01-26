class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> currRes;
        vector<vector<int>> finalRes;
        backtrack(finalRes,currRes,k,n,1);
        return finalRes;
    }
           void backtrack(vector<vector<int>>&finalRes,vector<int>&currRes,int k,int target,int start){
        if(currRes.size() > k)return;
        
        else{
            if(currRes.size() == k and target == 0 ){
                finalRes.push_back(currRes);
            }
            else {
                for (int i=start; i <=9 ; i++ ){
                    // if(i > start and nums[i] == nums[i-1])continue;
                        currRes.push_back(i);
                        backtrack(finalRes,currRes,k,target-i,i+1);
                        currRes.pop_back();
                }
            }
        }
    }

};
/*

k=3 n=7
    
    
    
*/