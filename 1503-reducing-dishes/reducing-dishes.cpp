class Solution {
public:
    int maxSatisfaction(vector<int>& s) {
        sort(s.begin(),s.end());
        int n=s.size();
        int s1[n];
        int s2[n];
        s1[n-1]=s2[n-1]=s[n-1];
        int mx=0;
        for(int i=n-2;i>=0;--i){
            s1[i]=s1[i+1]+s[i];
            s2[i]=s2[i+1]+s1[i];
            mx=max(s2[i],mx);
        }
        return mx;
    }
};