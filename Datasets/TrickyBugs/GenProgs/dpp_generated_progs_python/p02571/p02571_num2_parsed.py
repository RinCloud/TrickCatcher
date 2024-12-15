# Given two strings S and T
# We need to find the minimum number of characters in S that need to be changed so that T will be a substring of S

# Let's first check if T is already a substring of S
if T in S:
    print(0)
else:
    # If T is not already a substring of S, we need to find the minimum number of changes required

    # Initialize a variable to store the minimum number of changes required
    min_changes = len(S)

    # Iterate through each possible starting position in S
    for i in range(len(S) - len(T) + 1):
        # Initialize a variable to store the number of changes required for this starting position
        changes = 0
        # Check each character in T and S starting from the current position
        for j in range(len(T)):
            if S[i + j] != T[j]:
                changes += 1
        # Update the minimum number of changes required if necessary
        min_changes = min(min_changes, changes)

    # Print the minimum number of changes required
    print(min_changes)