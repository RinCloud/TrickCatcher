def min_chars_changed(S, T):
    min_changes = float('inf')  # set initial number of changes to infinity
    
    # Iterate through all possible starting positions in S
    for i in range(len(S)-len(T)+1):
        changes = 0  # number of changes for current starting position
        
        # Count the number of characters that need to be changed
        for j in range(len(T)):
            if S[i+j] != T[j]:
                changes += 1
        
        # Update minimum number of changes if needed
        min_changes = min(min_changes, changes)
    
    return min_changes


# Read input from standard input
S = input().strip()
T = input().strip()

# Compute and print the minimum number of characters to change
print(min_chars_changed(S, T))