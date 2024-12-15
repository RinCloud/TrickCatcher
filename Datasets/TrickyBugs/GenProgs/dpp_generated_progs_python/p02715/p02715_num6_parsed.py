N, K = map(int, input().split())

mod = 10**9+7

def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

ans = 0
for i in range(1, K+1):
    ans = (ans + pow(i, N, mod)) % mod

print(ans)