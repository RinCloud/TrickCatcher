# Read the input
N, A, B = map(int, input().split())
h = [int(input()) for _ in range(N)]

# Initialize the number of explosions
explosions = 0

# Iterate through each monster's health
for i in range(N):
    # Calculate the remaining health after one explosion centered at this monster
    remaining_health = h[i] % (A + B)
    
    # Calculate the number of explosions required to completely vanquish this monster
    if remaining_health <= A:
        explosions += 1
    else:
        explosions += (remaining_health + A - 1) // A

# Print the total number of explosions required
print(explosions)