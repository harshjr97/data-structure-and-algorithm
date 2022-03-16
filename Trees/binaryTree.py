class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


class BST:

    def buildBST(self, root, ele):
        if root==None:
            return Node(ele)
        if ele < root.data:
            root.left = self.buildBST(root.left, ele)
        else:
            root.right = self.buildBST(root.right, ele)
        return root

    
    def countNode(self, root):
        if root is None:
            return 0
        return 1+self.countNode(root.left)+self.countNode(root.right)


    def leafCount(self,root):
        if root is None:
            return 0
        if root.left is None and root.right is None:
            return 1
        else:
            return self.leafCount(root.left)+self.leafCount(root.right)


    def maxDepth(self,root):
        if root is None:
            return 0
        else:
            ldepth = self.maxDepth(root.left)
            rdepth = self.maxDepth(root.right)
            return max(ldepth, rdepth)+1

root = None
b = BST()
for e in [2,1,33,0,25,40,11,34,7,12,36,13]:
    root = b.buildBST(root, e)

print(b.countNode(root))
print(b.leafCount(root))
print(b.maxDepth(root))