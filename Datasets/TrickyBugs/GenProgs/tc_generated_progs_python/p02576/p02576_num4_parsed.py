N, X, T = map(int, input().split())

print((N // X + (N % X > 0)) * T)