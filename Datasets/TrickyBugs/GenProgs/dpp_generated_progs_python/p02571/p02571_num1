'''
# Read the input strings S and T
S = input().strip()
T = input().strip()

# Define the length of strings S and T
len_S = len(S)
len_T = len(T)

# Initialize the minimum number of characters to be changed as infinity
min_changes = float('inf')

# Loop through each possible starting index i of a substring in S
for i in range(len_S - len_T + 1):
    # Initialize the number of characters changed for the current starting index
    num_changes = 0
    
    # Loop through each character in T
    for j in range(len_T):
        # If the characters at the corresponding indices in S and T are different, increment the number of changes
        if S[i + j] != T[j]:
            num_changes += 1
    
    # Update the minimum number of changes if the current number of changes is less than the current minimum
    if num_changes < min_changes:
        min_changes = num_changes

# Print the minimum number of characters that need to be changed
print(min_changes)
'''