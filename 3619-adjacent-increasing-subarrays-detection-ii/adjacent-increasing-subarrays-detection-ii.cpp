class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
            int n=nums.size();
            int ans=0;
            int len=1;
            int p=0;
            for(int i=1;i<nums.size();++i){
                if(nums[i]>nums[i-1]) ++len;
                else{
                    ans=max(ans,len/2);
                    ans=max(ans,min(len,p));
                    p=len;
                    len=1;
                }
            }
            ans=max(ans,len/2);
            ans=max(ans,min(len,p));

            return ans;

    }
};