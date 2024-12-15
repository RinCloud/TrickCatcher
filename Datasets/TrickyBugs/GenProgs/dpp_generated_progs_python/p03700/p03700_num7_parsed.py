from math import ceil

# Read input values
N, A, B = map(int, input().split())
monsters = [int(input()) for _ in range(N)]

# Count the number of explosions needed to vanish all monsters
explosions = 0
for monster in monsters:
    if monster <= A:
        # No need for explosions, monster will vanish with one hit
        explosions += 1
    else:
        # Calculate the number of hits required to vanish the monster
        hits = ceil((monster - B) / (A - B))
        explosions += hits

# Print the minimum number of explosions needed
print(explosions)