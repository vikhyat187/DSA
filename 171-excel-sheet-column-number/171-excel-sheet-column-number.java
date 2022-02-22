class Solution {
    public int titleToNumber(String columnTitle) {
        int len = columnTitle.length() - 1;
        int ans =0;
        
       for (int i = len, j=0; i>=0 ; i--,j++){
           ans += Math.pow(26,j) * (columnTitle.charAt(i) - 'A'  + 1);
       }
        return ans;
    }
}