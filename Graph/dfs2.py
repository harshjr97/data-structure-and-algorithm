from collections import defaultdict

class DFS:
    def __init__(self,n):
        self.V = n
        self.color = ['white']*n
        self.start_time = [0]*n
        self.end_time = [0]*n
        self.graph = defaultdict(list)

    def add_edge(self,u,v):
        self.graph[u].append(v)

    def dfs_visit(self, u):
        self.time+=1
        self.start_time[u]=self.time
        self.color[u]='gray'
        print(f"Vertex {u}.")
        for i in self.graph[u]:
            if self.color[i]=='white':
                self.dfs_visit(i)
        self.time+=1
        self.end_time[u]=self.time
        self.color[u]='black'

    def dfs(self):
        for i in range(self.V):
            self.time = 0
            if self.color[i]=='white':
                self.dfs_visit(i)
        print(self.start_time)
        print(self.end_time)


d = DFS(6)
d.add_edge( 0, 1 )
d.add_edge( 0, 2 )
d.add_edge( 1, 2 )
d.add_edge( 2, 3 )
d.add_edge( 3, 1 )
d.add_edge( 4, 3 )
d.add_edge( 4, 5 )
d.add_edge( 5, 5 )
d.dfs()