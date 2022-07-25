class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adjList(n,vector<int>());
        vector<int> degree(n,0);
        
        for (auto &ele : prerequisites){
            adjList[ele[1]].push_back(ele[0]);
            degree[ele[0]]++;
        }
        
        
        queue<int> q;
        for (int i =0; i < n; i++){
            if(degree[i] == 0)q.push(i);
        }
        
        while(!q.empty()){
            int curr = q.front();
            n--;
            q.pop();
            for (auto adj : adjList[curr]){
                degree[adj]--;
                if(degree[adj] == 0){
                    q.push(adj);
                }
            }
        }
        return n == 0;
    }
};