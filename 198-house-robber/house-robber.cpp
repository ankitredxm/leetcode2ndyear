class Solution
{
    public:
        int help(vector<int> &nums,int i,vector<int>& v){
            if(i<0) return 0;
            if(v[i]!=-1) return v[i];
            if(i==0) return nums[i];
            if(i==1) return max(nums[0],nums[1]);
            return v[i]=max((nums[i] +help(nums,i-2,v)),help(nums,i-1,v));
        }

    int rob(vector<int> &nums) {
        vector<int> v(nums.size(),-1);
        return help(nums,nums.size()-1,v);
    }
};