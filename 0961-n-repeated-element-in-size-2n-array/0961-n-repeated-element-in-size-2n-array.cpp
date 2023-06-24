class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> counts;
        int ret = 0;
        
        for (int i=0; i<nums.size(); ++i) {
            ++counts[nums[i]];
            if (counts[nums[i]] == nums.size()/2) {
                ret = nums[i];
                break;
            }
        }
        
        return ret;
    }
};