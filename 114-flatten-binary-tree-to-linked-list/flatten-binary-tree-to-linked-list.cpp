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
void op(TreeNode* root,TreeNode** t){
    if(root==NULL) return;
    *t=root;
    op(root->left,t);
    op(root->right,t);
}
    void flatten(TreeNode* root) {
        if(root==NULL) return;
        if(root->left!=NULL){
            TreeNode* t=nullptr;
            op(root->left,&t);
            t->right=root->right;
            root->right=root->left;
            root->left=NULL;
        }
        flatten(root->right);
    }
};