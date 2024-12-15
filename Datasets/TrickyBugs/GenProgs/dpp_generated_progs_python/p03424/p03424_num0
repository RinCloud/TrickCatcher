from collections import Counter

def check_arare_colors(N, S):
    # Count the number of occurrences of each color
    color_count = Counter(S)
    
    # Check if the bag contains arare in three colors or four colors
    if len(color_count) == 3:
        return "Three"
    elif len(color_count) == 4:
        return "Four"

# Read input values
N = int(input())
S = input().split()

# Call the function and print the result
print(check_arare_colors(N, S))