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
void insert(TreeNode* r,int& value){
    
    if(value<r->val){
        if(r->left==NULL)
        r->left=new TreeNode(value);
        else 
        insert(r->left,value);
    }
    else{
            if(r->right==NULL)
        r->right=new TreeNode(value);
        else 
        insert(r->right,value);
    }
}
    TreeNode* bstFromPreorder(vector<int>& pre) {
        TreeNode* r=new TreeNode(pre[0]);
        for(int i=1;i<pre.size();++i){
            insert(r,pre[i]);
        }

        return r;

    }
};