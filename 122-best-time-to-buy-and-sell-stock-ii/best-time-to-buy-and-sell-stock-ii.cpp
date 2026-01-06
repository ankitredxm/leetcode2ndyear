class Solution {
public:


int dp[30005][2];

int f(vector<int>& p,int i,bool on){
    if(i==p.size()) return 0;
    int ans=INT_MIN;
    if(dp[i][on]!=-1) return dp[i][on];
    ans=f(p,i+1,on);
    if(on){
        ans=max(ans,f(p,i+1,false)+p[i]);
        ans=max(ans,f(p,i+1,true)-p[i]);
    }
    else{
        ans=max(ans,f(p,i+1,true)-p[i]);
    }

    return dp[i][on]=ans;
}













    int maxProfit(vector<int>& prices) {
        memset(dp,-1,sizeof dp);
        return f(prices,0,false);
    }
};