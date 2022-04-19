class Node:
    def __init__(self, v):
        self.vertex = v
        self.next = None


class Graph:
    def __init__(self, size):
        self.V = size
        self.graph = [None] * size

    def addEdge(self, s, d):
        node = Node(d)
        node.next = self.graph[s]
        self.graph[s] = node

        node = Node(s)
        node.next = self.graph[d]
        self.graph[d] = node

    def printGraph(self):
        for i in range(self.V):
            temp = self.graph[i]
            while temp:
                print(temp.vertex, end=" ")
                temp = temp.next
            print("\n")


g = Graph(4)
g.addEdge(0, 1)
g.addEdge(0, 2)
g.addEdge(1, 2)
g.addEdge(2, 3)
g.printGraph()