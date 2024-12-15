# Here is one possible solution:

n, m = map(int, input().split())
edges = [tuple(map(int, input().split())) for _ in range(m)]

adj_list = [[] for _ in range(n)]
for a, b in edges:
    adj_list[a-1].append(b-1)
    adj_list[b-1].append(a-1)

for v in adj_list[0]:
    if n-1 in adj_list[v]:
        print('POSSIBLE')
        exit()

print('IMPOSSIBLE')