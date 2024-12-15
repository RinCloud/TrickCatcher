N = int(input())

# Calculate sum of scores over all possible permutations
score_sum = 0
for i in range(1, N):
    score_sum += i

# Print the sum modulo 10^9+7
print(score_sum % (10**9 + 7))
