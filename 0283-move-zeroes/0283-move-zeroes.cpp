class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        
        for (int i=0; i<nums.size(); ++i) {
            if (!nums[i]) {
                ++count;
                nums.erase(nums.begin()+i);
                --i; // since erasing an element, moving index one back
            }
        }
        
        for (int i=0; i<count; ++i) 
            nums.push_back(0);
    }
};