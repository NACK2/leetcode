class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int, int> counts;
        int target = arr.size()/4;
        
        for (int i=0; i<arr.size(); ++i) {
            ++counts[arr[i]];
            if (counts[arr[i]] > target) {
                return arr[i];
            }
        }
        
        return 0;
    }
};