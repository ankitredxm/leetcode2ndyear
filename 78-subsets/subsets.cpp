class Solution {
public:
void subset(vector<vector<int>>& ans,vector<int>& nums,int i,vector<int> path){
if(i==nums.size()){
    ans.push_back(path);
    return;
}


       
            subset(ans,nums,i+1,path);
            path.push_back(nums[i]);
            subset(ans,nums,i+1,path);
           
        
}






    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> path;
        subset(ans,nums,0,path);
        return ans;
    }
};