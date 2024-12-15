import itertools

N, A, B, C = map(int, input().split())
l = [int(input()) for _ in range(N)]

# Initialize minimum magic points required to a large number
min_mp = float('inf')

# Generate all possible combinations of lengths of 3 bamboos
for comb in itertools.combinations(l, 3):
    # Generate all possible permutations of the lengths of the 3 bamboos
    for perm in itertools.permutations(comb):
        # Calculate the difference between the target lengths and the lengths of the 3 bamboos
        diff_a = abs(A - sum(perm[:1]))
        diff_b = abs(B - sum(perm[1:2]))
        diff_c = abs(C - sum(perm[2:]))

        # Calculate the magic points required for extensions
        ext_a = max(diff_a - perm[0], 0)
        ext_b = max(diff_b - perm[1], 0)
        ext_c = max(diff_c - perm[2], 0)

        # Calculate the magic points required for shortenings
        shr_a = max(perm[0] - diff_a, 0)
        shr_b = max(perm[1] - diff_b, 0)
        shr_c = max(perm[2] - diff_c, 0)

        # Calculate the magic points required for compositions
        comp = 10 * (sum(perm) - A - B - C)

        # Calculate the total magic points required
        mp = ext_a + ext_b + ext_c + shr_a + shr_b + shr_c + comp

        # Update the minimum magic points required if necessary
        min_mp = min(min_mp, mp)

# Print the minimum magic points required
print(min_mp)