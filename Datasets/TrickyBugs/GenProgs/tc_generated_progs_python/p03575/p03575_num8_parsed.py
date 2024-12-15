from collections import deque

n, m = map(int, input().split(" "))
a = [list(map(int, input().split(" "))) for i in range(m)]

a_connects = [[] for _ in range(n)]
for x, y in a:
	a_connects[x-1].append(y-1)
	a_connects[y-1].append(x-1)

bridge_count = 0

def bfs(node, graph): # change this line
	visited = [False] * n
	visited[node] = True
	q = deque()
	q.append(node)
	while q:
		curr_node = q.popleft()
		for next_node in graph[curr_node]:
			if not visited[next_node]:
				visited[next_node] = True
				q.append(next_node)

for i in range(m):
	x, y = a[i]
	# remove the current edge temporarily
	a_connects[x-1].remove(y-1)
	a_connects[y-1].remove(x-1)

	# check if the graph is still connected
	bfs(0, a_connects) # change this line
	if not all(visited):
		bridge_count += 1

	# add the removed edge back
	a_connects[x-1].append(y-1)
	a_connects[y-1].append(x-1)

print(bridge_count)
