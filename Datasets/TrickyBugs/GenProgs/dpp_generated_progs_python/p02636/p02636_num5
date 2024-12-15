# Function to count the number of strings modulo 998244353
def count_strings(S):
    mod = 998244353
    n = len(S)
    
    # Initialize the counts
    counts = [0] * n
    counts[0] = 1
    
    for i in range(1, n):
        counts[i] = (counts[i-1] * 2) % mod
        
    # Check for consecutive 1's in S
    if '11' in S:
        return 0
    
    return counts[n-1]

# Read the input string from standard input
S = input().strip()

# Count the number of strings modulo 998244353
result = count_strings(S)

# Print the result
print(result)