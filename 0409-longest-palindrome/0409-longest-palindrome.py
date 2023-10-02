class Solution:
    def longestPalindrome(self, s: str) -> int:
        letterCount = {}
        total = 0
        highestOddLetter = ''
        
        for i in range(len(s)):
            letterCount[s[i]] = letterCount.get(s[i], 0) + 1
        
        for c in letterCount:
            if letterCount[c] % 2 == 0: # even
                total += letterCount[c]
            elif letterCount[c] >= letterCount.get(highestOddLetter, 0):
                highestOddLetter = c
                
        for c in letterCount:
            if letterCount[c] % 2 == 1 and c != highestOddLetter: # odd
                total += letterCount[c] - 1 # for each odd that wasnt max odd value, subtract 1 to it and add it
        
        return total + letterCount.get(highestOddLetter, 0)
        