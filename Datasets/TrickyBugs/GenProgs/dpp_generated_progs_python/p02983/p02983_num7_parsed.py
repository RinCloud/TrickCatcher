# Read L and R from input
L, R = map(int, input().split())

# Calculate the minimum possible value of (i * j) % 2019
min_mod = float('inf')
for i in range(L, R):
    for j in range(i+1, R+1):
        mod = (i * j) % 2019
        if mod < min_mod:
            min_mod = mod

# Print the result
print(min_mod)