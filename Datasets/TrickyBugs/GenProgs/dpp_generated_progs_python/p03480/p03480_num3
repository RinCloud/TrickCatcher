s = input()

# Initialize max_length to length of s
max_length = len(s)

# Iterate from length of s to 1
for length in range(len(s), 0, -1):
    # Initialize flag to False
    can_convert = False
    
    # Iterate through the string in segments of length
    for i in range(len(s) - length + 1):
        segment = s[i:i+length]
        
        # Check if all characters in the segment are the same
        if len(set(segment)) == 1:
            # Check if the segment can be converted to all 0's by repeating the operation
            if segment.count('0') >= length:
                can_convert = True
                break
    
    # If a valid segment is found, update max_length and break out of the loop
    if can_convert:
        max_length = length
        break

print(max_length)