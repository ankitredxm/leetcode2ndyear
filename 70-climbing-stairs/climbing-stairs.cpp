class Solution {
public:
    int st(int n,vector<int>& dp){
          if(n==2||n==1){
            return n;
        }
        if(dp[n]!=0) return dp[n];
        return dp[n]=st(n-1,dp)+st(n-2,dp);
    }
    int climbStairs(int n) {
       vector<int> dp(n+1,0);
       return st(n,dp);
    }
};