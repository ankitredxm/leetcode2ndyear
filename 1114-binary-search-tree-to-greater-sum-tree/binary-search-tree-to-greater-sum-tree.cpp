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
int sum=0;
int x;
void f(TreeNode* r){
    if(r==NULL) return;
    f(r->left);
    int temp=r->val;
    r->val=x-sum;
    cout<<r->val<<endl;
    sum+=temp;
    f(r->right);
}

int sum_(TreeNode* r){
    if(r==NULL) return 0;
    return r->val+sum_(r->left)+sum_(r->right);
}
    TreeNode* bstToGst(TreeNode* root) {
        x=sum_(root);
        f(root);
        return root;
    }
};