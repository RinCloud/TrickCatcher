"""
def max_product_modulo(N, K, A):
    A.sort()
    max_product = 1
    if A[-1] < 0:
        for i in range(K):
            max_product *= A[N-i-1]
            max_product %= (10**9+7)
        return max_product
    else:
        i = 0
        j = N-1
        while K > 0:
            if K > 1:
                if A[i] * A[i+1] >= A[j] * A[j-1]:
                    max_product *= A[i] * A[i+1]
                    max_product %= (10**9+7)
                    i += 2
                else:
                    max_product *= A[j]
                    max_product %= (10**9+7)
                    j -= 1
                K -= 2
            else:
                max_product *= A[j]
                max_product %= (10**9+7)
                j -= 1
                K -= 1
        return max_product

N, K = map(int, input().split())
A = list(map(int, input().split()))

result = max_product_modulo(N, K, A)
print(result)
"""