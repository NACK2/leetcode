class MyQueue:
    def __init__(self):
        self.stack = []
        self.tempStack = []

    def push(self, x: int) -> None:
        while (self.stack):
            self.tempStack.append(self.stack.pop())
        self.stack.append(x)
        
        while (self.tempStack):
            self.stack.append(self.tempStack.pop())
            

    def pop(self) -> int:
        return self.stack.pop()

    def peek(self) -> int:
        ret = self.stack.pop()
        self.stack.append(ret)
        
        return ret

    def empty(self) -> bool:
        return not self.stack


# Your MyQueue object will be instantiated and called as such:
# obj = MyQueue()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.peek()
# param_4 = obj.empty()