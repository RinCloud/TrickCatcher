'''
PROGRAM:
'''

MOD = 10**9 + 7

def sum_of_scores(N):
    # Calculate the sum of scores over all possible permutations
    result = 1
    for i in range(2, N + 1):
        result = (result * i) % MOD
    return result

# Read the input value of N
N = int(input())

# Calculate and print the sum of scores over all possible permutations
print(sum_of_scores(N))