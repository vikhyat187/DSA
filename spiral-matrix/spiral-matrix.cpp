class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        int left=0,top=0,right=m-1,bottom=n-1;
        int direction=1;
        vector<int>res;
        while(left <=right && top<=bottom){
            if(direction==1){
                for (int i=left;i<=right;i++)res.push_back(matrix[top][i]);
                top++;
                direction=2;
            }
            else if (direction ==2){
                for (int i=top;i<=bottom;i++)res.push_back(matrix[i][right]);
                right--;
                direction=3;
            }
            else if(direction==3){
                for (int i=right;i>=left;i--)res.push_back(matrix[bottom][i]);
                bottom--;
                direction=4;
            }
            else {
                for (int i=bottom;i>=top;i--)res.push_back(matrix[i][left]);
                left++;
                direction=1;
        }
        }
        return res;
    }
};