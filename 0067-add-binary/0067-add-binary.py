class Solution:
    def addBinary(self, a: str, b: str) -> str:
        a = a[::-1] # reversing bc addition starts from back
        b = b[::-1]
        numA, numB, total, carry = 0, 0, 0, 0
        res = ""
        
        for i in range(max(len(a), len(b))):
            if i < len(a):
                numA = int(a[i]) # using ascii values to turn char into int
            else:
                numA = 0
            
            if i < len(b):
                numB = ord(b[i]) - ord('0')
            else:
                numB = 0
            
            total = numA + numB + carry # first iteration carry will be 0 by default
            res += str(total % 2)
            carry = total // 2 # either 0 or 1
        
        if carry == 1:# last digit had a carry
            res += "1"
        
        return res[::-1]
            
            

                