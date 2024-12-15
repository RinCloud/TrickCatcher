from collections import deque

N, K = map(int, input().split())
V = list(map(int, input().split()))

ans = 0

for i in range(min(N, K) + 1):
    for j in range(min(N, K) + 1 - i):
        jewels = V[:i] + V[N - j:]
        jewels.sort()

        curr_sum = sum(jewels)
        for k in range(min(K - i - j, len(jewels))):
            if jewels[k] < 0:
                curr_sum -= jewels[k]
            else:
                break

        ans = max(ans, curr_sum)
        
print(ans)