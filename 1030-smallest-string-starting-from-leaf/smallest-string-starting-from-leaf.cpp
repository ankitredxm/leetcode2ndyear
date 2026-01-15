/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void f(TreeNode* r, string path, string& smal) {
        if (r == NULL)
            return;
        path += char('a' + r->val);
        if (r->left == nullptr && r->right == nullptr) {
            reverse(path.begin(), path.end());
            if (smal == "" || smal > path)
                smal = path;
        }
        cout<<path<<endl;

        f(r->left, path, smal);
        f(r->right, path, smal);
    }
    string smallestFromLeaf(TreeNode* root) {

        string smal = "";
     f(root, "", smal);
        return smal;
    }
};