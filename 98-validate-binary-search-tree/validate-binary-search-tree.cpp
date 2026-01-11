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
        vector<int> v;
        void inorder(TreeNode* r){
            if(r==NULL) return;
            inorder(r->left);
            v.push_back(r->val);
            inorder(r->right);

        }
    bool isValidBST(TreeNode* root) {
        inorder(root);
        int x=v[0];
        for(int i=1;i<v.size();++i){
            if(x>=v[i]) return false;
            x=v[i];
        }
        return true;

    }
};