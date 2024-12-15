# Read number of people
N = int(input())

# Read coordinates of people
coordinates = list(map(int, input().split()))

# Initialize minimum total stamina to infinity
min_stamina = float('inf')

# Iterate over all possible meeting coordinates
for P in range(1, 101):
    # Calculate total stamina for this meeting coordinate
    total_stamina = sum((X - P)**2 for X in coordinates)
    
    # Update minimum total stamina if necessary
    min_stamina = min(min_stamina, total_stamina)

# Print minimum total stamina
print(min_stamina)