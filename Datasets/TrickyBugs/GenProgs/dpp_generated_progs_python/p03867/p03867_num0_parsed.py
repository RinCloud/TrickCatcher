import math

def count_sequences(N, K):
    if N == 1:
        return K
    elif N % 2 == 0:
        return K * pow(K-1, N//2-1, pow(10, 9) + 7)
    else:
        return K * pow(K-1, N//2, pow(10, 9) + 7)

N, K = map(int, input().split())
result = count_sequences(N, K)
print(result)