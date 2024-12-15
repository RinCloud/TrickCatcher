MOD = 10**9+7

def count_possible_sums(N, K):
    if K == 1:
        return N+1
    elif K == N+1:
        return 1
    else:
        ans = 1
        ncr = 1
        for i in range(1, K):
            ncr *= (N+1-i)
            ncr //= i
            ans += ncr
            ans %= MOD
        return ans

N, K = map(int, input().split())
print(count_possible_sums(N, K))