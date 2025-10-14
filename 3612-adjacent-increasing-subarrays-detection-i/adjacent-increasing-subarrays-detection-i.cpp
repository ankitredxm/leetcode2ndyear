class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        vector<bool> v;
        int n=nums.size();
        int cnt=0;
        int lo=0;
        int hi=k;
        for(int i=1;i<k;++i){
            if(nums[i]>nums[i-1]) ++cnt;
        }

        if(cnt==k-1) v.push_back(true);
        else v.push_back(false);

        while(hi<n){
            if(nums[lo]<nums[lo+1]) --cnt;
            if(nums[hi]>nums[hi-1]) ++cnt;
                
            if(cnt==k-1) v.push_back(true);
            else v.push_back(false);

            ++lo;
            ++hi;

            
        }

      // check
      for(int i=0;i<v.size()-k;++i){
        if(v[i]==1&&v[i+k]==1) return true;
      }
        return false;

    }
};