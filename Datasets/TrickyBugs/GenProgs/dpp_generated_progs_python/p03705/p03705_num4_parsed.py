# Program

n, a, b = map(int, input().split())

if a == b:
    print(1)
else:
    print(b * (n - 2) + a - b + 1)