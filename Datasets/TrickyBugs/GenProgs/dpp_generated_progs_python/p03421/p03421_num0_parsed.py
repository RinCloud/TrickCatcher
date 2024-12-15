from sys import stdin, stdout

# Read input
N, A, B = map(int, stdin.readline().split())

# Check if possible to construct sequence
if A + B - 1 > N or A * B < N:
    stdout.write("-1\n")
else:
    # Construct increasing subsequence
    inc_seq = list(range(B, 0, -1))
    remaining = N - B
    for i in range(remaining):
        inc_seq.append(i + B + 1)

    # Construct decreasing subsequence
    dec_seq = list(range(1, A - B + 1))
    remaining -= A - B
    for i in range(remaining):
        dec_seq.append(B + A - i)

    # Merge the two subsequences
    sequence = inc_seq + dec_seq

    # Print the sequence
    stdout.write(" ".join(map(str, sequence)) + "\n")