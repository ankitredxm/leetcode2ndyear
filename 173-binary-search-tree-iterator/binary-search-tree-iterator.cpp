class BSTIterator {
public:
vector<int> v;
int k=0;
void inorder(TreeNode* r){
    if(r==NULL) return;
    inorder(r->left);
    v.push_back(r->val);
    inorder(r->right);
}
    BSTIterator(TreeNode* root) {
        inorder(root);
    }
    
    int next() {
        // if(k<v.size())
        return v[k++];
    }
    
    bool hasNext() {
        return k<v.size();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */