class Stack:

    def __init__(self):
        self.stack = []

    def isEmpty(self):
        return self.stack == []
    
    def push(self, ele):
        self.stack.append(ele)

    def pop(self):
        if not self.isEmpty():
            return self.stack.pop()
        else:
            return -1
        
    def peek(self):
        if not self.isEmpty():
            return self.stack[-1]
        else:
            return -1
    
    def display(self):
        for i in self.stack:
            print(i, end=" ")
        print("\n")
        

if __name__ == '__main__':
    s = Stack()
    s.push(10)
    s.push(20)
    s.push(30)
    s.push(40)
    s.display()
    print(f"top element : {s.peek()}")
    print(f"popped element : {s.pop()}")
    print(f"top element : {s.peek()}")
    s.display()