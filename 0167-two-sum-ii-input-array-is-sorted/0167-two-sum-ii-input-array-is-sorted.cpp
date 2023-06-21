class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int l = 0;
        int r = numbers.size()-1;
        // since numbers sorted already, if numbers[l] + numbers[r] > target, then
        // jus dec right pointer to lower the value
        
        while (l < r) {
            if (numbers[l] + numbers[r] == target) {
                ans.push_back(l+1); // +1 because 1-indexed
                ans.push_back(r+1);
                break;
            }
            else if (numbers[l] + numbers[r] > target)  
                --r;
            else 
                ++l;
        }
        
        return ans;
    }
};