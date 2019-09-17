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
    void max(TreeNode* root, int level, int& res) {
        if (root == nullptr) return;
        if (level > res) {
            res += 1;
        }
        max(root->left, level + 1, res);
        max(root->right, level + 1, res);
        

    }
    
    int maxDepth(TreeNode* root) {
        if (root == NULL) return 0;
        int res = 0;
        max(root, 0, res);
        
        return (res + 1);
    }
};
