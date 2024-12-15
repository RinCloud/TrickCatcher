n, x = map(int, input().split())

def count_patties(n, x):
    if x == 0:
        return 0
    elif n == 0:
        return 1
    else:
        layers = 2 ** (n + 1) - 3
        if x <= 1 + layers:
            return count_patties(n-1, x-1)
        else:
            return (2 ** n) + count_patties(n-1, x-2-layers)

print(count_patties(n, x))