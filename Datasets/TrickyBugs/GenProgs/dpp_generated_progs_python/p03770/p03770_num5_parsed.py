import itertools

N, X, Y = map(int, input().split())
balls = [list(map(int, input().split())) for _ in range(N)]

# Find all possible color sequences
color_sequences = set()
for seq in itertools.permutations(range(1, N + 1)):
    color_sequences.add(tuple(balls[i - 1][0] for i in seq))

# Initialize a dictionary to store the count of each color sequence
count = dict()
for seq in color_sequences:
    count[seq] = 1

# Process each operation
for i in range(N):
    for j in range(i + 1, N):
        if balls[i][0] == balls[j][0]:
            if balls[i][1] + balls[j][1] <= X:
                # Swap positions of balls with the same color
                new_seq = list(count.keys())
                for k, seq in enumerate(new_seq):
                    new_seq[k] = list(seq)
                    new_seq[k][i], new_seq[k][j] = new_seq[k][j], new_seq[k][i]
                    new_seq[k] = tuple(new_seq[k])
                for seq in new_seq:
                    count[seq] = (count[seq] + count[list(seq)]) % (10**9 + 7)
        else:
            if balls[i][1] + balls[j][1] <= Y:
                # Swap positions of balls with different colors
                new_seq = list(count.keys())
                for k, seq in enumerate(new_seq):
                    new_seq[k] = list(seq)
                    new_seq[k][i], new_seq[k][j] = new_seq[k][j], new_seq[k][i]
                    new_seq[k] = tuple(new_seq[k])
                for seq in new_seq:
                    count[seq] = (count[seq] + count[list(seq)]) % (10**9 + 7)

# Calculate the total count
total_count = sum(count.values()) % (10**9 + 7)

print(total_count)