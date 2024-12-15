R = lambda: map(int, input().split())
n, k = R()
v = list(R())
a = sorted((x, i) for i, x in enumerate(v) if x < 0)
ans = max(sum(v[:i - j] + v[n - j:]) -
          sum([x for x, m in a if m < i - j or m >= n - j][:k - i])
          for i in range(1, min(n, k) + 1) for j in range(i))
print(ans)