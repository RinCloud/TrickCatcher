import sys
input = sys.stdin.readline

# Read the input
N, A, B, C = map(int, input().split())
bamboos = [int(input()) for _ in range(N)]

# Sort the bamboos in descending order
bamboos.sort(reverse=True)

# Initialize counters
mp = 0
count = [0] * (2 ** N)

# Iterate through all possible bamboo combinations
for i in range(2 ** N):
    lengths = []
    for j in range(N):
        if (i >> j) & 1:
            lengths.append(bamboos[j])

    # Check if the combination can form A, B, C bamboos
    if len(lengths) >= 3:
        if sum(lengths) == A:
            count[i] = max(count[i], 1)
        if sum(lengths) == B:
            count[i] = max(count[i], 2)
        if sum(lengths) == C:
            count[i] = max(count[i], 3)

# Initialize the result to a large value
result = float('inf')

# Iterate through all possible values for MP
for i in range(1, N+1):
    # Iterate through all possible combinations of using MP
    for j in range(1, 2 ** N):
        # Check if the current combination uses i MP
        if bin(j).count('1') == i:
            # Iterate through all possible subcombinations
            for k in range(1, j):
                # Check if the subcombination and the complement of the subcombination covers all possibilities
                if (k | j) == j:
                    # Update the result based on the maximum count achieved by the subcombination and the complement
                    result = min(result, count[k] + count[j-k])

# Print the minimum amount of MP needed
print(result)