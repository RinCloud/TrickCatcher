# Program to count the number of occurrences of 'ABC' in a given string

def count_abc_occurrences(N, S):
    count = 0
    for i in range(N-2):
        if S[i:i+3] == 'ABC':
            count += 1
    return count

# Read input values
N = int(input())
S = input()

# Count the number of occurrences of 'ABC'
result = count_abc_occurrences(N, S)

# Print the result
print(result)