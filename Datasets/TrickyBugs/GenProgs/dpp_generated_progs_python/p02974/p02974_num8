# Program to find the number of permutations of {1, 2, ..., n} of oddness k mod 10^9+7

def factorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial(n-1)

def count_permutations(n, k):
    if k > n**2:
        return 0

    mod = 10**9+7
    result = (factorial(n) // 2**n) % mod

    for i in range(1, n+1):
        for j in range(1, k+1):
            if i+j <= n:
                result -= (factorial(n-i) // 2**(n-i)) * count_permutations(n-i, k-j)

    return result

n, k = map(int, input().split())
print(count_permutations(n, k))