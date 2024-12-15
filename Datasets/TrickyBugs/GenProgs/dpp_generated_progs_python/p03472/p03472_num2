'''
N, H = map(int, input().split())

attacks = []
for _ in range(N):
    a, b = map(int, input().split())
    attacks.append((a, b))

attacks.sort(reverse=True, key=lambda x: (x[0], -x[1]))  # Sort by damage points in descending order

min_attacks = float('inf')  # Initialize with a very large number

total_damage = 0
thrown_katanas = 0
for i in range(N):
    damage_from_throw = attacks[i][1]
    total_damage += damage_from_throw
    thrown_katanas += 1
    
    if total_damage >= H:  # If the monster is already defeated, exit the loop
        min_attacks = min(min_attacks, thrown_katanas)
        break

    katanas_needed = (H - total_damage + attacks[i][0] - 1) // attacks[i][0]  # Calculate number of katanas needed for remaining damage
    min_attacks = min(min_attacks, thrown_katanas + katanas_needed)

print(min_attacks)
'''