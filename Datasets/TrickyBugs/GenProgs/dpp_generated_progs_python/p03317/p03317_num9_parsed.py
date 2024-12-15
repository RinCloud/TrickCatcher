n, k = map(int, input().split())
a = list(map(int, input().split()))

min_num = min(a)
min_index = a.index(min_num)

ans = (n - 1) // (k - 1)
if (n - 1) % (k - 1) != 0:
    ans += 1

print(ans)