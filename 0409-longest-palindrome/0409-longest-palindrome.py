class Solution:
    def longestPalindrome(self, s: str) -> int:
        letterCount = {}
        total = 0
        hasOdd = False
        
        for c in s: # get count of each letter
            letterCount[c] = letterCount.get(c, 0) + 1
        
        # if even jus add count to total, if odd add count-1 to total
        for c in letterCount:
            if letterCount[c] % 2 == 0: # even
                total += letterCount[c]
            else: # odd
                hasOdd = True
                total += letterCount[c] - 1
        
        if hasOdd: total += 1
            
        return total