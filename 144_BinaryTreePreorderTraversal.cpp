/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void pre(TreeNode* root, vector<int>& pretra) {
        if(!root)
            return;
        pretra.push_back(root->val);
        pre(root->left, pretra);
        pre(root->right, pretra);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> pretra;
        pre(root, pretra);
        return pretra;
    }
};