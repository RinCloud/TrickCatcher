import math

def count_patties(N, X):
    if N == 0:
        return X
    elif X <= 1:
        return 0
    else:
        total_layers = math.pow(2, N + 1) - 3
        if X >= total_layers:
            return int(math.pow(2, N))
        else:
            mid_layer = total_layers // 2 + 1
            if X == mid_layer:
                return int(math.pow(2, N - 1)) + 1
            elif X < mid_layer:
                return count_patties(N - 1, X - 1)
            else:
                return int(math.pow(2, N - 1)) + 1 + count_patties(N - 1, X - mid_layer)

# Read input
N, X = map(int, input().split())

# Calculate and print the number of patties
print(count_patties(N, X))