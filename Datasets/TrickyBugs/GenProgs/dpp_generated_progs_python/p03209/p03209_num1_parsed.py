N, X = map(int, input().split())

def count_patties(level, layers):
    if level == 0:
        return 0
    elif layers <= 1 + 2 * count_patties(level - 1, (2 ** level) - 1):
        return count_patties(level - 1, layers - 1)
    else:
        return (2 ** level) - 1 + count_patties(level - 1, layers - 1 - (1 + 2 * count_patties(level - 1, (2 ** level) - 1)))

result = count_patties(N, X)
print(result)