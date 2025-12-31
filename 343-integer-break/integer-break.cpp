class Solution {
public:
int mxp(int n,vector<int>& dp){
 cout<<n<<endl;
        if(n<=4) return n;
        int mxpp=-1;
        
            if(dp[n]!=-1) return dp[n];
        for(int i=1;i<n;++i){
             mxpp=max(mxpp,i*mxp(n-i,dp));

        }

        return dp[n]=mxpp;
}
    int integerBreak(int n) {

       if(n==2||n==1)  return 1;
       if(n==3) return 2;
       vector<int> dp(n+1,-1);
       return mxp(n,dp);
    }
};