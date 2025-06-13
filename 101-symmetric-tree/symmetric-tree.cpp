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
    bool isSymmetric(TreeNode* root) {
        // bfs
        queue<TreeNode*> q;
        vector<int> v;
       
      
            if(root->left!=NULL){
         v.push_back(root->left->val);
q.push(root->left);
            }
         else v.push_back(-100);
         if(root->right!=NULL){
         v.push_back(root->right->val);

q.push(root->right);
         }
         else v.push_back(-100);

        while(!q.empty()){
            int s=q.size();
           
           int l=0;
           int r=v.size()-1;
            while(l<r){
if(v[l]!=v[r]) return false;
++l;
--r;
            }

            v.clear();
            for(int i=0;i<s;++i){


if(q.front()->left!=NULL){ q.push(q.front()->left);

v.push_back(q.front()->left->val);

}
else v.push_back(-100);


if(q.front()->right!=NULL){ q.push(q.front()->right);

v.push_back(q.front()->right->val);

}
else v.push_back(-100);
q.pop();
            }

        }
        return true;
    }
};