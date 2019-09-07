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
    vector <string> test;
    vector<string> preorder(TreeNode* root) {
        if (root != NULL) {
            test.push_back(std::to_string(root->val));
            preorder(root->left);
            preorder(root->right);
        } else {
            test.push_back("null");
        }
        return test;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector <string> pTree, qTree;
        pTree = preorder(p);
        test.clear();
        qTree = preorder(q);
        if (pTree == qTree) {
            return true;
        } else {
            return false;
        }
    }
};
