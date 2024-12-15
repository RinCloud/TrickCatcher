# Program

def num_patties(n, x):
    if n == 0:
        return 0
    elif x <= 1 + num_layers(n - 1):
        return num_patties(n - 1, x - 1)
    else:
        return 1 + num_layers(n - 1) + num_patties(n - 1, x - 2 - num_layers(n - 1))

def num_layers(n):
    if n == 0:
        return 1
    else:
        return 2 * num_layers(n - 1) + 3

n, x = map(int, input().split())
print(num_patties(n, x))