class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int absMin = abs(nums[0]);
        int ret = nums[0];
        for (int i=0; i<nums.size(); ++i) {
            if (abs(nums[i]) < absMin) {
                absMin = abs(nums[i]);
                ret = nums[i];
            }
            else if (abs(nums[i]) == absMin) {
                if (nums[i] > ret) 
                    ret = nums[i];
            }
        }
        
        return ret;
    }
};