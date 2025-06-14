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
    TreeNode* invertTree(TreeNode* root) {
         in(root);
         return root;
    }

    void in(TreeNode* r){
        if(r==NULL) return;
        TreeNode* t=r->left;
        r->left=r->right;
        r->right=t;
        in(r->left);
        in(r->right);
    }
};