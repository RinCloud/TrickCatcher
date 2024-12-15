# Solution

# Read the inputs
N, K = map(int, input().split())
S = input()

# Iterate K times
for _ in range(K):
    # Create a new list to store the updated states
    new_S = [''] * N

    # Process each device
    for i in range(N):
        # If the device is in state A
        if S[i] == 'A':
            # If the ball comes from the left
            if i == 0 or S[i-1] == 'L':
                new_S[i] = 'L'
            # If the ball comes from the right
            elif S[i-1] == 'R':
                new_S[i] = 'R'
                new_S[i-1] = 'L'
        # If the device is in state B
        elif S[i] == 'B':
            # If the ball comes from the left
            if i == 0 or S[i-1] == 'L':
                new_S[i] = 'R'
            # If the ball comes from the right
            elif S[i-1] == 'R':
                new_S[i] = 'L'

    # Update the states for the next iteration
    S = new_S

# Print the final states
print(''.join(S))