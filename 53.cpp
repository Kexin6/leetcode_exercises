class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int smax = INT_MIN;
        /*for (int num : nums) {
            sum += num;
            //smax = max(smax, sum);
            if (smax < sum) {
                smax = sum;
            }
            if (sum < 0) {
                sum = 0;
            }
        }*/
        for (int i = 0; i < nums.size(); i ++) {
            sum += nums[i];
            if (smax < sum) {
                smax = sum;
            }
            if (sum < 0) {
                sum = 0;
            }
        }
        return smax;
    }
    
};
