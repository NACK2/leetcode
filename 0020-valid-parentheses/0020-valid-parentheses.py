class Solution:
    def isValid(self, s: str) -> bool:
        # if opening bracket: push to stack
        # if closing bracket: pop from stack and compare closing bracket with popped element
        stack = []
        brackets = {'(': ')', '{': '}', '[': ']'}
        
        for i in s:
            if i in brackets: # i is opening bracket
                stack.append(i)
            elif not stack or brackets[stack.pop()] != i: # empty or brackets dont match
                return False
        
        return len(stack) == 0
                