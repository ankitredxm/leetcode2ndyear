
class Solution {
public:
TreeNode* iop(TreeNode* r){
    if(r!=NULL){
    TreeNode* pred=r;
    while(pred->right!=NULL) pred=pred->right;
    if(pred->left!=NULL) iop(pred->left);

    return pred;

    }
    
     return r;
}

    void flatten(TreeNode* root) {
     if(root==NULL) return ;

      TreeNode* p=iop(root->left);
      if(p!=NULL){
      p->right=root->right;
      root->right=root->left;
      root->left=NULL;}

      flatten(root->left);
      flatten(root->right);
      
      
    }
};