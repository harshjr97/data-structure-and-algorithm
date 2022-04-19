# undirected adjacency matrix graph implementation

class Graph:
    def __init__(self, size):
        self.adjMatrix = []
        for i in range(size):
            self.adjMatrix.append([0] * size)

    def addEdge(self, v1, v2):
        if v1 == v2:
            print("Both are same")
            return
        self.adjMatrix[v1][v2] = 1
        self.adjMatrix[v2][v1] = 1


    def removeEdge(self, v1, v2):
        if self.adjMatrix[v1][v2]==0:
            print("there is no edge between v1 and v2")
            return
        self.adjMatrix[v1][v2] = 0
        self.adjMatrix[v2][v1] = 0


    def printMatrix(self):
        for i in range(len(self.adjMatrix)):
            for j in range(len(self.adjMatrix)):
                print(self.adjMatrix[i][j], end=" ")
            print()


g = Graph(4)
g.addEdge(0, 1)
g.addEdge(0, 2)
g.addEdge(1, 2)
g.addEdge(2, 0)
g.addEdge(2, 3)
g.printMatrix()