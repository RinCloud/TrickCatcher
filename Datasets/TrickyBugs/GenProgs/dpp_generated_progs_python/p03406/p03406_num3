"""
import itertools

def count_champion_permutations(N, M, A):
    MOD = 10**9 + 7

    # Generate all possible permutations of players
    players = list(range(1, 2**N + 1))
    permutations = itertools.permutations(players)

    count = 0
    for perm in permutations:
        # Determine the champion for this permutation
        champion = perm[0]
        for i in range(1, 2**N):
            if champion in A:
                break
            if perm[i] not in A:
                champion = perm[i]
        
        # Check if Player 1 is the champion
        if champion == 1:
            count += 1
    
    return count % MOD

# Read input
N, M = map(int, input().split())
A = list(map(int, input().split()))

# Count the number of champion permutations
answer = count_champion_permutations(N, M, A)

# Print the answer
print(answer)
"""