def find_max_other_elements(N, sequence):
    for i in range(N):
        max_val = max(sequence[:i] + sequence[i+1:])
        print(max_val)

# reading input
N = int(input())
sequence = []
for _ in range(N):
    sequence.append(int(input()))

# calling the function
find_max_other_elements(N, sequence)