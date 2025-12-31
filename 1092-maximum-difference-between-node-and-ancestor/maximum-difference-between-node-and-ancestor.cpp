/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int diff1=0;
void diff(TreeNode* root,int mx,int mn){
        if(!root) return;
        diff1=max({diff1,abs(mn-root->val),abs(mx-root->val)});

        mn=min(mn,root->val);
        mx=max(mx,root->val);

        diff(root->left,mx,mn);
        diff(root->right,mx,mn);

}










    int maxAncestorDiff(TreeNode* root) {
        if(!root) return 0;
        diff(root,root->val,root->val);
        return diff1;
    }
};