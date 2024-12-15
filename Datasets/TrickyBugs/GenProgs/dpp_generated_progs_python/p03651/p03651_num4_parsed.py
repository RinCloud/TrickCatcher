from itertools import product

N, K = map(int, input().split())
A = list(map(int, input().split()))

# Check if the target value (K) is already present in A
if K in A:
    print("POSSIBLE")
    exit()

# Generate all possible pairs from A
pairs = list(product(A, repeat=2))

# Check if it is possible to reach K using the pairs
for p in pairs:
    diff = abs(p[0] - p[1])
    if diff == K:
        print("POSSIBLE")
        exit()

print("IMPOSSIBLE")