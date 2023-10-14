class Solution:
    def monotoneIncreasingDigits(self, n: int) -> int:
        if n < 10:
            return n
        
        revList = list(str(n))[::-1] # strings in python are immutable
        length = len(revList)
        inversionIndex = 0
        inversionFound = False
        
        for i in range(1, length):
            if revList[i] > revList[i-1]:
                inversionIndex = i
                inversionFound = True
            elif revList[i] == revList[i-1] and inversionIndex == i-1: # multiple inversion vals in a row
                inversionIndex = i
                       
        if inversionFound == False: return n
        
        for i in range(len(revList)):
            if i < inversionIndex: 
                revList[i] = "9"
            elif i == inversionIndex:
                revList[i] = str(int(revList[i]) - 1)
            
        return int("".join(revList[::-1]))
            
            
            