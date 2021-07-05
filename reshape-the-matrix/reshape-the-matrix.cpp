class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int r1= mat.size();
        int c1 = mat[0].size();
        if (r1*c1 != r*c)return mat;
        vector<int>temp;
        for (int i =0;i<r1;i++){
            for (int j=0;j<c1;j++){
                temp.push_back(mat[i][j]);
            }
        }
        vector<vector<int>>res(r,vector<int>(c));
        int k =0;
        for (int i=0;i<r;i++){
            for (int j=0;j<c;j++){
                res[i][j] = temp[k++];
            }
        }
        return res;
    }
};