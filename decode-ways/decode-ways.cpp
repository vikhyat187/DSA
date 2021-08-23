class Solution {
public:
    int numDecodings(string s) {
        int n=s.length();
        vector<int>dp(n+1,0);
        
        //now dp[0]=1
        dp[0]=1;
        if (s[0]!='0')dp[1]=1;
        for (int i =2;i<=n;i++){
            int op1Res=s[i-1]-'0';
            int op2Res=(s[i-2]-'0')*10 + s[i-1]-'0';
            
            if (op1Res >= 1)
                dp[i] +=dp[i-1];
            if (op2Res>=10 && op2Res<=26)
                dp[i] +=dp[i-2];
        }
        for (int i =0;i<=n;i++)cout<<dp[i]<<" ";
        return dp[n];
    }
    
};