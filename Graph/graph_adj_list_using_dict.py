class Graph:
    def __init__(self, size):
        self.V = size
        self.graph = {}

        for i in range(size):
            self.graph[i] = []

    def addEdge(self, s, d):
        self.graph[s].append(d)
        self.graph[d].append(s)
    
    def printGraph(self):
        for i in range(self.V):
            print(i, end=" ")
            for j in self.graph[i]:
                print(j, end=" ")
            print("\n")
    
    def removeEdge(self, s, d):
        self.graph[s].remove(d)
        self.graph[d].remove(s)
    
    def removeVertex(self, v):
        for i in self.graph[v]:
            self.graph[i].remove(v)
        self.graph.pop(v)
    
g = Graph(4)
g.addEdge(0, 1)
g.addEdge(0, 2)
g.addEdge(1, 2)
g.addEdge(2, 3)
g.printGraph()