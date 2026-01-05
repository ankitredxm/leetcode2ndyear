class Solution {
public:
vector<vector<int>> dp;


int f(vector<vector<int>>& grid,int i,int j){
    if(i<0||j<0) return INT_MAX;
    if(i==0&&j==0) return grid[i][j];
    if(dp[i][j]!=-1) return dp[i][j];
    int t=grid[i][j]+min(f(grid,i-1,j),f(grid,i,j-1));
    return dp[i][j]=t;
}

    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        dp.resize(m+1,vector<int>(n+1,-1));
        return f(grid,m-1,n-1);
    }
};