class Solution
{
    public:
       

    int rob(vector<int> &nums) {
        int n=nums.size();
        vector<int> v(nums.size()+1,-1);
        v[n]=0;
        v[n-1]=nums[n-1];
       for(int i=v.size()-3;i>=0;--i){
        v[i]=max(nums[i]+v[i+2],v[i+1]);
       }

       return v[0];
    }
};