class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int i=0,j=matrix[0].length-1,n=matrix.length;
        while(i<n && j>=0){
            if (matrix[i][j]== target){
                return true;
            }
            else if(target>matrix[i][j])i++;
            else j--;
        }
        return false;
    }
}