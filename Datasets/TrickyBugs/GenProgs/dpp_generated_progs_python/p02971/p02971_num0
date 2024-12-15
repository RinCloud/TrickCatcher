def find_max_other_elements(N, sequence):
    for i in range(N):
        max_value = max(sequence[:i] + sequence[i+1:])
        print(max_value)

N = int(input())
sequence = []
for _ in range(N):
    sequence.append(int(input()))

find_max_other_elements(N, sequence)