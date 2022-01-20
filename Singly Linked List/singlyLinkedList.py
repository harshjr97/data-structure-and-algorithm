class Node:
    # constructor
    def __init__(self, info, link=None):
        self.info = info
        self.link = link

class LinkedList:

    def __init__(self):
        self.head = None

    def getSize(self):
        size = 0
        curr = self.head
        while curr!=None:
            size+=1
            curr = curr.link
        return size

    def insert_at_begining(self, info):
        # create a new node
        newNode = Node(info)
        if self.head != None:
            newNode.link = self.head
            self.head = newNode
        else:
            self.head = newNode

    def insert_at_end(self, info):
        newNode = Node(info)
        if self.head != None:
            current = self.head
            while current.link != None:
                current = current.link
            current.link = newNode
        else:
            self.head = newNode

    def insert_at(self, info, pos):
        newNode = Node(info)
        if pos==0:
            self.insert_at_begining(info)
        elif self.head != None:
            if pos>self.getSize():
                print("Out of Range")
                return
            else:
                current = self.head
                for i in range(pos-1):
                    current = current.link
                newNode.link = current.link
                current.link = newNode

    def deleteNode(self, ele):
        if self.head == None:
            print("List Empty")
            return
        if self.head.info == ele:
            temp = self.head
            self.head = temp.link
            temp = None
            return
        current = self.head
        while current != None:
            if current.link.info == ele:
                temp = current.link
                current.link = temp.link
                temp = None
                return
            current = current.link
        print("Element isn't Found")
        
    def searchNode(self, ele):
        if self.head == None:
            print("list is empty")
            return
        current = self.head
        while current != None:
            if current.info == ele:
                print("Element is Present")
                return
            current = current.link
        print("Element not Present")


    def display(self):
        current = self.head
        while current != None:
            print(current.info, end=" ")
            current = current.link
        print("\n")

if __name__ == '__main__':
    LL = LinkedList()
    LL.insert_at_begining(10)
    LL.insert_at_begining(5)
    LL.display()
    LL.insert_at_end(20)
    LL.insert_at_end(30)
    LL.display()
    LL.insert_at(200,4)
    LL.display()
    print("after deleting ")
    LL.deleteNode(20)
    LL.display()
    LL.searchNode(10)