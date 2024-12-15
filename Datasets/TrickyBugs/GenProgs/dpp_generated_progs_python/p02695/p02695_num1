# First, we need to read the input from the user
N, M, Q = map(int, input().split())
quadruples = []
for _ in range(Q):
    a, b, c, d = map(int, input().split())
    quadruples.append((a, b, c, d))

# Now we need to find the maximum possible score of A

# We will use a recursive function to generate all possible sequences of A
def generate_sequences(sequence, n):
    if len(sequence) == N:
        # If the sequence has N elements, we calculate its score and return it
        score = 0
        for a, b, c, d in quadruples:
            if b <= len(sequence) and sequence[b-1] - sequence[a-1] == c:
                score += d
        return score
    else:
        # If the sequence has less than N elements, we try all possible values for the next element
        max_score = 0
        for i in range(sequence[-1] if sequence else 1, M+1):
            max_score = max(max_score, generate_sequences(sequence + [i], n+1))
        return max_score

# We start with an empty sequence and call the generate_sequences function
max_score = generate_sequences([], 1)
print(max_score)