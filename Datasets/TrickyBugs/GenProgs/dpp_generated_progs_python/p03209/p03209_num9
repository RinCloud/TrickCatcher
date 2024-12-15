# Program:

def num_of_patties(N, X):
    if N == 0:
        return 0
    elif X <= 1 + num_of_layers(N - 1):
        return num_of_patties(N - 1, X - 1)
    else:
        return num_of_patties(N - 1, X - 1 - (1 + num_of_layers(N - 1))) + 1 + num_of_patties(N - 1, X - 1 - (1 + num_of_layers(N - 1)))

def num_of_layers(N):
    if N == 0:
        return 1
    else:
        return 2 * num_of_layers(N - 1) + 3

N, X = map(int, input().split())
print(num_of_patties(N, X))