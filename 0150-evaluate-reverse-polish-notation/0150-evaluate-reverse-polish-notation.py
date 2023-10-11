class Solution:
    def ops(self, term1, term2, operator):
        term1 = int(term1)
        term2 = int(term2)
        
        if operator == "+": return term1 + term2
        elif operator == "-": return term1 - term2
        elif operator == "*": return term1 * term2
        else: return int(term1 / term2) # truncate to zero / rounding down
    
    def evalRPN(self, tokens: List[str]) -> int:
        if len(tokens) == 1: return int(tokens[0])
        
        stack = []
        tmp, term1, term2 = 0, 0, 0
        
        for t in tokens:
            if t in "+-*/": # checking token[i] is an + - * or /
                term2 = stack.pop() # first one popped is second term
                term1 = stack.pop()
                tmp = self.ops(term1, term2, t)
                stack.append(tmp)
            else:
                stack.append(t)
    
        return stack.pop()