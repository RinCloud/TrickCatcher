N, X, T = map(int, input().split())

print((N // X) * T + (T if N % X != 0 else 0))