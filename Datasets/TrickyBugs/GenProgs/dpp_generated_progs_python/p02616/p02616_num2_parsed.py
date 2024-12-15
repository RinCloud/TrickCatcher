def max_product(N, K, A):
    A.sort()
    
    max_product = 1
    if A[-1] <= 0:
        for i in range(K):
            max_product = (max_product * A[N-1-i]) % (10**9 + 7)
    else:
        i = 0
        while K % 2 != 0:
            max_product = (max_product * A[i]) % (10**9 + 7)
            i += 1
            K -= 1
        j = N - 1
        while j > i:
            product_1 = A[i] * A[i+1]
            product_2 = A[j] * A[j-1]
            if product_1 > product_2:
                max_product = (max_product * product_1) % (10**9 + 7)
                i += 2
            else:
                max_product = (max_product * product_2) % (10**9 + 7)
                j -= 2
    
    return max_product

# Read input parameters
N, K = map(int, input().split())
A = list(map(int, input().split()))

# Calculate and print the maximum product modulo (10^9+7)
print(max_product(N, K, A))