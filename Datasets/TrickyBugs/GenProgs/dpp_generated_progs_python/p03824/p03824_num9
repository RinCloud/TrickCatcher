# get the number of vertices
N = int(input())

# create adjacency list
adj_list = [[] for _ in range(N+1)]

# read the edges and build the adjacency list
for _ in range(N-1):
    a, b = map(int, input().split())
    adj_list[a].append(b)
    adj_list[b].append(a)

# start from vertex 1 and perform depth-first search
def dfs(v, parent):
    max_child_uninity = 0
    for child in adj_list[v]:
        if child != parent:
            child_uninity = dfs(child, v)
            max_child_uninity = max(max_child_uninity, child_uninity)
    return max_child_uninity + 1

# find the minimum uninity starting from vertex 1
min_uninity = dfs(1, -1)

# print the minimum uninity
print(min_uninity)