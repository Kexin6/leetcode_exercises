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
    vector<int> sum;
    void bfs(TreeNode* root, int level) {
        if (root == NULL) return;
        if (sum.size() == level) {
            sum.push_back(0);
        }
        sum[level] += root->val;
        bfs(root->left, level + 1);
        bfs(root->right, level + 1);
        
    }
    int maxLevelSum(TreeNode* root) {
        int level = 0;
        int res = INT_MIN;
        int returnLevel = 0;
        bfs(root, level);
        for (int i = 0; i < sum.size(); ++i) {
            if (sum[i] > res ){
                res = sum[i];
                returnLevel = i;
                 
            } 
        }
        return returnLevel + 1;
    }
};
