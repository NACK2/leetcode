class Solution:
    def addBinary(self, a: str, b: str) -> str:
        a, b = a[::-1], b[::-1]
        total, carry, numA, numB = 0, 0, 0, 0
        res = ""
        
        for i in range(max(len(a), len(b))):
            numA = ord(a[i]) - ord('0') if i < len(a) else 0 # using ascii to convert str into int
            numB = ord(b[i]) - ord('0') if i < len(b) else 0
            
            total = numA + numB + carry
            res += str(total%2)
            carry = total // 2
        
        if carry == 1:
            res += '1'
        
        return res[::-1]
            