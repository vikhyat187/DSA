#include<iostream>
#include<vector>
using namespace std;
class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
      int celeb =0;
      for (int i =1;i<n;i++){
          if (M[celeb][i] == 1)
          celeb =i;
      }
      //checking if the final preferable celeb is actual celeb or not
      for (int i=0;i<n;i++){
          if (i!= celeb && (M[i][celeb] ==0 || M[celeb][i] == 1))
          return -1;
      }
        return celeb;
    }
};
int main(){
    Solution obj;
    vector<vector<int>> v;
    // v.push_back({0,0,0,1,0});
    // v.push_back({0,0,0,1,0});
    // v.push_back({0,0,0,1,0});
    // v.push_back({0,0,0,0,0});
    // v.push_back({0,0,0,1,0});
    // cout<<obj.celebrity(v,5);
    v.push_back({0,0,0});
    v.push_back({0,0,0});
    v.push_back({0,0,0});
    cout<<obj.celebrity(v,3);
}