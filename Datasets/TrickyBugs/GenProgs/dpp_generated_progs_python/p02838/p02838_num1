def xor_sum(N, A):
    MOD = 10**9 + 7
    res = 0
    for i in range(N-1):
        for j in range(i+1, N):
            res = (res + (A[i] ^ A[j])) % MOD
    return res


N = int(input())
A = list(map(int, input().split()))

print(xor_sum(N, A))