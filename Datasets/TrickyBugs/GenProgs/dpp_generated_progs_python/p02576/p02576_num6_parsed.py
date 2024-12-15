N, X, T = map(int, input().split())

if N % X == 0:
    minutes = (N // X) * T
else:
    minutes = (N // X + 1) * T

print(minutes)