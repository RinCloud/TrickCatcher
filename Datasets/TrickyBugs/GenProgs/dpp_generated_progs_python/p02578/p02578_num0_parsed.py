n = int(input())
a = list(map(int, input().split()))

stools = [0] * n

for i in range(1, n):
    if a[i] > a[i-1]:
        stools[i] = stools[i-1] + (a[i] - a[i-1])

print(sum(stools))