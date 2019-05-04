class Solution {
public:
   int maxArea(vector<int>& height) {
    /*  int maxNumber = 0;
        for (int i = 0; i < height.size(); i ++) {
            for (int j = i + 1; j < height.size(); j ++) {
                int heightNumber = (height[i] < height[j]) ? height[i]:height[j];
                int tempArea = heightNumber * (j - i);
                if (tempArea > maxNumber) {
                    maxNumber = tempArea;
                }
            }
        }
        return maxNumber;
    }*/
       int maxNumber = 0;
       int start = 0;
       int end = height.size() - 1;
       while (start < end) {
           int heightNumber = (height[start] < height[end]) ? height[start]:height[end];
           int tempArea = heightNumber * (end - start);
           if (tempArea > maxNumber) {
                maxNumber = tempArea;
            }
           while (height[start] <= heightNumber && start < end) {
               start ++;
           }
           while (height[end] <= heightNumber && start < end) {
               end --;
           }
       }
       
       return maxNumber;
   }  
};
