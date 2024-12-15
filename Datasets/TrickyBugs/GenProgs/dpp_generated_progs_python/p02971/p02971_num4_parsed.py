def find_max_values(sequence):
    n = sequence[0]
    for i in range(1, n+1):
        max_val = max(sequence[:i-1] + sequence[i:])
        print(max_val)

# Test case 1
sequence1 = [3, 1, 4, 3]
find_max_values(sequence1)

# Test case 2
sequence2 = [2, 5, 5]
find_max_values(sequence2)