# Algorithm:
1. Calculate the total number of turns required to finish the game, `total_turns` = N + M + K.
2. Calculate the number of patterns that lead to Alice's victory, `alice_victory_patterns` = 3^(total_turns-1).
3. Print `alice_victory_patterns` modulo 1,000,000,007.

# Program:

def calculate_patterns(N, M, K):
    total_turns = N + M + K
    alice_victory_patterns = pow(3, total_turns-1, 1000000007)
    return alice_victory_patterns

# Input
N, M, K = map(int, input().split())

# Calculate patterns
result = calculate_patterns(N, M, K)

# Output
print(result)