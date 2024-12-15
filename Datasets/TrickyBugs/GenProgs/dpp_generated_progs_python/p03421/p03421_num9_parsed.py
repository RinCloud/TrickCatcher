import sys

# Read input from Standard Input
input = sys.stdin.readline().rstrip().split()

# Parse integer values
N = int(input[0])
A = int(input[1])
B = int(input[2])

# Check if it is possible to construct the sequence
if A + B > N + 1 or A * B < N:
    print(-1)
else:
    # If it is possible, construct the sequence
    sequence = []

    # Find the length of the longest increasing subsequence
    for i in range(A):
        sequence.append(i + 1)

    # Find the length of the longest decreasing subsequence
    for i in range(B - 1, -1, -1):
        sequence.append(A + i + 1)

    # Fill the remaining elements
    remaining = N - A - B + 1
    if remaining > 0:
        start = A + B + 1
        step = remaining // (A * B)
        remaining %= (A * B)

        for i in range(B):
            for j in range(A):
                if i * A + j < remaining:
                    sequence.append(start + (i * A + j) * step + 1)
                else:
                    sequence.append(start + remaining * step + (i * A + j - remaining) // (A * B + 1) + 1)

    # Print the sequence
    print(' '.join(map(str, sequence)))