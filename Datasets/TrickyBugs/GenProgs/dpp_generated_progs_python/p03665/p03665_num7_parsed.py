# Read the input values
N, P = map(int, input().split())
A = list(map(int, input().split()))

# Generate all possible subsets
subsets = []
for i in range(2**N):
    subset = []
    for j in range(N):
        if (i >> j) & 1:
            subset.append(A[j])
    subsets.append(subset)

# Count the number of subsets with a total sum congruent to P modulo 2
count = 0
for subset in subsets:
    if sum(subset) % 2 == P:
        count += 1

# Print the result
print(count)