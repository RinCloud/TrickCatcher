def find_different(a, b, c):
    if a == b:
        return c
    elif a == c:
        return b
    else:
        return a

# Read input from standard input
a, b, c = map(int, input().split())

# Find the different number
result = find_different(a, b, c)
print(result)
