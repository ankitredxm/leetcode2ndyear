class Solution {
public:
int dp[100005][2][2];
int f(vector<int>& p,int i,int k,bool on){
    if(i==p.size()) return 0;
    int ans=INT_MIN;
    if(dp[i][k][on]!=-1) return dp[i][k][on];
    ans=f(p,i+1,k,on);

    if(on==false){
        if(k>0)
        ans=max(ans,f(p,i+1,k,true)-p[i]);
    }
    else{
        ans=max(ans,f(p,i+1,k-1,false)+p[i]);
    }


    return dp[i][k][on]=ans;
}






    int maxProfit(vector<int>& prices) {
        memset(dp,-1,sizeof dp);
        return f(prices,0,1,false);
    }
};