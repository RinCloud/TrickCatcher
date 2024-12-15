from collections import defaultdict

N, M = map(int, input().split())

# Create a defaultdict to store the connections between islands
connections = defaultdict(list)

for _ in range(M):
    a, b = map(int, input().split())
    connections[a].append(b)
    connections[b].append(a)

# Check if there is a direct connection from Island 1 to Island N
if N in connections[1]:
    print("POSSIBLE")
    exit()

# Check if there is a combination of two boat services that connect Island 1 to Island N
for a in connections[1]:
    for b in connections[a]:
        if b == N:
            print("POSSIBLE")
            exit()

print("IMPOSSIBLE")