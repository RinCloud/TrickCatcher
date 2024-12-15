N = int(input())
segments = []
for _ in range(N):
    L, R = map(int, input().split())
    segments.append((L, R))

segments.sort(key=lambda x: x[0])

K = 0
for i in range(N):
    left = max(segments[i][0], -K)
    right = max(segments[i][1], -K)
    K += right - left

print(K)