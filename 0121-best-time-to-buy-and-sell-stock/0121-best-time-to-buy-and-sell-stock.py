class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        minSoFar = prices[0]
        greatestDiff = 0
        
        for p in prices:
            if p < minSoFar:
                minSoFar = p
            
            if p - minSoFar > greatestDiff:
                greatestDiff = p - minSoFar
        
        return greatestDiff