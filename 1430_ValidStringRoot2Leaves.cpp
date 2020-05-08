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
    bool dfs(TreeNode* node, vector<int>& arr, int p, int n) {
        if(node == NULL)
            return false;
        else {
            if(p == n-1 && node->val == arr[p]) {
                if(node->left == NULL && node->right == NULL)
                    return true;
                else
                    return false;
            }
            else if(node->val == arr[p]) {
                bool l = dfs(node->left, arr, p+1, n);
                if(l == true)
                    return true;
                bool r = dfs(node->right, arr, p+1, n);
                return r || l;
            }
            else
                return false;
        }
    }
    bool isValidSequence(TreeNode* root, vector<int>& arr) {
        int n = arr.size();
        if(n == 0)
            return false;
        
        bool ans = false;
        ans = dfs(root, arr, 0, n);
        return ans;
    }
};