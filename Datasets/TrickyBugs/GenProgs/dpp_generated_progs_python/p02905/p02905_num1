def lcm(a, b):
    return a * b // gcd(a, b)

def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)

def compute_lcm_sum(N, arr):
    mod = 998244353
    ans = 0
    for i in range(N-1):
        for j in range(i+1, N):
            ans += lcm(arr[i], arr[j])
            ans %= mod
    return ans

# Read input
N = int(input())
arr = list(map(int, input().split()))

# Compute and print the sum modulo 998244353
print(compute_lcm_sum(N, arr))