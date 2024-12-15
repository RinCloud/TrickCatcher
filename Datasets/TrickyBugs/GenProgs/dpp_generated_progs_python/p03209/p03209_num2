# Program:

def burger_patties(n, x):
    if n == 0:
        return 0
    elif x == 1:
        return 0
    elif x <= 1 + (2 ** (n-1)):
        return burger_patties(n-1, x-1)
    else:
        return (2 ** (n-1)) + 1 + burger_patties(n-1, x - (1 + (2 ** (n-1))))

n, x = map(int, input().split())
print(burger_patties(n, x))