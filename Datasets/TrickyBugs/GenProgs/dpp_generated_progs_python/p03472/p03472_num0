# Taking input of number of katanas and total damage required
N, H = map(int, input().split())

# Taking input of the damage points for each wield and throw attack
attacks = []
for _ in range(N):
    a, b = map(int, input().split())
    attacks.append((a, b))

# Sort the attacks in increasing order of damage points for throw attacks
attacks.sort(key=lambda x: x[1])

# Initial variables to store the minimum number of attacks required
min_attacks = float('inf')
throw_damage = 0

# Iterate over each attack in sorted order and calculate the minimum attacks required for each throw
# Also calculate the total damage for wield attacks
for attack in attacks:
    a, b = attack
    if b > H:
        min_attacks = min(min_attacks, 1)
    else:
        throw_damage += b
        min_attacks = min(min_attacks, (throw_damage + H - 1) // throw_damage)

# Calculate the minimum attacks required for wield attacks
if throw_damage >= H:
    min_attacks = min(min_attacks, 0)
else:
    min_attacks = min(min_attacks, (H - throw_damage + attacks[0][0] - 1) // attacks[0][0])

# Print the minimum attacks required
print(min_attacks)