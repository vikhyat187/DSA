class Solution {
    public String getSmallestString(int n, int k) {
        char[] res = new char[n];
        Arrays.fill(res,'a');

        //now remove n from k and checkif this is 0
        k -= n;

        while(k > 0){
            res[--n] += Math.min(k, 25);
            k -= Math.min(k, 25);
        }
        return String.valueOf(res);
    }
}

/* 

73
a a s z z
1 1 19 26 26

*/