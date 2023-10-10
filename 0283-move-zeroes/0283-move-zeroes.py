class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        count = 0
        i = 0
        
        while i < len(nums):
            if nums[i] == 0:
                count += 1
                nums.pop(i)
                i -= 1
            i += 1
        
        for i in range(count):
            nums.append(0)
            
        return nums
        