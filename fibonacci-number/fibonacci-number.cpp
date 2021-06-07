class Solution {
public:
    int fib(int n) {
        int dp[100]={0};
        if (n<=1){
            dp[n]=n;
            return dp[n];
        }
        if (dp[n]!=0)return dp[n];
        dp[n]=fib(n-1) + fib(n-2);
        return dp[n];
    }
};