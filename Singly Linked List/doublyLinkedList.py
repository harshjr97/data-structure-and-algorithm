class Node:
    # constructor
    def __init__(self, info, prev=None, next = None):
        self.info = info
        self.prev = prev
        self.next = next

class LinkedList:
    def __init__(self):
        self.head = None

    def insert_at_begining(self, ele):
        newNode = Node(ele)
        if self.head == None:
            self.head = newNode
        else:
            newNode.next = self.head
            self.head.prev = newNode
            self.head = newNode

    def insert_at_end(self, ele):
        newNode = Node(ele)
        if self.head == None:
            self.head = newNode
        else:
            current = self.head
            while current.next != None:
                current = current.next
            current.next = newNode
            newNode.prev = current

    def deleteNode(self, ele):
        if self.head == None:
            print("List is empty")
            return
        if self.head.info == ele:
            self.head = self.head.next

        current = self.head
        while current != None:
            if current.info == ele:
                current.prev.next = current.next
                current.next.prev = current.prev
            current = current.next

    def display(self):
        if self.head == None:
            print("List is empty")
            return
        current = self.head
        while current != None:
            print(current.info, end=" ")
            current = current.next



if __name__ == '__main__':
    ll = LinkedList()
    ll.insert_at_begining(10)
    ll.insert_at_begining(20)
    ll.insert_at_begining(30)
    ll.insert_at_begining(40)
    ll.insert_at_end(50)
    ll.deleteNode(20)
    ll.display()