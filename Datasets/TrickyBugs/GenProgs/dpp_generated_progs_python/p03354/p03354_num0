def max_possible(p, M):
    N = len(p)
    count = 0
    for i in range(N):
        if p[i] == i+1:
            count += 1
    
    # Apply the operations
    for _ in range(M):
        x, y = map(int, input().split())
        x -= 1
        y -= 1
        if p[x] == x+1 and p[y] != y+1:
            count -= 1
        if p[x] != x+1 and p[y] == y+1:
            count -= 1
        if p[x] == x+1 and p[y] == y+1:
            count += 1
        p[x], p[y] = p[y], p[x]
    
    return count


# Read input
N, M = map(int, input().split())
p = list(map(int, input().split()))

# Compute and print the result
result = max_possible(p, M)
print(result)