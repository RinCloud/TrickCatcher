# Program

n, m = map(int, input().split())
edges = [[] for _ in range(n+1)]
for _ in range(m):
    x, y, z = map(int, input().split())
    edges[x].append((y, z))
    edges[y].append((x, z))

# determine the parity of each card
parity = [None] * (n+1)
parity[1] = 0
stack = [1]
while stack:
    curr = stack.pop()
    for neighbor, weight in edges[curr]:
        if parity[neighbor] is None:
            parity[neighbor] = parity[curr] ^ weight % 2
            stack.append(neighbor)

# count the number of cards with unknown values
unknown = sum(1 for p in parity if p is None)
print(unknown)