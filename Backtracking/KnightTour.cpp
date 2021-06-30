#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

void display(vector<vector<int>> grid,int n){
    for (int i =0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<grid[i][j]<<" ";

        }
        cout<<endl;
    }
}

bool isEmpty(vector<vector<int>>grid,int row,int col,int n,vector<vector<bool>>visited){
   return row >=0 and row < n and col >=0 and col < n and visited[row][col] == false;
}
void KnightsTour(vector<vector<int>>& grid,int row,int col,int n,int count,vector<vector<bool>>visited){
    //base case 
    if (count == n*n-1){
        // display
        cout<<"reached\n";
        grid[row][col] = count;
        display(grid,n);
        cout<<"\n\n";
        cout<<"done\n";
        return;
    }
    if(count >= n*n)return;

    //recursive case
    int xdir[8] = {-2,-2,-1,-1,2,2,1,1};
    int ydir[8] = {1,-1,2,-2,1,-1,2,-2};
    visited[row][col] = true;
    grid[row][col] = count;
    for (int i =0;i<8;i++){
        if (isEmpty(grid,row + xdir[i],col + ydir[i],n,visited)){
            ///call further
            KnightsTour(grid,row + xdir[i],col + ydir[i],n,count+1,visited);
        }
    }
    // grid[row][col] = -1;
    visited[row][col] = false;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>>grid(n,vector<int> (n,0));
    vector<vector<bool>>visited(n,vector<bool> (n,false));
    // cout<<isEmpty(grid,0,0,n,visited);
    KnightsTour(grid,0,0,n,0,visited);
    display(grid,n);

}