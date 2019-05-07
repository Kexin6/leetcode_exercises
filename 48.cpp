class Solution {
public:
    void rotate(vector<vector<int>>& matrix) { // a[i][j] = a[n-j-1][i]
        vector<vector<int>>tempMat = matrix;
        for(int i = 0; i < matrix.size(); i ++) {
            for (int j = 0; j < matrix[i].size(); j ++) {
                matrix[i][j] = tempMat[matrix.size() - j - 1][i];
            }
        }
    }
};
