class Solution {
public:
vector<int> dp;
int f(int n){
    if(n==1||n==0) return 1;
    // if(n==3) return 5;
    if(n==2) return 2;
    int s=0;
    if(dp[n]!=-1) return dp[n];
    for(int i=1;i<=n;++i){
        s+=f(abs(1-i))*f(n-i);
    }

    return dp[n]=s;
}
    int numTrees(int n) {
        dp.resize(n+1,-1);
        return f(n);
    }
};