from itertools import permutations

N = int(input())
A = list(map(int, input().split()))

# Generate all possible permutations for -1 replacements
permutations_1 = list(permutations(range(1, 2*N+1), A.count(-1)))

# Count the number of different sequences that B_1, B_2, ..., B_N can be
count = 0
for perm in permutations_1:
    B = [min(perm[2*i-1], perm[2*i]) for i in range(1, N+1)]
    if len(set(B)) == N:
        count += 1

# Print the result modulo 10^9 + 7
print(count % (10**9 + 7))