class MyQueue:
    def __init__(self):
        self.stack = []
        self.tempStack = []

    def push(self, x: int) -> None:
        self.stack.append(x)
            

    def pop(self) -> int:
        for i in range(len(self.stack)-1):
            self.tempStack.append(self.stack.pop())
        
        ret = self.stack.pop()
        while (self.tempStack):
            self.stack.append(self.tempStack.pop())
        
        return ret

    def peek(self) -> int:
        return self.stack[0]

    def empty(self) -> bool:
        return not self.stack


# Your MyQueue object will be instantiated and called as such:
# obj = MyQueue()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.peek()
# param_4 = obj.empty()