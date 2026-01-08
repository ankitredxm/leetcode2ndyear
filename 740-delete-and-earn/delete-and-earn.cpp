class Solution {
public:
vector<int> dp;
int f(int i,vector<int>& nums){
    if(i>=nums.size()) return 0;

    if(dp[i]!=-1) return dp[i];

    int currsum=nums[i];
    int idx=i+1;
    while(idx<nums.size()&& nums[idx]==nums[i]){
        currsum+=nums[idx++];
    }
    int index=idx;

    while(index<nums.size()&&nums[index]==nums[i]+1){
        ++index;
    }

  

    return dp[i]=max(currsum+f(index,nums),f(idx,nums));


}


    int deleteAndEarn(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        dp.resize(nums.size()+1,-1);
        return f(0,nums);
    }
};