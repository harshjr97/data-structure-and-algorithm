class Node:
    def __init__(self, info, next=None):
        self.info = info
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def insert_at_begining(self, ele):
        newNode = Node(ele)
        if self.head == None:
            self.head = newNode
            self.head.next = self.head
        else:
            current = self.head
            while current.next != self.head:
                current = current.next
            current.next = newNode
            newNode.next = self.head
            self.head = newNode

    def insert_at_end(self, ele):
        newNode = Node(ele)
        if self.head == None:
            self.head = newNode
            self.head.next = self.head
        else:
            current = self.head
            while current.next != self.head:
                current = current.next
            current.next = newNode
            newNode.next = self.head

    def deleteNode(self, ele):
        if self.head == None:
            print("list is empty")
            return
        if self.head.info == ele:
            current = self.head
            while current.next != self.head:
                current = current.next
            current.next = self.head.next
            self.head = self.head.next
            return
        current = self.head
        while current.next != self.head:
            if current.next.info == ele:
                current.next = current.next.next
                return
            current = current.next
        print("Element is not found in the list")

    def traverse(self):
        current = self.head
        while current.next != self.head:
            print(current.info, end=" ")
            current = current.next
        print(current.info)
        print("\n")
        

if __name__ == '__main__':
    ll = LinkedList()
    ll.insert_at_begining(10)
    ll.insert_at_begining(20)
    ll.insert_at_begining(30)
    ll.traverse()
    ll.insert_at_end(100)
    ll.insert_at_end(90)
    ll.traverse()
    ll.deleteNode(350)
    ll.traverse()