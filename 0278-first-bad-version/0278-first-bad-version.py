# The isBadVersion API is already defined for you.
# def isBadVersion(version: int) -> bool:

class Solution:
    def firstBadVersion(self, n: int) -> int:
        left = 1
        right = n
        mid = 0
        
        while (left <= right): 
            mid = (right - left)//2 + left

            if not isBadVersion(mid-1) and isBadVersion(mid): # found
                return mid
            elif isBadVersion(mid):
                right = mid-1
            else:
                left = mid+1