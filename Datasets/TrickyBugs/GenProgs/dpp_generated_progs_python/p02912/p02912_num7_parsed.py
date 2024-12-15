n, m = map(int, input().split())
a = list(map(int, input().split()))

a.sort(reverse=True)

tickets_used = 0

for i in range(n):
    if tickets_used >= m:
        break
    x = a[i] // 2
    y = 1
    while x % 2 == 0 and y <= m - tickets_used:
        x //= 2
        y *= 2
    a[i] = x
    tickets_used += y

total_cost = sum(a)
print(total_cost)