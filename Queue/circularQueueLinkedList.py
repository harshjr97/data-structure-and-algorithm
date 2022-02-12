class Node:

    def __init__(self, info, next=None):
        self.info = info
        self.next = next


class CircularQueue:

    def __init__(self):
        self.front = self.rear = None
    
    # inset element from rear
    def enqueue(self, ele):                # O(1) time
        # create a node
        temp = Node(ele)
        if self.front is None:
            self.front = temp
        else:
            self.rear.next = temp
        self.rear = temp
        self.rear.next = self.front


    # remove element from front
    def dequeue(self):                      # O(1) time
        if self.front is None:
            print("Queue is Empty")
            return
        temp = self.front
        if self.front == self.rear:
            self.front = self.rear = None
        else:
            self.front = temp.next
            self.rear.next = self.front
        return temp.info

    
    def display(self):
        current = self.front
        while current.next!=self.front:
            print(current.info)
            current = current.next
        print(current.info)


if __name__ == '__main__':
    c = CircularQueue()
    c.enqueue(10)
    c.enqueue(20)
    c.enqueue(30)
    c.display()
    c.dequeue()
    print("*****")
    c.display()