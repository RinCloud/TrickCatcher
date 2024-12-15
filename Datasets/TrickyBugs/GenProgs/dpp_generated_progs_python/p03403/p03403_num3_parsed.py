n = int(input())
a = list(map(int, input().split()))

total_cost = sum([abs(a[i] - a[i-1]) for i in range(1, n)])

for i in range(n):
    if i == 0:
        cancel_cost = abs(a[i+1])
    elif i == n-1:
        cancel_cost = abs(a[i-1])
    else:
        cancel_cost = abs(a[i+1] - a[i-1])

    print(total_cost - cancel_cost)