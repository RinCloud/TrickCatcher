n, m = map(int, input().split())
a_list = []
d = [-float('inf') for _ in range(n)]
d[0] = 0
for _ in range(m):
    a, b, c = map(int, input().split())
    a -= 1
    b -= 1
    a_list.append([a, b, c])
    d[b] = max(d[a] + c, d[b])
temp = 0
for _ in range(n):
    for i in range(m):
        a, b, c = a_list[i]
        if d[b] < d[a] + c:
            d[b] = d[a] + c
            if _ == n-1:
                temp = 1
if temp == 1:
    print("inf")
else:
    print(d[-1])