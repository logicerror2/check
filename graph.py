from collections import defaultdict, deque
class Graph:
    def __init__(self, num_vertices):
        self.num_vertices = num_vertices
        self.adjacency_list = defaultdict(list)
        self.adj_list = defaultdict(list)
    def add_edge(self, node1, node2):
        self.adjacency_list[node1].append(node2)
        self.adjacency_list[node2].append(node1)  # For undirected graph

    def print_matrix(self):
        for node, neighbors in self.adjacency_list.items():
            print(f"{node} -> {neighbors}")
            
def bfs(graph, start_node):
    visited = set()
    queue = deque([start_node])
    visited.add(start_node)
    result = []
    
    while queue:
        curr_node = queue.popleft()
        result.append(curr_node)
        for neighbor in graph[curr_node]:
            if neighbor not in visited:
                visited.add(neighbor)
                queue.append(neighbor)
                
    return result

def dfs_iter(graph, start_node):
    visited = set()
    stack = [start_node]
    res = []
    
    while stack:
        curr_node = stack.pop()
        if curr_node not in visited:
            visited.add(curr_node)
            res.append(curr_node)
            for neighbor in reversed(graph[curr_node]):
                if neighbor not in visited:
                    stack.append(neighbor)
                    
    return res
            
graph = Graph(4)
graph.add_edge(0,1)
graph.add_edge(0,2)
graph.add_edge(1,2)
graph.add_edge(2,3)
a = bfs(graph.adjacency_list, 0)
a = dfs_iter(graph.adjacency_list, 0)
print(a)