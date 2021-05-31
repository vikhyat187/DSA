class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int i,res = duration;
        for (i = 0;i<timeSeries.size()-1;i++){//it should go one element before as it would lead to outof bound access
            res += min(duration,timeSeries[i+1]-timeSeries[i]);
        }
        return res;
    }
};