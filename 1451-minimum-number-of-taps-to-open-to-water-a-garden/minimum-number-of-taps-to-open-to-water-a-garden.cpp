class Solution {
public:


    int minTaps(int n, vector<int>& ranges) {
        n=ranges.size();
        vector<int> dp(n+1,INT_MAX);
     
       
        dp[0]=0;
        for(int i=0;i<n;++i){
            int st=max(0,i-ranges[i]);
            int en=min(n,i+ranges[i]);

            for(int j=st+1;j<=en;++j){
                if(dp[st]!=INT_MAX){
                    dp[j]=min(dp[j],dp[st]+1);
                }
            }

          
           
        }

        return dp[n-1]==INT_MAX?-1:dp[n-1];
    }
};