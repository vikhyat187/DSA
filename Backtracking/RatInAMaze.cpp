#include<iostream>
using namespace std;
#include<vector>
void insertPath(vector<vector<int>>&visited,vector<vector<int>>&ans){
    vector<int> currentSol;
    for (int i=0;i< visited.size();i++){
        for (int j=0;j<visited[0].size();j++){
            currentSol.push_back(visited[i][j]);
        }
    }
    ans.push_back(currentSol);
}


void solveMaze(vector<vector<int>> maze,vector<vector<int>>& visited,vector<vector<int>>&ans,int i,int j,int n){
    //first check if the rat has reached dest
    if (i == n-1 && j == n-1){
        insertPath(visited,ans);
        return;
    }

    // check if the move is valid or not  

    if (i < 0 || i > n-1 || j < 0 || j > n-1)
    return;

    visited[i][j] = 1;
    solveMaze(maze,visited,ans,i+1,j,n);
    solveMaze(maze,visited,ans,i,j+1,n);
    solveMaze(maze,visited,ans,i-1,j,n);
    solveMaze(maze,visited,ans,i,j-1,n);
}


vector<vector<int>> ratInAMaze(vector<vector<int>>maze,int n){
    vector<vector<int>> visited(n,vector<int>(n,0));//fill the visited matrix with all zeros
    vector<vector<int>>ans;//to store the final paths
    solveMaze(maze,visited,ans,0,0,n);

    return ans;
}



int main(){

    int n,ele;
    cin>>n;
    vector<vector<int>> maze;
    vector<int>row;
    for (int i=0;i<n;i++){
        row = {};
        for (int j=0;j<n;j++){
            cin>>ele;
            row.push_back(ele);
        }
        maze.push_back(row);
    }
    vector<vector<int>>ans;
    ans.push_back(solveMaze(maze,n));

    for (int i=0;i<ans.size();i++){
        for (int j=0;j<ans[0].size();j++)
        cout<<ans[i][j]<<" ";
    }


    return 0;
}