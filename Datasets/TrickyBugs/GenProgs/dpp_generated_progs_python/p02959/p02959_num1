n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

total = 0
for i in range(n+1):
    if a[i] <= b[i]:
        total += a[i]
    else:
        total += b[i]
        if a[i] - b[i] <= b[i+1]:
            total += a[i] - b[i]
        else:
            total += b[i+1]
print(total)