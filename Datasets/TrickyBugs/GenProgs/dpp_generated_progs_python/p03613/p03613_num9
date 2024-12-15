import itertools

def maximize_count(N, sequence):
    max_count = 0
    for X in range(min(sequence), max(sequence) + 1):
        count = 0
        for a in sequence:
            if a < X:
                count += X - a
            elif a > X:
                count += a - X
        max_count = max(max_count, count)
    return max_count

# Read input values
N = int(input())
sequence = list(map(int, input().split()))

# Call the function and print the output
print(maximize_count(N, sequence))