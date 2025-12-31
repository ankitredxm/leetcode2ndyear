class Solution {
public:
    int integerBreak(int n) {
        // top down
        if(n==1||n==2) return 1;
        if(n==3) return 2;

        vector<int> dp(n+1,-1);
        dp[0]=1;
        dp[1]=1;
        dp[2]=2;
        dp[3]=3;
        dp[4]=4;
        int mx=-1;
        for(int i=5;i<=n;++i){
            for(int j=1;j<i;++j){

                mx=max(mx,dp[j]*dp[i-j]);

            }
            dp[i]=mx;
        }

        return dp[n];
    }
};