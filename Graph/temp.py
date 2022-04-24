from collections import defaultdict

class dfs:
    def __init__(self, n):
        self.V = n
        self.graph = defaultdict(list)
        self.visited = [False]*n
        self.pred = [-1]*n
        self.dist = [0]*n
        self.time = 0

    def add_edge(self,u,v):
        self.graph[u].append(v)

    def dfs_visit(self, u):
        self.visited[u] = True
        print(f"Vertex {u}.")
        for i in self.graph[u]:
            if self.visited[i] == False:
                self.pred[i] = u
                self.dfs_visit(i)
        self.time += 1
        self.dist[u] = self.time
        


    
    def dfs(self):
        for i in range(self.V):
            if self.visited[i] == False:
                self.dfs_visit(i)
        print(f"Distance from source to all vertices: {self.dist}")
        print(f"Predecessor of all vertices: {self.pred}")


d = dfs(6)
d.add_edge( 0, 1 )
d.add_edge( 0, 2 )
d.add_edge( 1, 2 )
d.add_edge( 2, 3 )
d.add_edge( 3, 1 )
d.add_edge( 4, 3 )
d.add_edge( 4, 5 )
d.add_edge( 5, 5 )
d.dfs()