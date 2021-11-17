class Solution {
public:
    void DFS(vector<vector<int>>&isConnected,int row,vector<bool>&visited){
        for(int col=0;col<isConnected[0].size();col++){
            if(isConnected[row][col]==0)continue;
            else if (!visited[col]){
                visited[col]=true;
                DFS(isConnected,col,visited);
            }
        }
    }
    
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        int count=0;
        vector<bool> visited (isConnected.size(),false);
        for (int row=0;row<isConnected.size();row++){
            if(!visited[row]){
                visited[row]=true;
                count++;
                DFS(isConnected,row,visited);
            }
        }
        return count;
    }
};

// [[1,1,0],
//  [1,1,0],
//  [0,0,1]]
 
// visited [t,]

//             d(0,0)      d(2,2) so 2 components
//           d(0,1)
//         None