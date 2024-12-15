import itertools

def num_permutations(N, M, A):
    # Generate all possible permutations of players
    players = list(range(1, 2**N + 1))
    permutations = list(itertools.permutations(players))
    
    count = 0
    for perm in permutations:
        winner = 1  # Start with Player 1 as the winner
        for i in range(1, 2**N):
            if perm[i] in A:
                winner = perm[i]
            elif perm[i] > winner:
                break
        else:
            count += 1
    
    return count % (10**9 + 7)

# Read input
N, M = map(int, input().split())
A = list(map(int, input().split()))

# Calculate and print the answer
print(num_permutations(N, M, A))