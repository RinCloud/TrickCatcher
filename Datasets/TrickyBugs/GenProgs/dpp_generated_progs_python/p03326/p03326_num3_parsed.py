from itertools import combinations

def max_cake_value(N, M, cakes):
    max_value = 0
    for r in range(M+1):
        for comb in combinations(cakes, r):
            total_beauty = sum(x for x, _, _ in comb)
            total_tastiness = sum(y for _, y, _ in comb)
            total_popularity = sum(z for _, _, z in comb)
            
            value = abs(total_beauty) + abs(total_tastiness) + abs(total_popularity)
            max_value = max(max_value, value)
    
    return max_value


# Read N and M
N, M = map(int, input().split())

# Read x, y, z for each cake
cakes = []
for _ in range(N):
    x, y, z = map(int, input().split())
    cakes.append((x, y, z))

# Calculate and print the maximum value
print(max_cake_value(N, M, cakes))