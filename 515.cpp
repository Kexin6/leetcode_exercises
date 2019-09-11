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
    void findLargest(TreeNode* root, vector<int>& largest, int level) {
        if (root == NULL) return;
        // Cannot say largest[level] = root->val;
        if (level >= largest.size()) {
            largest.push_back(root->val);
        }
        //std::cout << root->val << " ";
        findLargest(root->left, largest, level + 1);
        findLargest(root->right, largest, level + 1);
        if (root->val > largest[level]) {
            largest[level] = root->val;
        }
    }
    vector<int> largestValues(TreeNode* root) {
        vector<int> largest = {};
        findLargest(root, largest, 0);
        return largest;
    }
};
