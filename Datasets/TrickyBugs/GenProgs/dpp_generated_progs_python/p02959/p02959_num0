# Reading input values
N = int(input())
towns = list(map(int, input().split()))
heroes = list(map(int, input().split()))

# Maximum total number of monsters the heroes can defeat
total_defeated_monsters = 0

# Loop through each town and calculate the number of monsters heroes can defeat
for i in range(N):
    defeated_monsters = min(towns[i], heroes[i])
    total_defeated_monsters += defeated_monsters
    remaining_monsters = max(towns[i] - defeated_monsters, 0)
    towns[i+1] = max(towns[i+1] - remaining_monsters, 0)

# Print the maximum total number of monsters the heroes can defeat
print(total_defeated_monsters)