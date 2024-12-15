# Program

N, K = map(int, input().split())
V = list(map(int, input().split()))

max_sum = 0

for i in range(min(N, K) + 1):
    for j in range(min(N, K) - i + 1):
        jewels = V[:i] + V[N - j:]
        jewels.sort()
        total_sum = sum(jewels)
        for k in range(min(len(jewels), K - i - j)):
            if jewels[k] < 0:
                total_sum -= jewels[k]
        max_sum = max(max_sum, total_sum)

print(max_sum)