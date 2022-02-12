class Queue:
    def __init__(self,size):
        self.q = []
        self.size = size
        self.head = self.tail = -1

    def getFront(self):
        return self.q[self.tail]
    
    def getRear(self):
        return self.q[0]
    
    def display(self):
        for i in self.q:
            print(i, end=" ")
        print()

    def enqueue(self, ele):
        if self.tail==self.size-1:
            print("Queue is Full")
            return
        elif self.head==-1 and self.tail==-1:
            self.q.insert(0, ele)
            self.head += 1
            self.tail += 1
        else:
            self.q.insert(0, ele)
            self.tail += 1

    def dequeue(self):
        if self.head == -1 and self.tail == -1:
            print("Queue is Empty")
            return
        else:
            self.tail -= 1
            return self.q.pop()



if __name__ == '__main__':
    q1 = Queue(5)
    q1.enqueue(10)
    q1.enqueue(20)
    q1.enqueue(30)
    q1.enqueue(40)
    q1.enqueue(50)
    q1.display()
    q1.dequeue()
    q1.dequeue()
    print("After dequeue : ", end=" ")
    q1.display()
    print("front : ",q1.getFront())
    print("rear : ",q1.getRear())