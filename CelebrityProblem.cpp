#include<iostream>
using namespace std;
class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        // cout<<n;
        vector<int>inedges(n,0),outedges(n,0);
        for (int i=0;i<=n-1;i++){
            for (int j=0;j<=n-1;j++){
                if (i!= j && M[i][j] == 1){
                    inedges[j]++;
                    outedges[i]++;
                }
            }
        }
        for (int i =0;i<=n-1;i++){
            if (inedges[i] == n -1 && outedges[i] ==0)return i + 1;
        }
        return -1;
    }
};