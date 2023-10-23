/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
    const count = {};
    let n = nums.length;
    
    for (let i=0; i<n; ++i) {
        count[nums[i]] = count[nums[i]] == null ? 1 : ++ count[nums[i]];
        if (count[nums[i]] > Math.floor(n/2)) 
            return nums[i];
    }
    
    return 0;
};