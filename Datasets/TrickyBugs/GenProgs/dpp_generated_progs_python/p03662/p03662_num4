N = int(input())
adj_list = [[] for _ in range(N+1)]
for _ in range(N-1):
    a, b = map(int, input().split())
    adj_list[a].append(b)
    adj_list[b].append(a)

colors = [0 for _ in range(N+1)]
colors[1] = 1
colors[N] = -1

def dfs(node, parent):
    global colors
    for neighbor in adj_list[node]:
        if neighbor != parent:
            colors[neighbor] = -colors[node]
            dfs(neighbor, node)

dfs(1, 0)

fennec_count = sum(1 for color in colors if color == 1)
snuke_count = sum(1 for color in colors if color == -1)

if fennec_count > snuke_count:
    print("Fennec")
else:
    print("Snuke")