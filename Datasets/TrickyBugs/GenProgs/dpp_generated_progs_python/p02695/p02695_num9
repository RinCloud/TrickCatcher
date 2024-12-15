# Taking inputs
N, M, Q = map(int, input().split())
queries = [list(map(int, input().split())) for _ in range(Q)]

# Function to calculate score of given sequence
def calculate_score(sequence):
    score = 0
    for a, b, c, d in queries:
        if sequence[b-1] - sequence[a-1] == c:
            score += d
    return score

# Function to generate all possible sequences
def generate_sequences(cur_sequence, depth):
    if depth == N:
        return [cur_sequence]
    sequences = []
    for i in range(cur_sequence[-1], M+1):
        sequences.extend(generate_sequences(cur_sequence + [i], depth+1))
    return sequences

# Initializing maximum score as 0
max_score = 0

# Generating all possible sequences and calculating their scores
sequences = generate_sequences([1], 1)
for sequence in sequences:
    score = calculate_score(sequence)
    max_score = max(max_score, score)

# Printing the maximum score
print(max_score)