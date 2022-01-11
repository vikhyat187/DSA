class Solution {
public:
   
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=0,mid;
        for (int i=0;i<piles.size();i++){
            high = max(high,piles[i]);
        }
        while(low < high){
            mid = low + (high - low)/2;
           int hourspent=0;
            
            for (int pile:piles){
                hourspent+=pile/mid + (pile % mid !=0);
            }
            if (hourspent <= h){
                high = mid;
            }else{
                low = mid + 1;
            }
        }
        return high;
    }
};