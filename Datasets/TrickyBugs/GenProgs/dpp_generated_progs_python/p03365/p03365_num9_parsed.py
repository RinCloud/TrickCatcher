import math

def calculate_sum_of_scores(N):
    # Calculate the sum of scores over all possible permutations
    score_sum = 0

    # Iterate over all possible permutations
    for i in range(N-1):
        # Calculate the score for the current permutation
        score = math.factorial(N-1) // math.factorial(i)
        score_sum += score

    # Calculate the sum modulo 10^9+7
    score_sum %= 1000000007

    return score_sum

# Read input from standard input
N = int(input())

# Calculate and print the sum of scores over all possible permutations
print(calculate_sum_of_scores(N))