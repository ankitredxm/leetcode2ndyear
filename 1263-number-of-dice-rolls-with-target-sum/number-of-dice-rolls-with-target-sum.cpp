class Solution {
public:

const long long MOD=1e9+7;
vector<vector<long long>> dp;
long long tb(int n,int k,int t){

if((n==0&&t!=0)||(n!=0&&t==0)) return 0;
if(t==0&&n==0) return 1;

 if(dp[n][t]!=-1) return dp[n][t];

long long sum=0;
    for(int i=1;i<=k;++i){
             if(i>t) continue;
            sum+=tb(n-1,k,t-i)%MOD;
    }



return dp[n][t]=sum;
}
















    int numRollsToTarget(int n, int k, int target) {
        dp.clear();
        dp.resize(31,vector<long long>(1001,-1));
        return tb(n,k,target)%MOD;
    }
};