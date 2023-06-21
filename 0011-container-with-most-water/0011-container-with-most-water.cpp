class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int max = 0;
        int w = 0;
        int h = 0;
        
        while (left < right) {
            w = right - left;
            h = min(height[left], height[right]);
            
            if (w*h > max) {
                max = w*h;
            }
            
            if (height[left] > height[right]) {
                --right;
            }
            else if (height[left] <= height[right]) {
                ++left;
            }
        }
        
        return max;
    }
};