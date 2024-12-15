# Read input values
N = int(input())
L = list(map(int, input().split()))

# Sort the skewer lengths
L.sort()

# Calculate the maximum total number of ingredients
total_ingredients = sum(L[::2])

# Print the result
print(total_ingredients)