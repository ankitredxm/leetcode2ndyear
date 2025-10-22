class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        int mx=-1;
        for(int i:nums){
            mp[i]++;
            mx=max(mp[i],mx);
        }
        int cnt=0;
        for(auto& p:mp){
            if(p.second==mx){
                cnt+=p.second;
            }
        }
        return cnt;

    }
};