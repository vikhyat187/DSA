class Solution {
    public int ones(int n){
        int ones = 0;
        
        while(n != 0){
            ones += (n & 1);
            n = n>>>1;
        }
        return ones;
    }
    
    
    public int[] countBits(int n) {
        int arr[] = new int[n + 1];
        
        for (int i = 0; i <= n; i++){
            arr[i] = ones(i);
        }
        return arr;
    }
}