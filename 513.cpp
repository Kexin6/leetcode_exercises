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
    void botLeft(TreeNode* root, int& depth, int& leftVal, int level) {
        if (root == NULL) return; // base case
        // because I need to find the bottom left, find the left side first, so that if I can find maximum depth is level,
        // the botLeft is here
        botLeft(root->left, depth, leftVal, level + 1);
        botLeft(root->right, depth, leftVal, level + 1);
        if (level > depth) {
            depth = level;
            leftVal = root->val;
            
        }
    }
    int findBottomLeftValue(TreeNode* root) {
        int depth = 0;
        int leftVal = root->val;
        botLeft(root, depth, leftVal, 0);
        return leftVal;
    }
};
