class Node:

    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None

class BST:

    def buildBST(self, root, ele):
        if root is None:
            return Node(ele)
        if ele < root.data:
            root.left = self.buildBST(root.left, ele)
        else:
            root.right = self.buildBST(root.right, ele)
        return root

    def inorderPrint(self, root):
        if root == None:
            return
        self.inorderPrint(root.left)
        print(root.data)
        self.inorderPrint(root.right)

    def preorderPrint(self, root):
        if root == None:
            return
        self.inorderPrint(root.left)
        self.inorderPrint(root.right)
        print(root.data)

    def successor(self,root):
        root = root.right
        while root.left:
            root = root.left
        return root.data

    def predecessor(self,root):
        root = root.left
        while root.right:
            root = root.right
        return root.data

    def deleteEle(self,root, key):
        if not root:
            return None
        if key<root.data:
            root.left = self.deleteEle(root.left, key)
        if key>root.data:
            root.right = self.deleteEle(root.right, key)
        else:
            if not root.left or root.right:
                root = None
            elif root.right:
                root.data = self.successor(root)
                root.right = self.deleteEle(root.right,root.data)
            else:
                root.data = self.predecessor(root)
                root.left = self.deleteEle(root.left,root.data)
        return root
        


    def postorderPrint(self, root):
        if root == None:
            return
        print(root.data)
        self.inorderPrint(root.left)
        self.inorderPrint(root.right)




    def rSearch(self, root, key):
        if root is None or root.data==key:
            return root
        if key<root.data:
            return self.rSearch(root.left, key)
        if key>root.data:
            return self.rSearch(root.right, key)
        
    def minValue(self, root):
        current = root
        while current.left is not None:
            current = current.left
        return current.data

    def maxValue(self, root):
        current = root
        while current.right is not None:
            current = current.right
        return current.data


# if __name__ == '__main__':
root = None
b = BST()
for ele in [10,5,25,2,7,30]:
    root = b.buildBST(root, ele)
# b.inorderPrint(root)

# b.deleteEle(root,5)
# print("present" if b.rSearch(root, 5) else "not")
# print(f"min value : {b.minValue(root)}, max value : {b.maxValue(root)}")