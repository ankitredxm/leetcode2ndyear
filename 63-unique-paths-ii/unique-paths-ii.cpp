class Solution {
public:
   int helper(vector<vector<int>>& arr,vector<vector<int>>& dp,int m,int n){
    if(m<0||n<0||arr[m][n]==1) return 0;
    if(m==0&&n==0) return 1;
    
    if(dp[m][n]!=-1) return dp[m][n];



    return dp[m][n]=helper(arr,dp,m-1,n)+helper(arr,dp,m,n-1);
   }




    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        int m=arr.size();
        int n=arr[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return helper(arr,dp,m-1,n-1);
    }
};