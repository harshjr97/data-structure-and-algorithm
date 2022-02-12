class Node:
    def __init__(self, info, next=None):
        self.info = info
        self.next = next

class Queue:
    def __init__(self):
        self.front = self.rear = None

    def isEmpty(self):
        return self.front==None
    
    def enqueue(self, ele):
        temp = Node(ele)
        if self.rear == None:
            self.rear = self.front = temp
        self.rear.next = temp
        self.rear = temp

    def dequeue(self):
        if self.isEmpty():
            print('Queue is Empty')
            return
        else:
            temp = self.front
            self.front = temp.next
            if self.front == None:
                self.rear = None

    def display(self):
        p = self.front
        while p!=None:
            print(p.info, end=" ")
            p = p.next

if __name__ == '__main__':
    q = Queue()
    q.enqueue(10)
    q.enqueue(20)
    q.enqueue(30)
    q.display()
    q.dequeue()
    print()
    q.display()