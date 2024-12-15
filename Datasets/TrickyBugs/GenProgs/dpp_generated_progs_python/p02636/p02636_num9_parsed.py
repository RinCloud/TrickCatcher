# Implementation

def count_strings(S):
    count = 1
    zeros = S.count('0')
    ones = S.count('1')
    
    for _ in range(zeros+ones-1):
        count = (count * 2) % 998244353
    
    return count


# Read the input
S = input().strip()

# Count the number of strings
count = count_strings(S)

# Print the result
print(count)