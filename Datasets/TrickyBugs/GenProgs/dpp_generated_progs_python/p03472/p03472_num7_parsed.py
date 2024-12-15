def min_attacks(N, H, katanas):
    min_attacks = float('inf')
    
    # Iterate through all possible combinations of wielding/throwing katanas
    for mask in range(2**N):
        total_damage = 0
        total_attacks = 0
        
        # Check which katanas to wield and/or throw based on the binary mask
        for i in range(N):
            if mask & (1 << i):
                total_damage += katanas[i][0]  # Wield the katana
                total_attacks += 1
            else:
                total_damage += katanas[i][1]  # Throw the katana
                total_attacks += 1
        
        # Update the minimum number of attacks if the total damage is sufficient
        if total_damage >= H:
            min_attacks = min(min_attacks, total_attacks)
    
    return min_attacks

# Read the input
N, H = map(int, input().split())
katanas = []
for _ in range(N):
    a, b = map(int, input().split())
    katanas.append((a, b))

# Calculate and print the minimum number of attacks required
print(min_attacks(N, H, katanas))