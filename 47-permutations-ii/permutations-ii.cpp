class Solution {
public:
void help(vector<vector<int>>& ans,vector<int>& nums,int idx){
    if(idx==nums.size()-1){
        ans.push_back(nums);
        return;
    }

    unordered_set<int> st;

    for(int i=idx;i<nums.size();++i){
    if(st.count(nums[i])!=0) continue;
    st.insert(nums[i]);
        swap(nums[i],nums[idx]);
        help(ans,nums,idx+1);
        swap(nums[i],nums[idx]);
    }
}





    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        help(ans,nums,0);
        return ans;
    }
};