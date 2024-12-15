from math import ceil

N, A, B = map(int, input().split())
health = [int(input()) for _ in range(N)]

explosions = 0
for h in health:
    h -= A
    if h > 0:
        explosions += ceil(h / (A - B))

print(explosions)