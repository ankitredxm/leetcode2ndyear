class Solution {
public:
void help(vector<vector<int>>& ans,vector<int>& nums,int idx){
    if(idx==nums.size()-1){
        ans.push_back(nums);
    }

    for(int i=idx;i<nums.size();++i){
        swap(nums[i],nums[idx]);
        help(ans,nums,idx+1);
        swap(nums[i],nums[idx]);
    }


}




    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        help(ans,nums,0);
        return ans;
    }
};