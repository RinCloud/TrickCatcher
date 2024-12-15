# Reading inputs
N, X = map(int, input().split())

# Function to calculate the number of patties in a level-L burger
def count_patties(L):
    if L == 0:
        return 1
    else:
        return 2 * count_patties(L-1) + 1

# Function to calculate the number of patties in the bottom-most X layers of a level-N burger
def count_patties_bottom(N, X):
    if N == 0:
        return 0
    elif X <= 1 + count_patties(N-1):
        return count_patties_bottom(N-1, X-1)
    else:
        return 1 + count_patties(N-1) + count_patties_bottom(N-1, X-2-count_patties(N-1))

# Printing the result
print(count_patties_bottom(N, X))