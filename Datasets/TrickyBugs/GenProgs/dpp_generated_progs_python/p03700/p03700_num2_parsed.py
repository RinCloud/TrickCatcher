# Program

def calculate_explosions(N, A, B, monster_health):
    explosions = 0

    for i in range(N):
        monster_health[i] -= A
        if monster_health[i] <= 0:
            # The monster is vanquished
            continue

        explosions += monster_health[i] // (A - B)
        if monster_health[i] % (A - B) != 0:
            # Incomplete explosion, one more required
            explosions += 1

    return explosions

# Get input
N, A, B = map(int, input().split())
monster_health = [int(input()) for _ in range(N)]

# Calculate and print the minimum number of explosions
print(calculate_explosions(N, A, B, monster_health))