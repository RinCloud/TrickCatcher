# Implementation of the skewer meal problem

# Function to calculate the maximum total number of ingredients
def calculate_max_ingredients(N, skewer_lengths):
    # Sorting the skewer_lengths in ascending order
    skewer_lengths.sort()
    
    # Summing the lengths of the shorter skewers
    max_ingredients = sum(skewer_lengths[::2])
    
    return max_ingredients

# Reading the input values
N = int(input())
skewer_lengths = list(map(int, input().split()))

# Calculating the maximum total number of ingredients
max_ingredients = calculate_max_ingredients(N, skewer_lengths)

# Printing the result
print(max_ingredients)