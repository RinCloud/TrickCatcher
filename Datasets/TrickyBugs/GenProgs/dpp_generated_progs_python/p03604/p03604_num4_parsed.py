import sys
sys.setrecursionlimit(1000000)

def find(parent, i):
    if parent[i] == i:
        return i
    parent[i] = find(parent, parent[i])
    return parent[i]

def union(parent, size, i, j):
    root_i = find(parent, i)
    root_j = find(parent, j)
    
    if root_i == root_j:
        return
    
    if size[root_i] < size[root_j]:
        parent[root_i] = root_j
        size[root_j] += size[root_i]
    else:
        parent[root_j] = root_i
        size[root_i] += size[root_j]

def calculate_factorial(n):
    factorial = [1] * (n+1)
    
    for i in range(1, n+1):
        factorial[i] = (factorial[i-1] * i) % (10**9 + 7)
    
    return factorial

def calculate_inverse_factorial(n, factorial):
    inverse_factorial = [1] * (n+1)
    
    inverse_factorial[n] = pow(factorial[n], 10**9 + 5, 10**9 + 7)
    
    for i in range(n-1, -1, -1):
        inverse_factorial[i] = (inverse_factorial[i+1] * (i+1)) % (10**9 + 7)
    
    return inverse_factorial

def calculate_combinations(n, factorial, inverse_factorial):
    combinations = [1] * (n+1)
    
    for i in range(1, n+1):
        combinations[i] = (factorial[n] * inverse_factorial[i] * inverse_factorial[n-i]) % (10**9 + 7)
    
    return combinations

N = int(input())
points = [list(map(int, input().split())) for _ in range(2*N)]

parent = list(range(2*N))
size = [1] * (2*N)
factorial = calculate_factorial(2*N)
inverse_factorial = calculate_inverse_factorial(2*N, factorial)
combinations = calculate_combinations(2*N, factorial, inverse_factorial)

for i in range(2*N):
    for j in range(i+1, 2*N):
        if points[i][0] == points[j][0] or points[i][1] == points[j][1]:
            union(parent, size, i, j)

group_size = [0] * (2*N)
for i in range(2*N):
    group_size[find(parent, i)] += 1

answer = 1
for i in range(2*N):
    if parent[i] == i:
        answer *= factorial[group_size[i]]
        answer %= (10**9 + 7)

print(answer)