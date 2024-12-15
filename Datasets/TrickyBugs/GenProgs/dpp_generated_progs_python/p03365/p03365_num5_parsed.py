import math

N = int(input())

# Compute the sum of the scores over all possible permutations
sum_scores = 0

# Iterate through all possible permutations
for i in range(1, N):
    # Compute the score for this permutation
    score = math.factorial(i)

    # Add the score to the sum
    sum_scores += score

# Compute the sum modulo 10^9+7
sum_scores %= 10**9 + 7

# Print the result
print(sum_scores)