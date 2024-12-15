s = input()

# Initialize a variable to store the maximum value of K
max_K = 0

# Iterate through all possible values of K from 1 to the length of the string
for K in range(1, len(s) + 1):
    # Check if the string can be converted to all 0s by repeating the operation
    can_convert = True
    
    # Iterate through all possible starting positions of the contiguous segment
    for start in range(len(s) - K + 1):
        # Calculate the ending position based on the starting position and K
        end = start + K - 1
        
        # Iterate through all characters in the contiguous segment
        for i in range(start, end + 1):
            # If a 0 is found, set can_convert to False and break the loop
            if s[i] == '0':
                can_convert = False
                break
        
        # If can_convert is False, no need to check further, break the loop
        if not can_convert:
            break
    
    # If can_convert is True for the current value of K, update max_K
    if can_convert:
        max_K = K

# Print the maximum value of K
print(max_K)