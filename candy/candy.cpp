class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int>res(ratings.size(),1);
        int ans=0,i;
        
        for ( i=1;i<ratings.size();i++){
            if (ratings[i] > ratings[i-1] and res[i] <= res[i-1]){
                res[i] = res[i-1]+1;
            }
        }
        
        //right check 
        for (i =ratings.size()-2;i>=0;i--){
            if(ratings[i] > ratings[i+1] and res[i]<=res[i+1]){
                res[i]= res[i+1]+1;
            }
        }
        
        
        for (i=0;i<res.size();i++){
            ans+=res[i];
            cout<<res[i]<<" ";
        }
        return ans;
    }
};
/*

    [1,2,3,4,4,3,2,1]

left 1 2 3 4 1 1 1 1
right 1  2  3  4  4 3  2  1







*/