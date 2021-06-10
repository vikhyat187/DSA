#include<iostream>
#include<vector>
using namespace std;

pair<int,int> search(vector<vector<int>> matrix, int x)
{
    // Write your code here.
    int row_size= matrix.size(),size = matrix[0].size();
    int row =0,col = size-1;
    // cout<<row_size<<" "<<size<<" "<<endl;
    while(row < row_size && col>=0){ 
        if (matrix[row][col] ==x ){
            return make_pair(row,col);
        }
        if (matrix[row][col] > x)col--;
        if(matrix[row][col] < x)row++;
        
    }
    return make_pair(-1,-1);
}
int main(){
    vector<vector<int>> matrix={{1,2,5},{3,4,9},{6,7,10}};
    int x=6;
    pair<int,int> res= search(matrix,x);
    cout<<res.first<<" "<<res.second<<endl;
    return 0;
}
/*
1 2 5
3 4 9
6 7 10
*/