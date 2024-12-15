def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n-1)


def count_permutations(N, M, A):
    mod = 10**9 + 7
    ans = factorial(2**N)
    for i in range(M):
        ans = ans * pow(2**(A[i]-1), mod - 2, mod) % mod
    return ans


N, M = map(int, input().split())
A = list(map(int, input().split()))

print(count_permutations(N, M, A))