class Solution {
public:
unordered_set<string> st;
vector<int> dp;
string x;

int f(int i){
if(i==x.size()) return true;

if(dp[i]!=-1) return dp[i];

    for(int j=i+1;j<=x.size();++j){
        string prefix=x.substr(i,j-i);
        if(st.count(prefix)>0 && f(j)){
            return dp[i]=true;
        }

    }
    return dp[i]=false;



}
    bool wordBreak(string s, vector<string>& wordDict) {
x=s;
dp.resize(1005,-1);
        for(string s1:wordDict){
            st.insert(s1);
        }
        return f(0);
    }
};