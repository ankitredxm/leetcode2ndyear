class Solution {
public:
vector<int> coin;
vector<long long> dp;
long long f(int amt){
    if(amt<0) return INT_MAX;
    if(amt==0) return 1;

    if(dp[amt]!=-1) return dp[amt];
    long long ans=INT_MAX;
    for(int i=0;i<coin.size();++i){
        ans=min(ans,1+f(amt-coin[i]));
    }

    return dp[amt]=ans;
}
    int coinChange(vector<int>& coins, int amount) {
        coin=coins;
        dp.resize(amount+1,-1);
        long long h=f(amount);
        return h>=INT_MAX?-1:h-1;
    }
};