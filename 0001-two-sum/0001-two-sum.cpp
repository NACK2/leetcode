class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        unordered_map<int, int> mp; // element to index
        
        for (int i=0; i<nums.size(); ++i) {
            mp[nums[i]] = i;
        }
        
        int secondVal = 0;
        for (int i=0; i<nums.size(); ++i) {
            secondVal = target - nums[i];
            if (mp.find(secondVal) != mp.end() && i != mp[secondVal]) {
                // key exists and index isnt already used
                ret.push_back(i);
                ret.push_back(mp[secondVal]);
                break;
            }
        }
        
        return ret;
    }
};