class Solution {
public:
    bool find(vector<vector<char>>&grid,string word,int i,int m,int n,int row,int col){
        if (word.size()==1){return true;}
        if (row < 0 or row >=m or col < 0 or col >=n )return false;
        if(i==word.size())return true;
        if (grid[row][col] != word[i])return false;
        grid[row][col] = '$';
        bool ret = find(grid,word,i+1,m,n,row-1,col) || find(grid,word,i+1,m,n,row+1,col) || find(grid,word,i+1,m,n,row,col-1) || find(grid,word,i+1,m,n,row,col+1);
        grid[row][col] = word[i];
        return ret;
    }
  bool exist(vector<vector<char>>&grid,string word){
        for (int i=0;i<grid.size();i++){
            for (int j=0;j<grid[0].size();j++){
                if (grid[i][j] == word[0]){
                    if(find(grid,word,0,grid.size(),grid[0].size(),i,j))return true;
                }
            }
        }
        return false;
    }

};

/* a b c e 
   s f c s 
   a d e e 
   */