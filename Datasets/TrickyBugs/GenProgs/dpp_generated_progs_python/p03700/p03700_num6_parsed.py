import math

N, A, B = map(int, input().split())
health = [int(input()) for _ in range(N)]

explosions = 0

for i in range(N):
    monsters_left = health[i] - explosions * B
    if monsters_left <= 0:
        continue
    additional_explosions = math.ceil(monsters_left / (A - B))
    explosions += additional_explosions

print(explosions)