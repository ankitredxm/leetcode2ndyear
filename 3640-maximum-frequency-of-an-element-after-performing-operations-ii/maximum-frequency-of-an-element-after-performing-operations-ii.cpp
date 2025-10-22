class Solution {
public:
    int maxFrequency(vector<int>& nums, int k, int numOperations) {
                unordered_map<int,int> mp;
        map<int,int> mps;
        for(int i:nums){
            mp[i]++;
            mps[i];
            mps[i-k]++;
            mps[i+k+1]--;
        }

        int mx=-1;
        int sum=0;
        for(auto& p:mps){
            sum+=p.second;
            mx=max(mx,min(sum,mp[p.first]+numOperations));
        }

        return mx;

        

    }
};