class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<int>time(dist.size(),0);
        int count=0;
        for (int loop=0;loop<dist.size();loop++){
            time[loop] = ceil(double(dist[loop])/speed[loop]);
        }
        sort(time.begin(),time.end());
        for (int loop=0;loop<time.size();loop++){
            if (time[loop] > loop)count++;
            else break;
        }
        return count;
    }
};
/* [1,2,2,4] loop =1
count =1 
loop =2 
count =2
time=[2,2,3]
if (time[0]>0){
    count++;//1
}
if (time[1]>1){
    count++;//2
}



*/