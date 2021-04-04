#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int candy(vector<int>& ratings) {
        int len= ratings.size();
        vector<int> NoOfCandies(len,1);

        // firstly check the left one greater than right one
        int loop,sum=0;
        for (loop = 1;loop < len ; loop++){
            if (ratings[loop] > ratings[loop-1]){
                NoOfCandies[loop] = NoOfCandies[loop - 1] + 1;
            }
        }

        // next check the right one greater than right one
        for (loop = len - 1;loop > 0; loop--){//do not go upto 0 as ratings [-1] is not defined
            if (ratings[loop - 1] > ratings[loop]){
                NoOfCandies[loop -1 ] = max(NoOfCandies[loop-1 ],NoOfCandies[loop] + 1);
            }
        }
        for (auto loop : NoOfCandies){
            sum+= loop;
        }
        cout<<sum<<endl;
        return sum;
    }
};