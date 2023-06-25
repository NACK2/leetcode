class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        // unique() doesn't remove duplicates, but the duplicates become 
        // unspecified state and get moved to back, and then returns an iterator
        // to beginning of the duplicates
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        
        if (nums.size() < 3) 
            return nums[nums.size()-1];
        
        return nums[nums.size()-3];
    }
};