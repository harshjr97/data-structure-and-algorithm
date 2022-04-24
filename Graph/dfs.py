class DFS:
    def __init__(self):
        self.graph = {0:[1,2],1:[0,2],2:[0,1,3,4],3:[2,4],4:[2,3,5],5:[4,6,7],6:[5,7],7:[5,6]}
        self.visited = [False]*len(self.graph)
        self.pred = [-1]*len(self.graph)
        self.dist = [0]*len(self.graph)
        self.time = 0


    def depth_first_search(self, source):
        self.visited[source] = True
        print(f"Vertex {source}.")
        for i in range(len(self.graph[source])):
            if self.visited[self.graph[source][i]] == False:
                self.pred[self.graph[source][i]] = source
                self.depth_first_search(self.graph[source][i])
        self.time += 1
        self.dist[source] = self.time


    def dfs(self):
        self.depth_first_search(0)
        print(f"Distance from source to all vertices: {self.dist}")
        print(f"Predecessor of all vertices: {self.pred}")
    


dfs = DFS()
dfs.dfs()
print(f"Distance from source to all vertices: {dfs.dist}")
