def min_attacks(N, H, katana):
    max_damage = max(katana, key=lambda x: x[1])
    if max_damage[1] >= H:
        return 1
    sorted_katana = sorted(katana, key=lambda x: x[0] - x[1], reverse=True)
    total_attacks = 0
    total_damage = 0
    
    for i in range(N):
        if total_damage >= H:
            break
        if sorted_katana[i][0] < sorted_katana[i][1]:
            break
        total_damage += sorted_katana[i][0]
        total_attacks += 1
    
    if total_damage < H:
        attacks_left = (H - total_damage + max_damage[0] - 1) // max_damage[0]
        total_attacks += attacks_left
    
    return total_attacks


# Read input
N, H = map(int, input().split())
katana = [tuple(map(int, input().split())) for _ in range(N)]

# Find minimum attacks
min_attacks = min_attacks(N, H, katana)

# Print result
print(min_attacks)