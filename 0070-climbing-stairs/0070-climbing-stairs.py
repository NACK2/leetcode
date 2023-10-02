class Solution:
    def climbStairs(self, n: int) -> int:
        if n <= 3:
            return n

        x1 = 2
        x2 = 3
        curr = 0
        
        for i in range(4, n+1):
            curr = x1 + x2
            x1 = x2
            x2 = curr
            
        return curr