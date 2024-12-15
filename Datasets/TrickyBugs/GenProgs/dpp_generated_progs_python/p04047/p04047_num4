from typing import List

def maximum_ingredients(N: int, L: List[int]) -> int:
    L.sort()  # Sort the list of skewer lengths in ascending order
    ingredients = 0
    
    # Loop through the sorted list and sum the maximum possible number of ingredients for each serving
    for i in range(N):
        ingredients += min(L[2 * i], L[2 * i + 1])  # Add the length of the shorter skewer as ingredients
    
    return ingredients

# Read the input
N = int(input())
L = list(map(int, input().split()))

# Call the function and print the result
print(maximum_ingredients(N, L))