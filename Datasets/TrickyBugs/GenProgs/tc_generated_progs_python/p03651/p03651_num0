from fractions import gcd

def possible_reach_state(n, k, a):
    c = max(a)
    p = a[0]
    for i in range(1, n):
        p = gcd(p, a[i])
    return "POSSIBLE" if k % p == 0 and k <= c else "IMPOSSIBLE"

n, k = map(int, input().split())
a = list(map(int, input().split()))
print(possible_reach_state(n, k, a))