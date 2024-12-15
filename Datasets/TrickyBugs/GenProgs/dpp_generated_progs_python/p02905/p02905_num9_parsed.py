import math

MOD = 998244353

def lcm(a, b):
    return a * b // math.gcd(a, b)

def solve(N, A):
    ans = 0
    for i in range(N-1):
        for j in range(i+1, N):
            ans += lcm(A[i], A[j])
            ans %= MOD
    return ans

# Read input from stdin
N = int(input())
A = list(map(int, input().split()))

# Solve the problem
result = solve(N, A)

# Print the result
print(result)