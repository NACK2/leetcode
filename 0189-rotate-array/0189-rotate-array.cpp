class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // copies elements, doesn't point, so can change copy w/o affecting nums
        vector<int> copy = nums; 
        
        for (int i=0; i<nums.size(); ++i) {
            nums[(i+k)%nums.size()] = copy[i];
        }
    }
};