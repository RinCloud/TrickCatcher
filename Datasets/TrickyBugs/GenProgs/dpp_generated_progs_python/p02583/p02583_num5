import itertools

# Read input
N = int(input())
sticks = list(map(int, input().split()))

# Sort the lengths in ascending order
sticks.sort()

# Initialize counter for valid triangles
count = 0

# Generate all combinations of 3 sticks
combinations = itertools.combinations(sticks, 3)

# Check each combination if it forms a valid triangle
for comb in combinations:
    a, b, c = comb
    if a != b and b != c and c != a and a + b > c:
        count += 1

# Print the number of valid triangles
print(count)