class Solution {
public:
TreeNode* iop(TreeNode* root){
  
  
    root=root->left;
    TreeNode* p=root;
    while(root!=NULL){
       
        p=root;
        root=root->right;
    }

  





   
    return p;
}
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return NULL;
        if(root->val==key){
            if(root->left==NULL&&root->right==NULL) return NULL;//0 child
           else if(root->left==NULL) return root->right;// 1 child
           else if(root->right==NULL) return root->left;// 1 child
            else{ // 2child
            TreeNode* r=iop(root);
            root->val=r->val;
            root->left=deleteNode(root->left,r->val);
            return root;

            }
        }
       else if(root->val<key){
            root->right=deleteNode(root->right,key);
        }
        else {
            root->left=deleteNode(root->left,key);
        }
        return root;
    }
};