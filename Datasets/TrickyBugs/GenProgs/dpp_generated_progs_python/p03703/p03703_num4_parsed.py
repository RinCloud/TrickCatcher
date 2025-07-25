N, K = map(int, input().split())
a = [int(input()) for _ in range(N)]

count = 0
sums = [0] * (N + 1)
sums[1] = a[0]
for i in range(1, N + 1):
    sums[i] = sums[i - 1] + a[i - 1]

for i in range(N):
    for j in range(i + 1, N + 1):
        mean = (sums[j] - sums[i]) / (j - i)
        if mean >= K:
            count += 1

print(count)
