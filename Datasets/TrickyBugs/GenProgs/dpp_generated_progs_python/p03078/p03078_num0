from itertools import product

# Read input
X, Y, Z, K = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))
C = list(map(int, input().split()))

# Generate all possible combinations of cakes
comb = list(product(A, B, C))

# Sort the combinations in descending order of deliciousness sum
comb.sort(key=lambda x: sum(x), reverse=True)

# Print the sum of deliciousness for the first K combinations
for i in range(K):
    print(sum(comb[i]))