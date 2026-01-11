
class Solution {
public:
       long long x=LLONG_MIN;
       bool t=true;
      void   inorder(TreeNode* r){
            if(r==NULL) return;
            inorder(r->left);
           if(x>=r->val){
           
             t=false;
return;
           }
           else x=r->val;
            inorder(r->right);

        }
    bool isValidBST(TreeNode* root) {
        inorder(root);
   
      
        return t;

    }
};