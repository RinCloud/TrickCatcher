R = lambda: list(map(int, input().split()))
n, k = R()
v = R()
a = sorted((x, i) for i, x in enumerate(v) if x < 0)
ans = 0
for i in range(1, min(n, k) + 1):
    for j in range(i+1):
        jewels = v[:i-j] + v[n-j:]
        neg_jewels = [x for x, m in a if m < i-j or m >= n-j]
        negative_sum = sum(neg_jewels[:k-i])
        total_sum = sum(jewels) - negative_sum
        ans = max(ans, total_sum)
print(ans)