import math

def count_sequences(N, K):
    if N == 1:
        return K
    elif N == 2:
        return K * K
    else:
        return K * (K - 1) ** (N // 2 - 1) * K ** (N % 2)

N, K = map(int, input().split())
result = count_sequences(N, K)
print(result % int(1e9 + 7))