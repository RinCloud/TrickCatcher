# Read the input values
N = int(input())
X = list(map(int, input().split()))

# Find the average of the people's coordinates
avg = sum(X) // N

# Calculate the minimum total stamina
total_stamina = sum((x - avg)**2 for x in X)

# Print the result
print(total_stamina)