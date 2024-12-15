import sys

N, K = map(int, sys.stdin.readline().split())
A = list(map(int, sys.stdin.readline().split()))

A.sort()

max_product = 1
if A[-1] < 0 and K % 2 == 1:
    for i in range(K):
        max_product *= A[-(i+1)]
        max_product %= (10**9 + 7)
else:
    i, j = 0, N-1
    if K % 2 == 1:
        max_product = A[-1]
        j -= 1

    for _ in range(K // 2):
        product1 = A[i] * A[i+1]
        product2 = A[j] * A[j-1]
        if product1 > product2:
            max_product *= product1
            i += 2
        else:
            max_product *= product2
            j -= 2
        max_product %= (10**9 + 7)

print(max_product)