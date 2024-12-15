# Reading input from standard input
N = int(input())
S = input()

# Initializing a variable to store the maximum length
max_length = 0

# Loop to check all possible lengths of substrings
for length in range(N, 1, -1):
    # Loop to check all possible starting positions of substrings
    for i in range(N - length + 1):
        # Extracting the substring from the starting position
        substring = S[i:i + length]
        
        # Checking if the substring occurs more than once without overlapping
        if S.count(substring) >= 2 and substring not in S[i + len(substring):]:
            # Updating the maximum length if a longer substring is found
            max_length = max(max_length, length)
            
# Printing the maximum length of the substring
print(max_length)