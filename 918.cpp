class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int>res;
        int count = 0;
        while (A.size() != 0) {
           
            for (int i = 0; i < A.size(); i ++) {
                if (A[i] % 2 == 0 && count % 2 == 0) {
                    res.push_back(A[i]);
                    count ++;
                    A.erase(A.begin() + i);
                } else if (A[i] % 2 != 0 && count % 2 != 0) {
                    res.push_back(A[i]);
                    count ++;
                    A.erase(A.begin() + i);
                
                }
            } 
        }
        return res;
    }
};
