# Start of the program

# Read the input string
S = input()

# Find the length of the string
N = len(S)

# Initialize the maximum integer K to 0
K = 0

# Iterate over all possible values of K in descending order
for i in range(N, 0, -1):
    # Check if we can turn all the characters to 0 by repeating the operation
    # Start by assuming all characters are 0
    can_turn_to_all_zeros = True
    
    # Iterate over each contiguous segment of length i
    for j in range(N - i + 1):
        segment = S[j:j+i]
        
        # Check if this segment can be turned into all zeros
        if '1' in segment:
            can_turn_to_all_zeros = False
            break
    
    # If we can turn all characters to 0, update K to the current value of i
    if can_turn_to_all_zeros:
        K = i
        break

# Print the maximum integer K
print(K)

# End of the program