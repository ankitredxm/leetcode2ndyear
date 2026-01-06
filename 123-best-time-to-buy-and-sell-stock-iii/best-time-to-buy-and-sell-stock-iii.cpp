class Solution {
public:
int dp[100005][3][2];
int f(vector<int>& price,int i,int k,bool on){

    if(i==price.size()) return 0;

    if(dp[i][k][on]!=-1) return dp[i][k][on];
    
     int ans=INT_MIN;
     ans=max(ans,f(price,i+1,k,on));
     if(!on){
        if(k>0)
        ans=max(ans,f(price,i+1,k,true)-price[i]);
     }

     else{
        ans=max(ans,price[i]+f(price,i+1,k-1,false));
     }

     return dp[i][k][on]=ans;


}
    int maxProfit(vector<int>& prices) {
        memset(dp,-1,sizeof dp);
        return f(prices,0,2,false);
    }
};