# Reading input values
n, a, b = map(int, input().split())
h = [int(input()) for _ in range(n)]

# Initializing variables
explosions = 0

# Looping through all monsters
for i in range(n):
    # Calculate the number of explosions needed for the current monster
    # Add the ceiling division of the difference between the monster's health and A, with the difference between A and B
    explosions += (h[i] - a + (a - b) - 1) // (a - b)
    
    # If the monster's health is greater than 0 and there are any remaining monsters
    if h[i] > 0 and i < n - 1:
        # Calculate the damage caused by the explosions
        damage = explosions * a + (i + 1) * b
        
        # If the damage is less than the current monster's health, more explosions are needed to defeat it
        if damage < h[i]:
            # Calculate the additional explosions needed for the current monster
            additional_explosions = (h[i] - damage + a - b - 1) // (a - b)
            explosions += additional_explosions
    
# Print the minimum number of explosions needed to vanish all the monsters
print(explosions)