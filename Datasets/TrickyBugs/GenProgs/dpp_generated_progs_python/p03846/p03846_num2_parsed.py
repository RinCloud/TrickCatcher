import sys

MOD = 10**9 + 7

def solve(N, A):
    cnt = [0] * (N + 1)
    res = 1

    if N % 2 == 0:
        cnt[0] = 1
    
    for i in range(N):
        if A[i] > i or A[i] < 0 or cnt[A[i]] != 0:
            return 0
        cnt[A[i]] = 1

    for i in range((N - 1) // 2 + 1):
        res = res * cnt.count(2 * i) % MOD

    return res

input = sys.stdin.readline
N = int(input())
A = list(map(int, input().split()))

print(solve(N, A))