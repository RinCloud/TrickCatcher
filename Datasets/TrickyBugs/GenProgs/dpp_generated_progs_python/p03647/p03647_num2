# Python program:

def is_possible(N, M, connections):
    destinations = set()
    for connection in connections:
        destinations.add(connection[1])
    
    for connection in connections:
        if connection[0] in destinations:
            return "POSSIBLE"
    
    return "IMPOSSIBLE"
    

# Read input
N, M = map(int, input().split())
connections = []
for _ in range(M):
    a, b = map(int, input().split())
    connections.append((a, b))

# Check if it is possible
result = is_possible(N, M, connections)
print(result)