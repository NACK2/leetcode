class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        unordered_map<int, int> index;
        int secondVal = 0;
        
        for (int i=0; i<nums.size(); ++i) {
            index[nums[i]] = i; 
        }
        
        for (int i=0; i<nums.size(); ++i) {
            secondVal = target - nums[i];
            if (index.find(secondVal) != index.end() && i != index[secondVal]) {
                ret.push_back(i);
                ret.push_back(index[secondVal]);
                break;
            }
        }
        
        return ret;
    }
};