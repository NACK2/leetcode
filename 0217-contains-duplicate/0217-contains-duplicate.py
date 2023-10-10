class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        counts = {}
        
        for i in nums:
            counts[i] = counts.get(i, 0) + 1
            if (counts[i] > 1):
                return True
        
        return False