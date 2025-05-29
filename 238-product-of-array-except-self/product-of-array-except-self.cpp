class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1;
        vector<int> prefix;
        prefix.push_back(1);
        for(int i=1;i<nums.size();++i){
            prefix.push_back(prefix[i-1]*nums[i-1]);
        }
        int n=nums.size();
        vector<int> suff(n);
        suff[n-1]=1;
        for(int i=n-2;i>=0;--i){
            suff[i]=suff[i+1]*nums[i+1];
        }
        for(int i=0;i<n;++i){
            prefix[i]*=suff[i];
        }
        return prefix;
    }
};