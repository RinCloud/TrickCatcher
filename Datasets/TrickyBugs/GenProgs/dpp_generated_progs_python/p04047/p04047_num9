import sys

def max_total_ingredients(N, L):
    # Sort the skewer lengths in ascending order
    L.sort()
    
    # Calculate the maximum total number of ingredients
    total_ingredients = sum(L[::2])
    
    return total_ingredients

# Read the input from standard input
N = int(sys.stdin.readline().rstrip())
L = list(map(int, sys.stdin.readline().rstrip().split()))

# Calculate and print the maximum total number of ingredients
print(max_total_ingredients(N, L))