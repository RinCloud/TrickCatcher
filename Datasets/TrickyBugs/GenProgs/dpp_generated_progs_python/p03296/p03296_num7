'''
# Read inputs
N = int(input())
slimes = list(map(int, input().split()))

# Initialize spell count and previous color
spells = 0
prev_color = slimes[0]

# Iterate through slimes starting from the second one
for i in range(1, N):
    # If the current slime has the same color as the previous one
    if slimes[i] == prev_color:
        # Increment spell count and change the color of the current slime
        spells += 1
        prev_color = (prev_color % N) + 1
    else:
        # Update the previous color
        prev_color = slimes[i]

# Print the minimum number of spells required
print(spells)
'''