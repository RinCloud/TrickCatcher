from collections import defaultdict

def max_satisfy_desires(N, K, desires):
    black_count = defaultdict(int)
    white_count = defaultdict(int)
    
    for x, y, c in desires:
        if c == 'B':
            black_count[(x // K, y // K)] += 1
        else:
            white_count[(x // K, y // K)] += 1
    
    max_satisfy = 0
    for i in range(K):
        for j in range(K):
            max_satisfy = max(max_satisfy, black_count[(i, j)] + white_count[(i, j)])
    
    return max_satisfy

# Read input
N, K = map(int, input().split())
desires = []
for _ in range(N):
    x, y, c = input().split()
    desires.append((int(x), int(y), c))
    
# Call the function and print the result
print(max_satisfy_desires(N, K, desires))