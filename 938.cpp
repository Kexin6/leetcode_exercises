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
    void helper(TreeNode* root, int& result, int& L, int& R) {
        if (root == NULL) return;
        if (root != NULL) {
            if (root->val <= R && root->val >= L) {
                result += root->val;
            }
            if (root->val < R) {
                helper(root->right, result, L, R);
            }
            if (root->val > L) {
                helper(root->left, result, L, R);
            }
        }
        
    }
    int rangeSumBST(TreeNode* root, int L, int R) {
        int result = 0;
        helper(root, result, L, R);
        return result;
    }
};
