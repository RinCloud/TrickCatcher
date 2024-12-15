# Reading input from standard input
S = input()
T = input()

# Finding the size of S and T
sizeS = len(S)
sizeT = len(T)

# Initialize a boolean variable to check if T is contained in S
contains_T = False

# Initialize an empty string to store the result
result = ""

# Performing a sliding window search to find a substring
for i in range(sizeS - sizeT + 1):
    # Check if the substring from i to i+sizeT matches T
    if all(S[i+j] == "?" or S[i+j] == T[j] for j in range(sizeT)):
        # Update the contains_T variable
        contains_T = True
        # Update the result with the lexicographically smallest string
        if result == "":
            result = S[:i] + T + S[i+sizeT:]
        else:
            result = min(result, S[:i] + T + S[i+sizeT:])

# Print the result or "UNRESTORABLE" if T is not contained in S
if contains_T:
    print(result)
else:
    print("UNRESTORABLE")