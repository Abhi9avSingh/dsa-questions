class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
      
        int maxw = 0;

        while (i != j) {
         maxw = max(maxw, ((j-i) * min(height[j],height[i])));
            if (height[i] < height[j]) {
                i++;
            }
            else{
                j--;
            }
            
        }
        return maxw;
    }
};