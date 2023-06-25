class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        
        for (int i=0; i<nums.size(); ++i) {
            if (!nums[i]) {
                ++count;
                nums.erase(nums.begin()+i);
                --i; // move index back bc erased element
            }
        }
        
        for (int i=0; i<count; ++i) 
            nums.push_back(0);
    }
};