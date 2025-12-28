class Solution {
public:
   int helper(int m,int n,vector<int>& dp,int& r){

        if(m==1&&n==1) return 1;
        if(m<1||n<1) return 0;
        if(dp[m+n*r]!=-1) return dp[m+n*r];
        cout<<m<<" "<<n<<endl;
        return dp[m+n*r]=helper(m-1,n,dp,r)+helper(m,n-1,dp,r);
   }


    int uniquePaths(int m, int n) {
        vector<int> dp(m+n*m+1,-1);
        return helper(m,n,dp,m);
    }
};