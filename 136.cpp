class Solution {
public:
    int singleNumber(vector<int>& nums) {
        bool single = true;
        for (int i = 0; i < nums.size(); i ++) {
            for (int j = 0; j < nums.size(); j ++) {
                if (nums[i] == nums[j] && i != j) {
                    single = false;
                }
            }
            if (single) return nums[i];
            single = true;
        }
        return 0;
    }
};
