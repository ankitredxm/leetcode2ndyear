class Solution {
public:
 TreeNode* f(TreeNode* root, int low, int high) {
        if(root==NULL) return NULL;
        if(root->left!=NULL&&root->left->val<low){

           while(root->left!=NULL&&root->left->val<low) root->left=root->left->right;
          
        }
        if(root->right!=NULL&&root->right->val>high){
            while(root->right!=NULL&&root->right->val>high) root->right=root->right->left;
           
        }

        root->left=trimBST(root->left,low,high);
        root->right=trimBST(root->right,low,high);
        return root;
    }
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if(root==NULL) return root;
      if(root->val<low){
        while(root!=NULL && root->val<low) root=root->right;
        return trimBST(root,low,high);
      }
      else if(root->val>high) {
        while(root!=NULL && root->val>high) root=root->left;
        return trimBST(root,low,high);
      }
      return f(root,low,high);
    }
};