from collections import deque

N, K = map(int, input().split())
V = list(map(int, input().split()))

ans = 0

for A in range(K + 1):
    for B in range(K + 1 - A):
        left = deque(V[:A])
        right = deque(V[N - B:])
        jewels = left + right

        for _ in range(K - (A + B)):
            if not jewels:
                break
            if jewels[0] < 0:
                jewels.popleft()
            else:
                break

        ans = max(ans, sum(jewels))

print(ans)
