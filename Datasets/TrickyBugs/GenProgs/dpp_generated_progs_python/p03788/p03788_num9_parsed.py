N, K = map(int, input().split())
S = input().strip()

# Find the index of the leftmost 'A' device
leftmost_A = S.find('A')

# Find the index of the rightmost 'B' device
rightmost_B = S.rfind('B')

# If all devices are in state 'B', the final state will be 'B' for all devices
if leftmost_A == -1:
    print('B' * N)
else:
    # Find the number of times the ball will travel from leftmost_A to rightmost_B
    num_travels = rightmost_B - leftmost_A
    
    # Number of times the ball will keep going back and forth between left and right
    cycle = (num_travels * 2) + 2
    
    # The remainder after dividing K by the cycle gives the number of additional cycles
    additional_cycles = K % cycle
    
    # Initially, all devices are in the same state as the leftmost_A device
    final_state = S[leftmost_A]
    
    # Apply the additional cycles to determine the final state of each device
    for i in range(additional_cycles):
        if final_state == 'A':
            final_state = 'B'
        else:
            final_state = 'A'
    
    # Build the final state string by replicating the final state
    final_state_string = final_state * N
    
    print(final_state_string)
