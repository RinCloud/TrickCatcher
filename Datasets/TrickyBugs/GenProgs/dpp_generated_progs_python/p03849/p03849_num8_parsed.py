import sys

N = int(sys.stdin.readline().strip())

MOD = 10**9 + 7

def count_pairs(N):
    if N == 0:
        return 1
    elif N == 1:
        return 2
    else:
        ans = 4
        for i in range(2, N+1):
            ans = (ans + pow(2, i-2, MOD)) % MOD
        return ans

num_pairs = count_pairs(N)
print(num_pairs)
