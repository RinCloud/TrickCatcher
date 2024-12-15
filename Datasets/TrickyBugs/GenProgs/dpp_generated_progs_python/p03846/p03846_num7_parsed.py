import sys

MOD = 10**9 + 7

def possible_orders(n, a):
    cnt = [0] * (n + 1)
    for i in range(1, n + 1):
        cnt[max(i - a[i - 1], 1)] += 1
        cnt[min(i + a[i - 1] + 1, n + 1)] -= 1
    
    for i in range(1, n + 1):
        cnt[i] += cnt[i - 1]
        if cnt[i] > i:
            return 0
    
    result = 1
    for i in range(1, n + 1):
        result = (result * (i - cnt[i - 1])) % MOD
    
    return result

n = int(sys.stdin.readline())
a = list(map(int, sys.stdin.readline().split()))

print(possible_orders(n, a))