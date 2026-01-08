class Solution {
public:
    int numDecodings(string s) {
        int n=s.length();
        vector<int> dp(n+1,0);
        if(s[0]=='0') return 0;
        dp[0]=dp[1]=1;

        for(int i=2;i<=n;++i){
            if(s[i-1]!='0')
            dp[i]+=dp[i-1];


            int k=i-1;
            if(s[k-1]=='0') continue;
            // cout<<s[k-1]<<" "<<s[k];
            int limit=(s[k-1]-'0')*10+(s[k]-'0');
            // int limit=stoi(d);
          
            if(limit>0 && limit<=26){
                dp[i]+=dp[i-2];
            }
            cout<<limit<<" "<<dp[i]<<endl;
        }

        return dp[n];
    }
};