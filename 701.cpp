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
    
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (root == NULL) {
            root->val = val;
            return root;
        }
        TreeNode* node = root;
        TreeNode* prevNode = node;
        while (node) {
            prevNode = node;
            //cout << prevNode->val << " ";
            
            if (val > node->val) {
                node = node->right;
            } else {
                node = node->left;
            }
        }
        TreeNode* temp = new TreeNode(val);
        if (val > prevNode->val) {
            prevNode->right = temp;
        } else {
            prevNode->left = temp;
        }
        return root;
    }
};
