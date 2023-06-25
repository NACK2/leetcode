class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        int tmp = 0;

        for (int i=0; i<nums.size(); ++i) {
            while (nums[i] > 0) {
                nums[i] /= 10; 
                ++tmp;
            }
            
            if (tmp % 2 == 0)
                ++count;
            
            tmp = 0;
        }
        
        return count;
    }
};