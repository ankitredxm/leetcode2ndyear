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
int mx=-1;

void pre(int x,TreeNode* root){
    if(root==NULL) return;
    mx=max(mx,abs(root->val-x));
    pre(x,root->left);
    pre(x,root->right);
}


void diff(TreeNode* root){
    if(root==NULL){
        return;
    }

    pre(root->val,root);
    diff(root->left);
    diff(root->right);

}

    int maxAncestorDiff(TreeNode* root) {
        diff(root);
        return mx;

    }
};