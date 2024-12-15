MOD = 10**9 + 7

def xor_sum(N, A):
    total_sum = 0
    for i in range(N-1):
        for j in range(i+1, N):
            total_sum += A[i] ^ A[j]
            total_sum %= MOD
    return total_sum

N = int(input())
A = list(map(int, input().split()))

result = xor_sum(N, A)
print(result)