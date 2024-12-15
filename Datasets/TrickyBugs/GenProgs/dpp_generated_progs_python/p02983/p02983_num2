# Input
L, R = map(int, input().split())

# Initialize minimum value
min_mod = float('inf')

# Loop through all possible pairs (i, j)
for i in range(L, R):
    for j in range(i+1, R+1):
        # Calculate (i * j) % 2019
        mod = (i * j) % 2019
        
        # Update minimum value if current mod is smaller
        if mod < min_mod:
            min_mod = mod

# Output the minimum possible value of (i * j) % 2019
print(min_mod)