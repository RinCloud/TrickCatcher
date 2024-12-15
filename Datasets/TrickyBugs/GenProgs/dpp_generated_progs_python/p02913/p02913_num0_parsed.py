# Getting input
N = int(input())
S = input()

# Initializing variables
max_length = 0

# Traversing the string
for i in range(N):
    # Checking substrings of length greater than or equal to 2
    for j in range(i + 1, N):
        length = j - i  # Length of the substring
        # Checking if the substring occurs twice or more without overlapping
        if i + length <= N - length and S[i:i+length] == S[i+length:i+2*length]:
            max_length = max(max_length, length)

# Printing the maximum length
print(max_length)