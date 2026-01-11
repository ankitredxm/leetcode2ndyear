
class Solution {
public:
int ans;
void f(TreeNode* r,int& k){
    if(r==NULL) return;
    f(r->left,k);
    --k;
    if(k==0) ans=r->val;
    f(r->right,k);
}
    int kthSmallest(TreeNode* root, int k) {
         f(root,k);
         return ans;
    }
};