from math import ceil

N, A, B = map(int, input().split())
h = [int(input()) for _ in range(N)]

total_explosions = 0
for monster_health in h:
    remaining_health = monster_health - B * ceil(total_explosions / 2)
    if remaining_health > 0:
        total_explosions += ceil(remaining_health / A)

print(total_explosions)