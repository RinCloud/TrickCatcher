# Reading inputs
N = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

# Initializing variables
max_monsters = 0

# Looping through each town
for i in range(N):
    # Calculating the maximum monsters the heroes can defeat in this town
    defeated_monsters = min(A[i], B[i])
    
    # Updating the maximum total number of monsters defeated so far
    max_monsters += defeated_monsters
    
    # Updating the number of remaining monsters in the current town and the next town
    A[i] -= defeated_monsters
    A[i+1] -= min(A[i+1], B[i] - defeated_monsters)

# Printing the maximum total number of monsters defeated
print(max_monsters)