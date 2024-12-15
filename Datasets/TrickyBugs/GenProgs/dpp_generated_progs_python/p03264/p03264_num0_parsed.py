import math

def count_pairs(K):
    pairs = math.ceil(K/2) * (K//2)
    return pairs

K = int(input())

pairs = count_pairs(K)
print(pairs)