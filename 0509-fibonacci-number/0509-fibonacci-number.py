class Solution:
    def fib(self, n: int) -> int:
        if n == 0: return 0
        if n == 1: return 1
        
        x1 = 0
        x2 = 1
        total = 0
        
        for i in range(2, n+1):
            total = x2 + x1
            x1 = x2
            x2 = total
        
        return total
            