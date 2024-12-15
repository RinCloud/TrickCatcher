# Getting input from the user
N = int(input())
S = input()

# Initializing the maximum length of a non-empty string
max_length = 0

# Looping through each character in the string
for i in range(N):

    # Looping through each substring starting from the current character
    for j in range(i + 1, N + 1):

        # Checking if the substring occurs more than once in the string without overlapping
        if S.count(S[i:j]) >= 2 and S.count(S[i:j]) * len(S[i:j]) > max_length:

            # Updating the maximum length if a longer substring is found
            max_length = S.count(S[i:j]) * len(S[i:j])

# Printing the maximum length of a non-empty string that occurs twice or more in S as contiguous substrings without overlapping
print(max_length)