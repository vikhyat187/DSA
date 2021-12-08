class Solution {
public:
    int winner(vector<int>&nums,int start,int end,int turn){
        if(start==end){return turn*nums[start];}
        int a=turn*nums[start]+winner(nums,start+1,end,-turn);
        int b=turn*nums[end]+winner(nums,start,end-1,-turn);
        return turn*max(turn*a,turn*b);//it will act as max() on player1 turn and min on player2 turn 
    }
    bool PredictTheWinner(vector<int>& nums) {
        return winner(nums,0,nums.size()-1,1)>=0;
    }
};