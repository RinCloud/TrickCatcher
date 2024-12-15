# Read input
N = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

# Initialize variables
total_monsters = 0

# Iterate over each town
for i in range(N):
    # Calculate the maximum number of monsters the hero can defeat
    max_monsters = min(A[i], B[i])
    # Update the number of monsters defeated
    total_monsters += max_monsters
    # Decrease the number of remaining monsters in the town
    A[i] -= max_monsters
    # Check if there are monsters remaining in the next town
    if A[i] > 0:
        # Calculate the maximum number of monsters the hero can defeat in the next town
        max_monsters_next = min(A[i], B[i+1])
        # Update the number of monsters defeated
        total_monsters += max_monsters_next
        # Decrease the number of remaining monsters in the next town
        A[i] -= max_monsters_next

# Print the maximum total number of monsters defeated
print(total_monsters)