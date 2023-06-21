class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> counts;
        
        for (int i=0; i<nums.size(); ++i) {
            ++counts[nums[i]];
            if (counts[nums[i]] > 2) {
                nums.erase(nums.begin() + i);
                --i; // adjusting index bc erased an element
            }
        }
        
        return nums.size();
    }
};