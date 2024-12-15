import math

def calculate_permutation_score(N):
    # calculate the sum of scores over all possible permutations
    score_sum = 0
    for i in range(1, N+1):
        score_sum += math.factorial(N-1) // math.factorial(i-1)
    
    return score_sum % (10**9 + 7)

# take input from the user
N = int(input())

# calculate the sum of scores over all possible permutations
result = calculate_permutation_score(N)

# print the result
print(result)