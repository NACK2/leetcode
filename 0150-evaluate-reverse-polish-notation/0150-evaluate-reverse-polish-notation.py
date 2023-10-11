class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        term1, term2 = 0, 0
        
        for t in tokens:
            if t == "+": 
                stack.append(stack.pop() + stack.pop()) # order of pop doesnt matter in + or *
            elif t == "-":
                term2 = stack.pop()
                term1 = stack.pop() # top of stack is second term of equation
                stack.append(term1 - term2)
            elif t == "*":
                stack.append(stack.pop() * stack.pop())
            elif t == "/":
                term2 = stack.pop()
                term1 = stack.pop()
                stack.append(int(term1 / term2)) # truncating to zero / rounding down
            else:
                stack.append(int(t))
                
        return stack.pop()