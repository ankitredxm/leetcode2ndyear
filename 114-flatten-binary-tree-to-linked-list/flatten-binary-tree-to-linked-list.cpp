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
void preorder(TreeNode* root,queue<TreeNode*>& q){
    if(root==NULL) return;
    q.push(root);
    preorder(root->left,q);
    preorder(root->right,q);
}
    void flatten(TreeNode* root) {
        if(root==NULL) return;
        queue<TreeNode*> q;
        preorder(root,q);
        int s=q.size();
        TreeNode* ans=q.front();
        while(--s){
        TreeNode* r=q.front();
        q.pop();
        r->right=q.front();
        r->left=NULL;

        }
        q.front()->left=NULL;
        q.front()->right=NULL;
        root=ans;
    }

};