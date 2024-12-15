import sys

def get_min_value(N, K):
    min_value = sys.maxsize
    for i in range(pow(2, N)):
        value = 1
        for j in range(N):
            if (i >> (N - 1 - j)) & 1:
                value *= 2
            else:
                value += K
        if value < min_value:
            min_value = value
    return min_value

N = int(input())
K = int(input())
print(get_min_value(N, K))