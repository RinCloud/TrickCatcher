from collections import defaultdict

def find_compass_pairs(N, a, b, pinholes):
    pairs = 0
    distances = defaultdict(int)
    
    for i in range(N):
        x_i, y_i = pinholes[i]
        distances[(i+1, a)] = abs(x_i - pinholes[a-1][0]) + abs(y_i - pinholes[a-1][1])
        distances[(i+1, b)] = abs(x_i - pinholes[b-1][0]) + abs(y_i - pinholes[b-1][1])
    
    for i in range(N):
        for j in range(i+1, N):
            if distances[(i+1, a)] == distances[(j+1, a)] or distances[(i+1, a)] == distances[(j+1, b)]:
                pairs += 1
                break
            if distances[(i+1, b)] == distances[(j+1, a)] or distances[(i+1, b)] == distances[(j+1, b)]:
                pairs += 1
                break
    
    return pairs

# Read input
N, a, b = map(int, input().split())
pinholes = [list(map(int, input().split())) for _ in range(N)]

# Find the number of pairs
result = find_compass_pairs(N, a, b, pinholes)

# Print the result
print(result)