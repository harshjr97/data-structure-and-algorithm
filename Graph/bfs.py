class BFS:
    def __init__(self, n):
        self.dist = [0]*n
        self.pred = [-1]*n
        self.visited = [False]*n
        self.graph = {0:[1],1:[0,2],2:[1,3],3:[2,4,5],4:[3,5,7],5:[3,4,6,7],6:[5,7],7:[4,5,6]}


    def bfs(self, source):
        queue = []
        queue.append(source)
        self.dist[source] = 0
        self.visited[source] = True
        while queue:
            current = queue.pop(0)
            print(f"Vertex {current}.")
            for i in range(len(self.graph[current])):
                if self.visited[self.graph[current][i]] == False:
                    queue.append(self.graph[current][i])
                    self.visited[self.graph[current][i]] = True
                    self.dist[self.graph[current][i]] = self.dist[current] + 1
                    self.pred[self.graph[current][i]] = current
            

bfs = BFS(8)
bfs.bfs(0)