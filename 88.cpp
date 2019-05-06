class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       
        int count = 0;
        for (int i = m; i < m + n; i ++) {
            if (count < n) {
                nums1[i] = nums2[count];
                count ++;
            }
        }
        sort(begin(nums1), end(nums1)); 
    }
};
