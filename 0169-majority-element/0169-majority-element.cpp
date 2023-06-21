class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> counts;
        
        for (int i=0; i<n; ++i) {
            ++counts[nums[i]];
            if (counts[nums[i]] > n/2) {
                return nums[i];
            }
        }
        
        return 0;
    }
};