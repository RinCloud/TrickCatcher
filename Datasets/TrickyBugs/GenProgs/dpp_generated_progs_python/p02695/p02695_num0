def calculate_score(N, M, Q, quadruples):
    # Generate all possible sequences A
    sequences = generate_sequences(N, M)
    
    # Initialize maximum score
    max_score = 0
    
    # Iterate over each sequence A
    for sequence in sequences:
        # Calculate score for this sequence A
        score = calculate_score_for_sequence(sequence, quadruples)
        
        # Update maximum score if necessary
        if score > max_score:
            max_score = score
    
    # Return maximum score
    return max_score


def generate_sequences(N, M):
    # Generate all possible sequences A satisfying the given conditions
    sequences = []
    
    def generate_sequence(sequence, index):
        # Base case: If sequence has length N, add it to the list of sequences
        if len(sequence) == N:
            sequences.append(sequence)
            return
        
        # Recursive case: Generate next element in the sequence satisfying the conditions
        for num in range(1, M+1):
            if len(sequence) == 0 or num >= sequence[-1]:
                generate_sequence(sequence + [num], index+1)
    
    # Start generating sequences with an empty sequence and index 0
    generate_sequence([], 0)
    
    # Return the list of generated sequences
    return sequences


def calculate_score_for_sequence(sequence, quadruples):
    # Calculate the score for a given sequence A
    
    score = 0
    
    for quadruple in quadruples:
        a_i, b_i, c_i, d_i = quadruple
        if sequence[b_i-1] - sequence[a_i-1] == c_i:
            score += d_i
    
    return score


# Read input
N, M, Q = map(int, input().split())
quadruples = []
for _ in range(Q):
    quadruples.append(list(map(int, input().split())))

# Calculate and print maximum score
max_score = calculate_score(N, M, Q, quadruples)
print(max_score)