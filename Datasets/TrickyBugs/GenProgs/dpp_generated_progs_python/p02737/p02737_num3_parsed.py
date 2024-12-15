# Python program to solve the given problem

MOD = 998244353

# Function to find the maximum possible
# total weight of the vertices in an independent set
def calculate_weight(N, edges_X, edges_Y, edges_Z):
  
    # Creating adjacency list for graphs X, Y, Z
    adj_X = {}
    adj_Y = {}
    adj_Z = {}
    
    for i in range(N):
        adj_X[i+1] = []
        adj_Y[i+1] = []
        adj_Z[i+1] = []
        
    for edge in edges_X:
        u, v = edge
        adj_X[u].append(v)
        adj_X[v].append(u)
        
    for edge in edges_Y:
        u, v = edge
        adj_Y[u].append(v)
        adj_Y[v].append(u)
        
    for edge in edges_Z:
        u, v = edge
        adj_Z[u].append(v)
        adj_Z[v].append(u)
  
    # Calculating independent set weight
    weight = 0
    for x in range(1, N+1):
        for y in range(1, N+1):
            max_weight = 0
            for z in range(1, N+1):
                if x in adj_X[y] or y in adj_Y[z] or z in adj_Z[x]:
                    continue
                weight = (weight + 10**(18*(x+y+z))) % MOD
                max_weight = max(max_weight, weight)
            weight = max_weight
            
    return weight

# Taking input from user
N = int(input())
M1 = int(input())
edges_X = []
for _ in range(M1):
    a, b = map(int, input().split())
    edges_X.append((a, b))
M2 = int(input())
edges_Y = []
for _ in range(M2):
    c, d = map(int, input().split())
    edges_Y.append((c, d))
M3 = int(input())
edges_Z = []
for _ in range(M3):
    e, f = map(int, input().split())
    edges_Z.append((e, f))

# Calling the function and printing the result
print(calculate_weight(N, edges_X, edges_Y, edges_Z))