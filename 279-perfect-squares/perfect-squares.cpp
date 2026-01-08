#define ll long long

class Solution {
public:
vector<int> dp;
ll f(int n){
    if(n==0) return 0;
    if(dp[n]!=-1) return dp[n];
    ll ans=INT_MAX;
    for(int i=1;i*i<=n;++i){
        ll sq=i*i;
        if(sq<=n){
            ans=min(ans,f(n-sq));
        }
    }

    return dp[n]=ans+1;


}
    int numSquares(int n) {
        dp.resize(n+1,-1);
        return f(n);
    }
};