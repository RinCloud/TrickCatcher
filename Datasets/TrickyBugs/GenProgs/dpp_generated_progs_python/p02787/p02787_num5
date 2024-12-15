# Program

def minimum_magic_points(H, N, spells):
    # Initialize an array to store the minimum magic points for each health value
    dp = [float('inf')] * (H+1)
    
    # Base case: Zero magic points required for H = 0
    dp[0] = 0
    
    # Iterate over each spell
    for i in range(N):
        spell_health, spell_magic_points = spells[i]
        
        # Iterate over each health value
        for j in range(spell_health, H+1):
            dp[j] = min(dp[j], dp[j - spell_health] + spell_magic_points)
    
    # Return the minimum magic points required for H
    return dp[H]

# Read the input
H, N = map(int, input().split())
spells = []
for _ in range(N):
    spell_health, spell_magic_points = map(int, input().split())
    spells.append((spell_health, spell_magic_points))

# Calculate and print the minimum magic points required
print(minimum_magic_points(H, N, spells))