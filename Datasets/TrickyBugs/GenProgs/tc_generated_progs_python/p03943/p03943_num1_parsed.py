a, b, c = map(int, input().split())
print('Yes' if (2 * max(a, b, c) - a - b - c) == 0 else 'No')