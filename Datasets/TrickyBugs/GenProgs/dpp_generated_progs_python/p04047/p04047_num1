def max_ingredients(N, skewers):
    # Sort the skewers in ascending order
    skewers.sort()
    
    # Calculate the maximum total number of ingredients
    max_ingredients = sum(skewers[N::2])
    
    return max_ingredients

# Read the input values
N = int(input())
skewers = list(map(int, input().split()))

# Calculate and print the maximum total number of ingredients
print(max_ingredients(N, skewers))