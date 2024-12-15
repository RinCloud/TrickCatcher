from itertools import combinations
from functools import reduce
import sys

N, K = map(int, input().split())
A = list(map(int, input().split()))

max_product = 0
for combination in combinations(A, K):
    product = reduce(lambda x, y: x * y, combination)
    if product > max_product:
        max_product = product

print(max_product % (10**9 + 7))