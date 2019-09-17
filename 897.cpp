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
    vector <int> v;
    void inorder(TreeNode* root) {
        if (root == NULL) return;
        if (root != NULL) {
            inorder(root->left);
            v.push_back(root->val);
            inorder(root->right);
        }
    }
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        if (v.size() != 0) {
            
            TreeNode* curr = new TreeNode(v[0]);
            TreeNode* answer = curr;
            for (int i = 1; i < v.size(); ++i) {
                curr->right = new TreeNode(v[i]);
                curr = curr->right;
            }
            return answer;
        } else {
            return NULL;
        }
        
    }
};
