/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    let count = {};
    
    for (let i=0; i<nums.length; ++i) {
        if (count[nums[i]] == 1) {
            return true;
        }
        count[nums[i]] = 1;
    }
    
    return false;
};