# Getting the input strings S and T
S = input()
T = input()

# Finding the length of S and T
lenS = len(S)
lenT = len(T)

# Initialize the minimum number of characters to change
min_changes = float('inf')

# Iterating over all possible starting positions of T in S
for i in range(lenS - lenT + 1):
    changes = 0
    # Comparing each character of T with the corresponding character of S
    for j in range(lenT):
        # If characters are not same, increment the changes count
        if S[i+j] != T[j]:
            changes += 1
    # Updating the minimum number of changes if necessary
    min_changes = min(min_changes, changes)

# Printing the minimum number of characters to change
print(min_changes)