def minimum_attacks(N, H, katanas):
    katanas.sort(reverse=True)
    total_damage = 0
    i = 0

    while i < N and total_damage < H:
        total_damage += katanas[i][0]
        i += 1

    if total_damage < H:
        remaining_damage = H - total_damage
        throws_needed = (remaining_damage + katanas[i-1][1] - 1) // katanas[i-1][1]
        total_damage += throws_needed * katanas[i-1][1]

    return i + (total_damage + katanas[i-1][1] - 1) // katanas[i-1][1]

# Read input values
N, H = map(int, input().split())
katanas = []

for _ in range(N):
    a, b = map(int, input().split())
    katanas.append((a, b))

# Print the minimum number of attacks required to vanish the monster
print(minimum_attacks(N, H, katanas))
