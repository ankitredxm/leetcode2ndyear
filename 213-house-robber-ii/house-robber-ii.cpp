class Solution {
public:
    int hr(vector<int>& n,int idx,int size,bool t,vector<int>& dp){
        if(t==true&&idx==size-1) return 0;
        if(idx>=size) return 0;
        if(idx==size-1) return n[idx];
        if(dp[idx]!=-1) return dp[idx];
        
        return dp[idx]=max((n[idx]+hr(n,idx+2,size,t,dp)),hr(n,idx+1,size,t,dp));
    }







    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        vector<int> dp2(nums.size(),-1);

        return max((nums[0]+hr(nums,2,nums.size(),true,dp)),hr(nums,1,nums.size(),false,dp2));
    }
};