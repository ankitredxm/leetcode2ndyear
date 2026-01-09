class Solution {
public:
int dp[50001][301];
vector<int> c;

int f(int i,int amt){
if(amt==0) return 1;
if(dp[amt][i]!=-1) return dp[amt][i];
    int s=0;
    for(int idx=i;idx<c.size();++idx){
        if(c[idx]>amt) continue;
        s+=f(idx,amt-c[idx]);
    }

    return dp[amt][i]=s;
}


    int change(int amount, vector<int>& coins) {
        c=coins;
       memset(dp,-1,sizeof dp);
        return f(0,amount);
    }
};