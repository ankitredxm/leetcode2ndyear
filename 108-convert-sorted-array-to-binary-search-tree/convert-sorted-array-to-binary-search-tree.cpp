class Solution {
public:

TreeNode* helper(vector<int>& num,int l,int r){
    if(l>r) return NULL;
    if(l==r){
        return new TreeNode(num[l]);
    }
    int mid=(l+r)/2;
    TreeNode* left_node=helper(num,l,mid-1);
    TreeNode* right_node=helper(num,mid+1,r);
    TreeNode* new_node=new TreeNode(num[mid]);
    new_node->left=left_node;
    new_node->right=right_node;
    return new_node;
}



    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        return helper(nums,0,n-1);
    }
};