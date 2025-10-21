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
TreeNode* stt;
void preorder(TreeNode* root,unordered_map<TreeNode*,TreeNode*>& mp,int start){
    if(root==NULL) return;
    if(root->left!=NULL) mp[root->left]=root;
    if(root->right!=NULL) mp[root->right]=root;
    if(root->val==start)  stt=root;
    preorder(root->left,mp,start);
    preorder(root->right,mp,start);
}

    int amountOfTime(TreeNode* root, int start) {
        unordered_map<TreeNode*,TreeNode*> mp;
        preorder(root,mp,start);
        queue<TreeNode*> qu;
        unordered_set<TreeNode*> st;
        qu.push(stt);
        st.insert(stt);
        int lvl=0;
        while(!qu.empty()){
            int s=qu.size();
           
            for(int i=0;i<s;++i){
            TreeNode* mc=qu.front();
            qu.pop();
                TreeNode* l=mc->left;
                TreeNode* r=mc->right;
                TreeNode* p=mp[mc];
                if(l!=NULL&&st.count(l)==0){ qu.push(l);
             
                cout<<l->val<<" ";
                }
                if(r!=NULL&&st.count(r)==0){ qu.push(r);
               
                cout<<r->val<<" ";
                }
                if(p!=NULL&&st.count(p)==0){ qu.push(p);
              
                cout<<p->val<<" ";
                }
                st.insert(l);
                st.insert(r);
                st.insert(p);
                


            }
           
            ++lvl;


        }

        return lvl-1;

    }
};