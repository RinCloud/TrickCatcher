from math import gcd

MOD = 998244353

N = int(input())
A = list(map(int, input().split()))

lcm_sum = 0
for i in range(N):
    for j in range(i+1, N):
        lcm = A[i] * A[j] // gcd(A[i], A[j])
        lcm_sum = (lcm_sum + lcm) % MOD

print(lcm_sum)