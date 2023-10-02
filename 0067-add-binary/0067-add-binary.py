class Solution:
    def addBinary(self, a: str, b: str) -> str:
        total = int(a, 2) + int(b, 2) # converts a and b into normal base 10 int from base 2 string aka binary
        return bin(total)[2:] # splicing out the first two chars bc its jus "0b" to signify its binary      