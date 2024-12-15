N = int(input())
segments = []
for _ in range(N):
    L, R = map(int, input().split())
    segments.append((L, R))

K = 0
for L, R in segments:
    K += R - L

print(K)