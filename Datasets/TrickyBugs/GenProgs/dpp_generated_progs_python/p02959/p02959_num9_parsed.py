# Python program to find the maximum total number of monsters the heroes can defeat.

# Function to find the maximum total number of monsters the heroes can defeat.
def find_max_monsters(N, A, B):
    max_monsters = 0
    
    for i in range(N):
        monsters_defeated = min(A[i], B[i]) # Number of monsters defeated by current hero
        max_monsters += monsters_defeated # Update the maximum total number of monsters defeated
        
        remaining_monsters = A[i] - monsters_defeated # Calculate remaining monsters that need to be defeated
        
        if remaining_monsters > 0:
            monsters_defeated_next = min(remaining_monsters, B[i+1]) # Number of monsters defeated by next hero
            max_monsters += monsters_defeated_next # Update the maximum total number of monsters defeated
    
    return max_monsters

# Read input from standard input
N = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

# Find the maximum total number of monsters the heroes can defeat
max_monsters = find_max_monsters(N, A, B)

# Print the maximum total number of monsters the heroes can defeat
print(max_monsters)