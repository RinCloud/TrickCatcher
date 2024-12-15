def max_consecutive_hands(N, K, S):
    # Convert the string to a list of integers
    S = [int(x) for x in S]
    
    # Initialize variables to store the maximum number of consecutive people standing on hands
    max_consecutive_hands = 0
    
    # Iterate through each possible starting position for the consecutive people
    for start in range(N):
        # Initialize variables to store the number of consecutive people standing on hands and the number of directions used
        consecutive_hands = 0
        directions_used = 0
        
        # Iterate through each position from the current starting position
        for i in range(start, N):
            # If the person is already standing on hands, increment the consecutive hands count
            if S[i] == 1:
                consecutive_hands += 1
            
            # If the person is standing on feet, and there are remaining directions, flip the person to hands
            elif S[i] == 0 and directions_used < K:
                consecutive_hands += 1
                directions_used += 1
            
            # If there are no remaining directions, break the inner loop
            else:
                break
        
        # Update the maximum consecutive hands count if necessary
        max_consecutive_hands = max(max_consecutive_hands, consecutive_hands)
    
    # Return the maximum consecutive hands count
    return max_consecutive_hands

# Read the input values
N, K = map(int, input().split())
S = input()

# Call the function and print the result
print(max_consecutive_hands(N, K, S))