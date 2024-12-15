N = int(input())
monsters = list(map(int, input().split()))
heroes = list(map(int, input().split()))

total_monsters = 0
for i in range(N):
    defeated_monsters = min(monsters[i], heroes[i])
    total_monsters += defeated_monsters
    remaining_monsters = min(monsters[i+1], heroes[i] - defeated_monsters)
    total_monsters += remaining_monsters
    monsters[i+1] -= remaining_monsters

print(total_monsters)