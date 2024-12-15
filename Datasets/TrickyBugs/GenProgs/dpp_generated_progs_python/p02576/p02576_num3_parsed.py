N, X, T = map(int, input().split())

minutes = ((N + X - 1) // X) * T
print(minutes)