MOD = 10**9 + 7

def possible_orders(N, A):
    counts = [0] * (N+1)
    for i in range(N):
        if A[i] >= N:
            return 0
        counts[A[i]] += 1

    if A[0] != 0 or counts[0] != 1:
        return 0

    ans = 1
    for i in range(1, N):
        ans = (ans * pow(counts[i-1], counts[i], MOD)) % MOD
    return ans

N = int(input())
A = list(map(int, input().split()))

print(possible_orders(N, A))