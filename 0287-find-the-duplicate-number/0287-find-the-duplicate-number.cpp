class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> counts;
        
        for (int i=0; i<nums.size(); ++i) {
            ++counts[nums[i]];
        }
        
        for (auto count : counts) {
            if (count.second > 1) 
                return count.first;
        }
        
        return 0;
    }
};