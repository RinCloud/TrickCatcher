# Read the value of N from standard input
N = int(input())

# Read the lengths of the skewers from standard input and store them in a list
skewers = list(map(int, input().split()))

# Sort the skewers in ascending order
skewers.sort()

# Sum the lengths of the first N pairs of skewers
total_ingredients = sum(skewers[:2 * N:2])

# Print the maximum total number of ingredients
print(total_ingredients)
