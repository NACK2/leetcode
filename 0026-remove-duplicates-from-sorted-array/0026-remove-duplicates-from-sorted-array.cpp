class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int unique = 0;
        unordered_map<int, int> counts; // value of each key is how many times the key has occured
        
        for (int i=0; i<nums.size(); ++i) {
            ++counts[nums[i]];
            if (counts[nums[i]] > 1) {
                nums.erase(nums.begin()+i);
                --i; // since we erased an element, moving index back 1
            }
        }
        
        return counts.size();
    }
};