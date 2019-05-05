class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<int> oneInNums;
        vector<vector<int>> returnNum;
        bool canReturn = true;
        for (int i = 0; i < nums.size() - 2; i ++) {
            for (int j = i + 1; j < nums.size() - 1; j ++) {
                for (int k = j + 1; k < nums.size(); k ++) {
                    if (nums[i] + nums[j] + nums[k] == 0) {
                        oneInNums.push_back(nums[i]);
                        oneInNums.push_back(nums[j]);
                        oneInNums.push_back(nums[k]);
                        std::sort (oneInNums.begin(), oneInNums.end());
                        
                        returnNum.push_back(oneInNums);
                        std::sort (returnNum.begin(), returnNum.end());
                        returnNum.erase(unique(returnNum.begin(), returnNum.end()), returnNum.end());
                        oneInNums.clear();
                    }
                }
            }
        }
        return returnNum;
    }
};
