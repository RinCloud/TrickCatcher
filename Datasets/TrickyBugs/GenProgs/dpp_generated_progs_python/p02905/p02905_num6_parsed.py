from math import gcd

N = int(input())
A = list(map(int, input().split()))

mod = 998244353
result = 0

for i in range(N - 1):
    for j in range(i + 1, N):
        lcm = A[i] * A[j] // gcd(A[i], A[j])
        result = (result + lcm) % mod

print(result)