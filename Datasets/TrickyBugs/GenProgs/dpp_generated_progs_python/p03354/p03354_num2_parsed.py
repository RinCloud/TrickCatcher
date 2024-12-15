def max_matches(N, M, p, swaps):
    matches = 0
    for i in range(N):
        if p[i] == i+1:
            matches += 1

    for swap in swaps:
        x, y = swap
        p[x-1], p[y-1] = p[y-1], p[x-1]
        if p[x-1] == x:
            matches += 1
        if p[y-1] == y:
            matches += 1

    return matches

# Read input
N, M = map(int, input().split())
p = list(map(int, input().split()))
swaps = []
for _ in range(M):
    x, y = map(int, input().split())
    swaps.append((x, y))

# Compute and print the maximum possible number of matches
print(max_matches(N, M, p, swaps))