# Getting the input values
K, N = map(int, input().split())

# Calculating the total number of sequences
X = K**N

# Calculating the lexicographically smallest sequence
sequence = [(i % K) + 1 for i in range((X + 1) // 2)]

# Printing the sequence
print(*sequence)